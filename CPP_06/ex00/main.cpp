#include "Literals.hpp"
#include <iostream>
#include <iomanip>

bool is_number(const std::string& s)
{
 	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;
	char * p;
	strtol(s.c_str(), &p, 10);
	return (*p == 0);
}


bool is_float(const std::string& s)
{
 	if (s == "nanf")
		return true;
 	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;
	char * p;
	std::strtof(s.c_str(), &p);
	return (*p == 'f');
}	

bool is_double(const std::string& s)
{
 	if (s == "nan")
		return true;
	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;
	char * p;
	std::strtod(s.c_str(), &p);
	return (*p == 0);
}

bool is_char(const std::string& s)
{
	if (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]))
		return 1;
	return 0;
}

int	detectType(std::string str){

	if (is_char(str))
		return 3;
	if (is_number(str))
		return 0;
	if (is_float(str))
		return 1;
	if (is_double(str))
		return 2;
	return -1;
}

ALiteral *createLiteral(std::string	str)
{
	switch(detectType(str))
	{
		case 0:
			return (new LiteralInt(str));
		case 1:
			return (new LiteralFloat(str));
		case 2:
			return (new LiteralDouble(str));
		case 3:
			return (new LiteralChar(str));
	}
	return 0;
}


int main(int argc, char *argv[]){

	if (argc != 2)
		return 1;
	ALiteral *literal = createLiteral(std::string(argv[1]));
	if (literal)
		literal->outputAllCasts();
	return 0;
}

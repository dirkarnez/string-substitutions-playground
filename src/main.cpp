#include <map>
#include <string>
#include <iostream>
#include <boost/xpressive/xpressive.hpp>
using namespace boost;
using namespace xpressive;

std::map<std::string, std::string> env;

std::string const &format_fun(smatch const &what)
{
    return env[what[1].str()];
}

int main()
{
    env["X"] = "Y";
    env["Y"] = "that";
    env["XYZ"] = "C++";

    std::string base = "\"$(X)\", \"$(Y)\", $(XYZ) is cool";
    std::string input(base);

    // replace strings like "$(XYZ)" with the result of env["XYZ"]
    sregex envar = "$(" >> (s1 = +_w) >> ')';
    std::string output = regex_replace(input, envar, format_fun);
    std::cout << output << std::endl;

	std::string str;
	std::getline(std::cin, str);

	return 0;
}
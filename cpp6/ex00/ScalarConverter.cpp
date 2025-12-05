#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}


void ScalarConverter::convertC(char c)
{
    std::cout << "convestion de la char" << std::endl;
    std::cout << "char :   " << c << std::endl;
    std::cout << "int :    " << static_cast<int>(c) << std::endl;
    std::cout << "float :  " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertI(int i)
{
    std::cout << "convestion de l'int" << std::endl;
    if (i > 31 && i < 126)
        std::cout << "char :   " << static_cast<char>(i) << std::endl;
    else
        std::cout << "char :   " << "Non displayable" << std::endl;
    std::cout << "int :    " << i << std::endl;
    std::cout << "float :  " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void ScalarConverter::convertF(float f)
{
    std::cout << "convestion du float" << std::endl;
    if (f > 31 && f < 126)
        std::cout << "char :   " << static_cast<char>(f) << std::endl;
    else
        std::cout << "char :   " << "Non displayable" << std::endl;
    std::cout << "int :    " << static_cast<int>(f) << std::endl;
    std::cout << "float :  " << f << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convertD(double d)
{
    std::cout << "convestion du double" << std::endl;
    if (d > 31 && d < 126)
        std::cout << "char :   " << static_cast<char>(d) << std::endl;
    else
        std::cout << "char :   " << "Non displayable" << std::endl;
    std::cout << "int :    " << static_cast<int>(d) << std::endl;
    std::cout << "float :  " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double : " << d << std::endl;
}

void ScalarConverter::convert(char **av)
{
    char *end = NULL;
    std::string s = av[1];
    
    if (s == "nan" || s == "nanf" || s == "+nan" || s == "+nanf") {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
        return;
    }
    if (s == "-nan" || s == "-nanf") {
        std::cout << "char: impossible\nint: impossible\nfloat: -nanf\ndouble: -nan\n";
        return;
    }
    if (s.size() == 1 && atoi(s.c_str()) == 0 && s[0] != '0')
        convertC(s[0]);
    if (s == "inf" || s == "+inf" || s == "+inff" || s == "inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
        return;
    }
    if (s == "-inf" || s == "-inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
        return;
    }
    if (s.size() == 1 && atoi(s.c_str()) == 0 && s[0] != '0')
        convertC(s[0]);
    int i = std::strtol(s.c_str(), &end, 10);
    if (*end == '\0')
        convertI(i);
    float f = std::strtof(s.c_str(), &end);
    if (end[0] == 'f' && !end[1])
        convertF(f);
    double d = std::strtod(s.c_str(), &end);
    if (*end == '\0')
    {
        i = std::strtol(s.c_str(), &end, 10);
        if (*end != '\0')
            convertD(d);
    }
    // std::cout << "error : arugument not valid" << std::endl;
}
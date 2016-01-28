#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

int main ()
{
    std::string str ("Please split this sentence into tokens");

    char * cstr = new char [str.length()+1];
    std::strcpy (cstr, str.c_str());
    string str1 = "ab";
    string str0;
    std::cout << (str1=="") << std::endl;
    std::cout << (str0=="") << std::endl;
    std::cout << str1.size() << std::endl;
    const char * cstr1 = str1.c_str();

    printf("%s\n",cstr1);
    std::string base="this is a test string.";
    std::string str2="ple";
    std::string str3="sample phrase";
    std::string str4="useful.";

    // replace signatures used in the same order as described above:
    //
    //   // Using positions:                 0123456789*123456789*12345
    std::string stra=base;
    stra.replace(9,5,str2);
    std::cout << stra << std::endl;
    //cstr1[0] = 'L';


    // cstr now contains a c-string copy of str
    //
    char * p = std::strtok (cstr," ");
    while (p!=0)
    {
        std::cout << p << '\n';
        p = std::strtok(NULL," ");
    }

    delete[] cstr;
    return 0;
}

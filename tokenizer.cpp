#include <iostream>
#include <string>

using std::cout;

struct person_info
{
    std::string apt;
    std::string street;
    std::string section;
    std::string city;
    std::string state;
    std::string postcode;

} pinfo;

int main()
{
    cout << "enter address using * as delimeter"
         << "\n"
         << "example: No 23*Jalan Raja Udang*Seksyen 23*Shah Alam*Selangor*3000"
         << "\n"
         << "please follow the following sequence, apartment number, street, section, city, state, postcode"
         << "\n";
    std::string str;
    std::getline(std::cin, str);

    // name is from position 0, to until first * found
    pinfo.apt = str.substr(0, str.find("*", 0));
    str = str.substr(str.find("*", 0) + 1, str.length());

    // gender is from position 0 to until first * found
    pinfo.city = str.substr(0, str.find("*", 0));
    str = str.substr(str.find("*", 0) + 1, str.length());

    // age is from position 0, to until ";" found
    pinfo.state = str.substr(0, str.find("*", 0));
    str = str.substr(str.find("*", 0) + 1, str.length());

    // age is from position 0, to until ";" found
    pinfo.postcode = str.substr(0, str.find("*", 0));
    str = str.substr(str.find("*", 0) + 1, str.length());

    // age is from position 0, to until ";" found
    pinfo.street = str.substr(0, str.find("*", 0));
    str = str.substr(str.find("*", 0) + 1, str.length());

    // age is from position 0, to until ";" found
    pinfo.section = str.substr(0, str.find(";", 0));
    str = str.substr(str.find(";", 0) + 1, str.length());

    // prints name, gender, age
    std::cout << pinfo.apt << "\n"
              << pinfo.city << "\n"
              << pinfo.state << "\n"
              << pinfo.postcode << "\n"
              << pinfo.street << "\n"
              << pinfo.section << "\n";
}

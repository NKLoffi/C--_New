#include <iostream>
int main(){
    std::string name ="Nikhil Aji";
    int age = 19;
    std::string address = "22 devitt Ave N";
    std::string Zip_code = "N2J 3E6";
    std::string bestPerson [3] = {"Nikhil Aji", "Nikhil", "Aji Nikhil"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pAddress = &address;
    std::string * pZip_code = &Zip_code;
    std::string *pbestPerson = bestPerson;

    std::cout<<*pName<<'\n';
    std::cout<<*pAge<<'\n';
    std::cout<<*pAddress<<'\n';
    std::cout<<*pZip_code<<'\n';
    std::cout<<*pbestPerson<<'\n';

    return 0;
}
#include <iostream>

std::string concatstring(std::string name1, std::string name2);

int main()
{
    std::string firstName = "Nihil";
    std::string lastName = "Aji";
    std::string fullName = concatstring(firstName, lastName);

    std::cout<<"Hello "<<fullName;


return 0;
}
std::string concatstring(std::string name1, std::string name2){
    return name1+" "+ name2;
}
#include "string.h"

int main()
{
    

    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    name.append("@gmail.com");

    std::cout<<"Your username is now: "<<name<<std::endl;

    return 0;
}
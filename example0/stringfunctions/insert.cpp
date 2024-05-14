#include "string.h"

int main()
{
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);


    name.insert(0, "@");

    std::cout<<name<<std::endl;

    return 0;
}

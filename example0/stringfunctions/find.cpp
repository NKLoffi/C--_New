#include "string.h"

int main()
{
    std::cout<<"Type your name: ";
    std::getline(std::cin, name);

    

    std::cout<<name.find('n')<<std::endl;

    return 0;
}
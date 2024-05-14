#include "string.h"

int main()
{
    std::cout<<"Enter yout name: ";
    std::getline(std::cin, name);

    std::cout<<name.at(1)<<"\n";
    return 0;
}
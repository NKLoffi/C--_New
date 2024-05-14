#include "string.h"

int main()
{
    
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

if(name.empty())
{
    std::cout<<"You cannont proceed further since you didn't enter your name!"<<"\n";
    
}

   else if(name.length()> MAX_CHAR)
    {
        std::cout<<"Name is too long"<<"\n";
    }


    else{
        std::cout<<"Welcome "<<name<<"\n";
    }


    return 0;
}

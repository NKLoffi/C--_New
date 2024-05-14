#include "loop.h"

int main()
{
    do{
        std::cout<<"Enter a positive number: ";
        std::cin>>number; 

    }while(number < 0);


    std::cout<<"The number "<< number << " positive!" <<std::endl;

    return 0;
}
#include <iostream>
int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    std::cout<<"Enter your first number: ";
    std::cin>>num1;

    std::cout<<"Enter your second number: ";
    std::cin>>num2; 

    num4 = num1/num2;
    std::cout<<"Your quotient is: "<<num4<<std::endl;
    
    num3 = num1%num2;
    std::cout<<"Your reminder is: "<<num3<<std::endl;


    return 0;

}
#include<iostream>
int main()
{
    int num1;
    int num2;

    std::cout<<"Enter the starting number: ";
    std::cin>>num1;
    std::cout<<"Enter the ending number: ";
    std::cin>>num2;

    for (int i = num1; i<=num2; i++){
        if(i%2 !=0 ){
            std::cout<<i<<'\n';
        }
    }
    return 0;
}
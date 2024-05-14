#include<iostream>
int factorial(int num);
int main(){
    int num;
    std::cout<<"Enter a number to find it's factorial: ";
    std::cin>>num;
   // std::cout<<factorial(10);
int result = factorial(num);
std::cout<<"The factorial of "<<num<<" is "<<result<<'\n';

    return 0;
}
int factorial(int num){
    if(num>1){
        return   num*factorial(num -1);
    }
    else{
        return 1;
    }
    return 0;
}
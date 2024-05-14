#include <iostream>
int factorial(int num);
int main(){
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    factorial(num);
   
}
int factorial(int num){
    int result =1;

    for (int i =1; i<= num; i++){
        result = result *i;
        
    }
    std::cout<<result<<'\n';
    return result;
}
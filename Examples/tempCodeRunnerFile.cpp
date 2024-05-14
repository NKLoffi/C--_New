#include <iostream>
int main(){
    int num; 
    int sum;
    std::cout<<"Enter a number : ";
    std::cin>>num;
    
    for(int i =0; i<= num; ++i){
        sum +=1;
    }
    std::cout<<"The sum is: "<<sum<<'\n';
    return 0;
}
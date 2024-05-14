#include <iostream>
void nSum(int num, int sum);
int main(){
    int num; 
    int sum=0;
    std::cout<<"Enter a number : ";
    std::cin>>num;
     nSum(num, sum);
    
    return 0;
}
void nSum(int num, int sum){

    for(int i =0; i<= num; ++i){
        sum += i;
    }
    std::cout<<"The sum is: "<<sum<<'\n';
}
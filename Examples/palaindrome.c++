#include <iostream>
int main(void){
    int num;
    int reminder;
    int reversednumber =0;
    std::cout<<"Enter a number to find weather the number is a palindrome or not: ";
    std::cin>>num;
while(num !=0){
    reminder=num%10;
    reversednumber =reversednumber*10 + reminder;
    num= num/10;
}
    std::cout<<reversednumber;
}
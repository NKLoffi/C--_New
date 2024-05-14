#include <iostream>
int main(){
    int prime;
    char key;
    do{
    std::cout<<"Enter a number to check if it is prime or not: ";
    std::cin>>prime;

     if(prime == 2){
        std::cout<<"2 is a prime number"<<'\n';

     }
     else if(prime ==1 ){
        std::cout<<"The number 1 is not a prime number";
     }
     else if(prime%2 == 0){
        std::cout<<"The number "<<prime<<" is not a prime number.\n";
     }
     else{
        std::cout<<"The number "<<prime<<" is a prime number.\n";

     }

     std::cout<<"Do you wanna check another number (Y/N)?: ";
     std::cin>>key;
    }while(key =='Y' );
     return 0;

}
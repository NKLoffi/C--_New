//to display the multiplication table till 10 of the given positive number.
void multiplication(int num, int length);
#include <iostream>
int main(){
    int num;
    int multiply;
    int length;
    std::cout<<"Enter a positive integer number: ";
    std::cin>>num;
    std::cout<<"Till how long do you want the table: ";
    std::cin>>length;
    multiplication(num, length);

    return 0;
}

void multiplication(int num, int length){

    for (int i =0; i<=length; i++){
        std::cout<<num<<" * "<<i<<" = ";
       
       std::cout<< num*i<<'\n';
    }
}
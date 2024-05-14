#include <iostream>
int main(){
    int n1=0, n2=1, num, nextTerm;
    std::cout<<"Enter a positive number: ";
    std::cin>>num;

    std::cout<<"Finonacci series of the number you have entered is:" <<n1<<", " <<n2<<", ";

    nextTerm = n1 + n2; 

    while(nextTerm<=num){
        std::cout<<nextTerm<<", ";
        n1= n2;
        n2 = nextTerm;
        nextTerm = n1 + n2;
    }

    return 0;
}
#include<iostream>
int main(){
    int num, reminder, result=0, ognumber;
    std::cout<<"Enter a number to find weather it is amstromng or not: ";
    std::cin>>num;

    while(ognumber !=0){
        reminder = ognumber %10;
        result += reminder * reminder* reminder;
        ognumber /= 10;
    }

    if(result == num){
        std::cout<<"it is an amstrong number. ";
    }
    else{
        std::cout<<"it is not an amstrong number.";
    }
    return 0;
}
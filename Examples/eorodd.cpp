#include <iostream>
void checkEven(int num);
int main(){
    int num;

    std::cout<<"Enter a number to check if it is even or odd: ";
    std::cin>>num;

    checkEven(num);

return 0;
}
void checkEven(int num){
    if(num %2 == 0 ){
        std::cout<<"The number "<<num<< "is even"<<'\n';
    }
    else{
        std::cout<<"The number"<<num<<"is odd"<<'\n';
    }
    
}
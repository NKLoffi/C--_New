#include<iostream>
int main()
{
    int *ptr = nullptr;
    int x = 999;

     ptr = &x;

    if(ptr == nullptr){
        std::cout<<"There is nothing there (Addy was not assigned)\n";
        
    }

    else{
        std::cout<<"There is something there (Addy was assigned)\n";
        std::cout<<"The some thing was: "<< *ptr<<'\n';
    }
    
    return 0;
}
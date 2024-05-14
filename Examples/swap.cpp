#include <iostream>
void swap(int &x, int &y, int &temp);
void multiply(int &x, int &y);
int main(void){
    int x =10;
    int y =20;
    int temp;

    swap(x,y,temp);
   // multiply(x,y);

    std::cout<<" \n";
    std::cout<<"Value of x is: "<<x<<std::endl;
    std::cout<<" \n";
    std::cout<<"value of y is: "<<y<<std::endl;
     std::cout<<" \n";
    return 0;

    
}
void swap(int &x, int &y, int &temp){
    temp=x;
    x=y;
    y= temp;

    }
void multiply(int &x, int &y)
{
    x = x*2;
    y = y*2;
}
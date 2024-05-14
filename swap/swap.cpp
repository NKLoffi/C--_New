 #include <iostream>
 void swap(int &x, int &y);
 int main()
 {
    int x = 95;
    int y = 59;
    
    swap(x,y);

 

    std::cout<<"X: "<<x<<std::endl;
    std::cout<<"Y: "<<y<<std::endl;

    return 0;
 }
 void swap(int &x, int &y){
    int temp;
    temp = x;
    x=y;
    y= temp;
    
 }
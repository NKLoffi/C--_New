#include <iostream>

int main()
{
    std::string name = "Nikhil Aji";
    int num = 12;
    bool student = true;
    std::cout<<"Adress of name: "<<&name<<std::endl;
    std::cout<<"Adress of num: "<<&num<<std::endl;
    std::cout<<"Adress of student: "<<&student<<std::endl;

    return 0;
}
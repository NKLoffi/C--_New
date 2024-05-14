#include <iostream>
void printFunction(std::string name, int age);

int main(){
    std::string name = "NIKHIL AJI";
    int age = 19;

printFunction(name, age);

}
void printFunction(const std::string name, const int age){ //By using cosnt we wouldn't be able to change the values. If we try to change the value we will get an error.
   
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
} 
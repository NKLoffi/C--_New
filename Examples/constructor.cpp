#include<iostream>

class Student{
    public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->age = age;
        this-> name = name;
        this -> gpa = gpa;

    }
};

int main(){
    Student student1("Nikhil Aji", 19, 2.8);

    std::cout<<student1.name<<'\n';
    std::cout<<student1.age<<'\n';
    std::cout<<student1.gpa<<'\n';


    return 0;
}
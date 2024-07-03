#include<iostream>
struct person{
    std::string name;
    int age;
    int height;
    int weight;

};
int main(){

    person Nikhil;

    Nikhil.name= "Nikhil Aji";
    Nikhil.age = 19;
    Nikhil.height = 180;
    Nikhil.weight = 64;

    std::cout<<Nikhil.name<<'\n';
    std::cout<< Nikhil.age<<'\n';
    std::cout<< Nikhil.height<<'\n';
    std::cout<<Nikhil.weight<<'\nppi';
    return 0;
}
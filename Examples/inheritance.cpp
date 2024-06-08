#include<iostream>

class Animal{
    public:
    bool alive = 1;

    void eating(){
        std::cout<<"This animal is eating\n";
    }

};

class Dog : public Animal{
    public:

    void bark(){
        std::cout<<"The dog goes BOW"<<std::endl;
    }
   

};

class Cat : public Animal{
    public:

    void meow(){
        std::cout<<"The cat goes MEOWWW"<<std::endl;
    }
};

int main(){
   
    Dog dog;
    Cat cat;

    std::cout<<dog.alive<<'\n';

    dog.eating();
    dog.bark();

    cat.meow();

    return 0;
}
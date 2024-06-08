#include <iostream>
class Human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout<<"This person is eating\n";
    }
    void drink(){
        std::cout<<"This person is drinking\n";
    }
    void sleep(){
        std::cout<<"This person is sleeping\n";
    }
};
int main(){
    Human human1;

    human1.name = "Nikhli Aji";
    human1.age = 19;
    human1.occupation = "Dishwasher"; 

    std::cout<<human1.name<<std::endl;
    std::cout<<human1.age<<std::endl;
    std::cout<<human1.occupation<<std::endl;
    human1.eat();
    human1.drink();
    human1.sleep();
     
    return 0;

}
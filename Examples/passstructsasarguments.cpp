#include <iostream>
struct car{
    std::string model;
    int year;
    std::string colour;
};
void printCar(car &Car);
int main(){
    car car1;
    car car2;

    car1.model = "Toyota";
    car1.year = 2004;
    car1.colour = "Black";

    car2.model = "Suzuki";
    car2.year = 2008;
    car2.colour = "White";
    
    printCar(car1);

    printCar(car2);
    return 0;
}

void printCar(car &Car){
    std::cout<< Car.model<<'\n';
    std::cout<<Car.year<<'\n';
    std::cout<<Car.colour<<'\n';
}
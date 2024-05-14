#include <iostream>

int main() {

std::string name = "nikhil";
std::string name1[] = {"Nikhil", "Nimmi", "Lizzy", "Aji"};
int num = 23;
double num1 =43.33;
float num2 = 9.110;
char letter = 'N';

std::cout<<sizeof (name)<< "bytes\n";
 std::cout<<sizeof (name1)<< "bytes\n";
std::cout<<sizeof (num)<< "bytes\n";
std::cout<<sizeof (num1)<< "bytes\n";
std::cout<<sizeof (num2)<< "bytes\n";
std::cout<<sizeof (letter)<< "bytes\n";
std::cout<<"\n\n";
//number of elements
std::cout<<"How namy elements are there in name1\n";
std::cout<<sizeof(name1)/sizeof(std::string)<< " elements\n";


    return 0;
}
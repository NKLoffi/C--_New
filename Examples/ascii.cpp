#include <iostream> //program to find the ASCII value of a character.
int main(){
    char ascii;
    std::cout<<"Enter a character to find it's ASCII value: ";
    std::cin>>ascii;

    std::cout<<"The ASCII value of the character you entered is: "<<int(ascii)<<'\n';
    return 0;

}
#include<iostream>

int main(){
    std::string word;

    std::cout<<"Enter something to change it to upper case: ";
    std::getline(std::cin, word);

    std::transform(
        word.begin(),
        word.end(),
        word.begin(),
        ::toupper
    );

    std::cout<<word<<std::endl;

    return 0;
}
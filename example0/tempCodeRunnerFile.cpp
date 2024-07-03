#include<iostream>
#include <algorithm>
#include <cctype>
#include <string>
int main(){
    std::string word;

    std::cout<<"Enter something to change it to upper case: ";
    std::getline(std::cin, word);

    std::for_each(
        word.begin(),
        word.end(),
        [] (char& ch)
        {
            ch = std::toupper(ch);
        }
    );

    std::cout<<word<<std::endl;

    return 0;
}
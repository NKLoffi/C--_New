//to find weather an alphabet is consonant or vowels
#include <iostream>
void vowels(char vow);
int main(){

char vow;

std::cout<<"Enter a letter to check if it is a vowel or consonenet: ";
std::cin>>vow;
 vowels(vow);

    return 0;
}
void vowels(char vow){
    switch(vow)
    {
    case 'a':
    printf("The letter a is a vowel\n");
    break;
    case 'e':
    printf("The letter e is a vowel\n");
    break;
    case 'i':
    printf("The letter i is a vowel\n");
    break;
    case 'o':
    printf("The letter o id s vowel\n");
    case 'u':
    printf("The letter u is a vowel\n");
    break;
    default:
    printf("The letter is a consonant\n");
    }

    
}
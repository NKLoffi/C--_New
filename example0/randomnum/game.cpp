#include "random.h"

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand()%100)+1;

    std::cout<<"*****************\n";

    do{
        std::cout<<"enter a guess between (1-100): ";
        std::cin>> guess;
        tries++;

        if(guess>num){
            std::cout<<"Too high!\n";
        }
        else if(guess < num){
            std::cout<<"Too low!\n";
        }

        else{
            std::cout<<"you are right, number of tries: "<<tries<<'\n';
        }

    }while(guess!=num);

    return 0;
}
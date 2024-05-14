#include "random.h"

int main()
{
    srand(time(0));
    int randNum = (rand()%5) +1;

    switch(randNum){
        case 1: std::cout<<"You win a sticker!\n";
        break;
        case 2: std::cout<<"You win a Pencil!\n";
        break;
        case 3: std::cout<<"You win a pen!\n";
        break;
        case 4: std::cout<<"You win a Book!\n";
        break;
        case 5: std::cout<<"You win a Novel (Rise of The Dragon)!\n";
        break;
    }

    return 0;
    }
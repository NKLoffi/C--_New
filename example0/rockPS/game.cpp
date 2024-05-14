#include "rps.h"

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"You chose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);



    return 0;
}
char getUserChoice(){
char player;
    std::cout<<"Rock Paper scissors GAME\n";
    do{
    std::cout<<"Choose one of the following:\n";
    std::cout<<"*************************\n";
    std::cout<<"'r' for Rock\n";
    std::cout<<"'p' for Paper\n";
    std::cout<<"'s' for scissors\n";
    std::cout<<"Enter your choosing: ";

    std::cin>> player;

    }while(player != 'r' && player != 'p' && player != 's');

return player;
    
}
char getComputerChoice(){

    srand(time(NULL));
    int num = rand()% 3 +1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p'; 
        case 3: return 's';
    }
return num;
}
void showChoice(char choice){
    switch(choice)
    {
        case 'r': std::cout<<"Rock\n";
        break;
        case 'p': std::cout<<"Paper\n";
        break;
        case 's': std::cout<<"Scissor\n";
        break;
    }

}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
            std::cout<<"It's a tie";
        }
        else if(computer == 'p'){
            std::cout<<"Computer won!\n";
        }
        else if(computer == 's'){
            std::cout<<"You won!\n";
        }
        else {
            std::cout<<"Invalid input\n";
        }
        break;

        case 'p': if(computer == 'p'){
            std::cout<<"It's a tie\n";
        }
        else if(computer == 's'){
            std::cout<<"Computer won!\n";
        }
        else if(computer == 'r'){
            std::cout<<"You won!\n";
        }
        else {
            std::cout<<"Invalid input\n";
        }
        break;

         case 's': if(computer == 's'){
            std::cout<<"It's a tie";
        }
        else if(computer == 'r'){
            std::cout<<"Computer won!\n";
        }
        else if(computer == 'p'){
            std::cout<<"You won!\n";
        }
        else {
            std::cout<<"Invalid input\n";
        }
    }

}
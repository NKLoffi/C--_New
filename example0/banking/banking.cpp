#include "banking.h"

int main()
{
    double balance;
    int choice;

    balance = 0;

    do{
    std::cout<<"Enter your choice: \n";
    std::cout<<"1. Show balance\n";
    std::cout<<"2. Deposit\n";
    std::cout<<"3. Withdraw\n";
    std::cout<<"4. Exit\n";
    std::cin>>choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice)
    {
        case 1: showBalance(balance);
        break;

        case 2: balance += deposit();
        showBalance(balance);
        break;

        case 3: balance -= withdraw(balance);
        showBalance(balance);
        break;

        case 4: std::cout<<"Thanks for visiting\n";
        break;

        default: std::cout<<"Invalid choice\n";
    }

    }while(choice != 4);

return 0;

}
void showBalance(double balance){
std::cout<<"Your available balance is CA$: "<<std::setprecision(2)<<std::fixed<< balance<< '\n';
}
double deposit(){

    double amount = 0;
    std::cout<<"Enter amount to be deposited: ";
    std::cin>>amount;
    amount<1?std::cout<<"Plese input a valid amount\n":std::cout<<"The amount has been deposited in your account sucessfully!\n";

return amount;
}
double withdraw(double balance){
    double amount =0;

    std::cout<<"Enter the amount to be withdrawn: \n";
    std::cin>>amount;
    amount>balance?std::cout<<"You don't have sufficient balance for this transaction\n":std::cout<<"Amount withdrawn sucessfully!\n";

    return 0;
}
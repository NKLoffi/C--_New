#include "random.h"

int main()
{
    srand(time(NULL));

    int num1=(rand()%6)+1;

    std::cout<<num1<<'\n';

    return 0;
}
#include <iostream>
double getTotal(double prices[], int size);

int main(){

    double prices[] = {55.55, 3.4, 1.05, 40};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    std::cout<<"CA$"<<total<<'\n';

    return 0;

}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i=0; i<size; i++){
        total = total + prices[i];

        
    }
    return total;
}
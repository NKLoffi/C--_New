#include <iostream>
int main(){

    std::string foods[10];

    fill(foods, foods+10, "pizza");
    for(std::string food : foods){

        std::cout<<food<<'\n';
    }

    return 0;
}
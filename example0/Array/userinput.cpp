#include <iostream>
int main(){
    std::string brands[5];
    std::string temp;
    int size = sizeof(brands)/sizeof(std::string);

    for(int i =0; i<size; i++){
        std::cout<<"Enter the brands you like or 'q' to quit #"<<i+1<<" ";
        std::getline(std::cin, temp);

        if(temp== "q"){
            break;
        } 
        else{
            brands[i]= temp;
        }

        
    }
std::cout<<"You like the following brands: \n";
    for(int i = 0; !brands[i].empty(); i++){
        std::cout<<brands[i]<<'\n';
    }


    return 0;
}
#include <iostream>

int main(){
    std::string brands[][3]= {{"Apple", "Samsung", "LG"},
                            {"Redmi", "Motorolla", "Blackberry"},
                            {"Dell", "HP", "logi-tech"}};

        int rows = sizeof(brands)/sizeof(brands[0]);
        int columns = sizeof(brands)/sizeof(brands[0][0]);

        for(int i =0; i < rows; i++){
            for(int j=0; j<columns; j++){
                std::cout<<brands[i][j]<<" ";
            }
            std::cout<<'\n';
        }


       // std::cout<<brands[0][0]<<" ";
        //std::cout<<brands[0][1]<<" ";
        //std::cout<<brands[0][2]<<'\n';
        //std::cout<<brands[1][0]<<" ";
        //std::cout<<brands[1][1]<<" ";
        //std::cout<<brands[1][2]<<'\n';
        //std::cout<<brands[2][0]<<" ";
        //std::cout<<brands[2][1]<<" ";
        //std::cout<<brands[2][2]<<'\n';

    return 0;
}
#include <iostream>

int main(){

    std::string brands[] ={"HP", "DELL", "APPLE", "MICROSOFT", "UNI", "ACER", "PROMATE", "ASUS"};

    for(int i = 0; i<=sizeof(brands)/sizeof(std::string); i++){
        std::cout<<brands[i]<<'\n';

    }

    return 0;
}
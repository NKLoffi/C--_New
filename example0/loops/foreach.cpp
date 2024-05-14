#include "loop.h"

int main(){
    std::string brands[] ={"HP", "DELL", "APPLE", "MICROSOFT", "UNI", "ACER", "PROMATE", "ASUS", "SONYv "};

    for(std::string brand : brands){
        std::cout<<brand<<'\n';
    }

    return 0;
}
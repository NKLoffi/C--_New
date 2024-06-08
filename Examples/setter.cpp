#include<iostream>

class Temp{
    private:

     int temprature = 0;

     public:

     int getTemprature(){ //getter

        return temprature;
     }

     void setTemprature(int temprature){ //setter
        if(temprature < 0){
            this->temprature = 0;
        }
        else if(temprature >= 10){
            this-> temprature = 10;
        }
        else {

        this->temprature = temprature;

        }
     }
   
};

int main(){
     Temp temp;
    temp.setTemprature(-3);

    std::cout<<temp.getTemprature()<<'\n';

    return 0;

}
#include<iostream>

class temp{
    private:

    int temprature = 20;

    public: // used getter so it makes it readable;

    int getTemprature(){

    return temprature;
    }

};

int main()
{ 
    temp Temp;

   // Temp.temprature = 30;

    std::cout<<Temp.getTemprature();
    return 0;

}
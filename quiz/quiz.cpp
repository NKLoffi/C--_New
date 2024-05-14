#include <iostream> 
int main()
{
    std::string questions[] = {"1. What year was c++ created?",
                                "2. Who invented C++?",
                                "3. What is the predecessor of c++?",
                                "4. Is the earth flat?"};

    std::string options[] [4] = {{"A. 2004" , "B. 2003", "C. 1985", "D. 2000"},
                                {"A. Nikhil Aji", "B. Meera Kurup", "C. Jino Baby", "D. Bjarne Stroustrup"},
                                {"A. A+", "B. B+", "C. C++", "D. D++"},
                                {"A. YES", "B. No", "C. BRUH!!", "D. MaY Be"}};


     char answerKey[]= {'C', 'D', 'C', 'B'};
     int size = sizeof(questions)/sizeof(questions[0]);
     char guess;
     int score;

    for (int i =0; i<size; i++){
        std::cout<< "*************************\n";
        std::cout<< questions[i]<< '\n';
         

        for(int j =0; j<sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout<< options[i][j]<<'\n';
        }

    std::cin>> guess;
    guess = toupper(guess);

    if(guess == answerKey[i]){
        std::cout<<"Right Answer"<<std::endl;
        score++;
    }
    else{
        std::cout<<"Wrong Answer\n";
        std::cout<<"Answer: " <<answerKey[i]<<'\n';
    }


    }

    std::cout<<"Correct guesses: "<<score<<'\n';
    std::cout<<"Number of questions: "<<size<<'\n';
    std::cout<<"Score: "<<(score/(double)size)*100<<"%";

    return 0;   
}       
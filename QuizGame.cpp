#include <iostream>

int main(){
        std::string questions[] = {"Who is the father of Computer?: ",
                                   "Who invented C++?: ",
                                   "Who are you?: ",
                                   "What is Life?: "};
                                   
        std::string options[][4] = {{"A. Charles Babbage", "B. Albert Einstien", "C. Isacc Newton"},
                                   {"A. John Kennedy", "B. Mark Zuckerberg", "C. Bjarne Strustrup", "D. Elon Musk"},
                                   {"A. Human Being", "B. Conciousness", "C. Part of God"},
                                   {"A. Life is Meaningless", "B. Dependes on personal PErspective", "C. Life is conciousness"}};

        char answerKey[] = {'A', 'C', 'B', 'C'};

        int size = sizeof(questions)/sizeof(questions[0]);
        int score = 0;
        char choice;
        int wrong = 0;

        for (int i = 0 ; i < size ; i++){

                std::cout << "********************************\n";

                std::cout << questions[i] << '\n';

                std::cout << "********************************\n";

                for (int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]); j++){

                    std::cout << options[i][j] << '\n';

                 }

                 std::cin >> choice ;
                 choice = toupper(choice);

                 if (choice == answerKey[i]){

                    std::cout << "Correct!!\n" ; 
                    score++;


                 }
                 else {
                    std::cout << "Wrong!!\n";
                    std::cout << "Correct answer is: "<< answerKey[i] << '\n';
                    wrong++;

                 }




        }

        std::cout << "*****************************************\n";
        std::cout << "*                                       *\n";
        std::cout << "*               RESULT                  *\n";
        std::cout << "*                                       *\n";
        std::cout << "*****************************************\n";
        std::cout << "Total correct answers : " << score << '\n';
        std::cout << "No. of incorrect answers: "<< wrong << '\n';






    return 0;

}
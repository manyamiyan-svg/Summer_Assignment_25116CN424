#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int askQuestion(char question[], char options[][100], int correctAnswer);
int main() {
    int score;
    srand(time(NULL));
    while (1) {
        score = 0;
        printf("        A Warm Welcome To The Quiz Competition        \n\n");
        printf("READ THE FOLLOWING RULES CAREFULLY TO PLAY THE QUIZ COMPETITION:\n\n");
        printf("1 - One point will be given for a correct answer, while one point will be deducted for an incorrect answer.\n");
        printf("2 - Are you all set to play the quiz and test your brain?\n\n");
        printf("Enter 1 to start the quiz, or any other number to exit.\n");
        int start;
        if (scanf("%d", &start) != 1) {
            printf("Invalid input. Exiting quiz.\n");
            break;
        }
        if (start != 1) {
            printf("Quiz exited. Goodbye!\n");
            break;
        }
        char questions[30][200] = {
            "Which river flows between the Satpuras and Vindhyas?",
            "Who is the first Indian to be elected to the British Parliament?",
            "Chapchar Kut is a festival of which state"?
    "An onion is a modified form of?",
            "When was Kshetriya Gramin Bank established?",
            "Who was the flag bearer of India at Rio Olympics 2016?",
            "What is the national flower of India?",
            "Who is known as the 'Father of the Nation' in India?",
            "In which year did India gain independence?",
            "Which is the longest river in India?",
            "What is the capital of India?",
            "Who was the first President of India?",
            "Who wrote the Indian National Anthem?",
            "What is the official language of India?",
            "Which is the national animal of India?",
            "Who invented the light bulb?",
            "Who was the first man to walk on the Moon?",
            "Who developed the theory of relativity?",
            "What is the largest continent by area?",
            "What is the longest bone in the human body?",
            "Who painted the Mona Lisa?",
            "Which country is known as the Land of the Rising Sun?",
            "What is the national bird of India?",
            "Who is the founder of Microsoft?",
            "Which city is the capital of Australia?",
            "In which year was the first human flight into space?",
            "What is the atomic number of Oxygen?",
Which planet is known as the Red Planet?",
            "Who is the author of 'The Catcher in the Rye'?",
            "Which is the largest ocean on Earth?"
        };
        char options[30][4][100] = {
            {"1) Godavari","2) Narmada","3) Gandak","4) None of these"},
            {"1) Bipin Chandra Pal","2) Dadabhai Naoroji","3) Lala Lajpat Rai","4) None of these"},
            {"1) Manipur","2) Nagaland","3) Mizoram","4) Meghalaya"},
            {"1) Stem","2) Root","3) Leaf","4) None of these"},
            {"1) 1987","2) 1925","3) 1999","4) 1975"},
            {"1) Abhinav Bindra","2) Yogeshwar Dutt","3) Jwala Gutta","4) PV Sindhu"},
            {"1) Lotus","2) Sunflower","3) Rose","4) Jasmine"},
            {"1) Jawaharlal Nehru","2) Subhas Chandra Bose","3) Mahatma Gandhi","4) Sardar Patel"},
            {"1) 1947","2) 1950","3) 1937","4) 1960"},
            {"1) Yamuna","2) Godavari","3) Ganges","4) Narmada"},
            {"1) Mumbai","2) New Delhi","3) Bangalore","4) Kolkata"},
            {"1) Jawaharlal Nehru","2) Rajendra Prasad","3) Dr. Sarvepalli Radhakrishnan","4) Sardar Patel"},
            {"1) Mahatma Gandhi","2) Bankim Chandra Chattopadhyay","3) Subhas Chandra Bose","4) Rabindranath Tagore"},
            {"1) Hindi","2) English","3) Tamil","4) Bengali"},
            {"1) Lion","2) Elephant","3) Tiger","4) Deer"},
            {"1) Nikola Tesla","2) Thomas Edison","3) Alexander Graham Bell","4) Benjamin Franklin"},
            {"1) Neil Armstrong","2) Buzz Aldrin","3) Michael Collins","4) Yuri Gagarin"},
            {"1) Isaac Newton","2) Galileo Galilei","3) Nikola Tesla","4) Albert Einstein
 {"1) Africa","2) Asia","3) Europe","4) North America"},
            {"1) Femur","2) Tibia","3) Radius","4) Humerus"},
            {"1) Pablo Picasso","2) Leonardo da Vinci","3) Vincent van Gogh","4) Michelangelo"},
            {"1) China","2) South Korea","3) Japan","4) Thailand"},
            {"1) Peacock","2) Sparrow","3) Eagle","4) Crow"},
            {"1) Bill Gates","2) Steve Jobs","3) Mark Zuckerberg","4) Larry Page"},
            {"1) Sydney","2) Melbourne","3) Canberra","4) Brisbane"},
            {"1) 1961","2) 1960","3) 1969","4) 1971"},
            {"1) 6","2) 8","3) 10","4) 16"},
            {"1) Earth","2) Venus","3) Mars","4) Jupiter"},
            {"1) J.D. Salinger","2) Harper Lee","3) F. Scott Fitzgerald","4) George Orwell"},
            {"1) Arctic Ocean","2) Atlantic Ocean","3) Indian Ocean","4) Pacific Ocean"}
        };
        int correctAnswers[30] = {
            2,2,3,1,4,1,1,3,1,3,
            2,2,4,1,3,2,1,4,2,1,
            2,3,1,1,3,1,2,3,1,4
        };
int asked[30] = {0};
        int questionsAsked = 0;
        while (questionsAsked < 20) {
            int index = rand() % 30;
            if (!asked[index]) {
                asked[index] = 1;
                printf("\nQuestion %d:\n", questionsAsked + 1);
                score += askQuestion(
                    questions[index],
                    options[index],
                    correctAnswers[index]
                );
                questionsAsked++;
            }
        }
        printf("\nYou scored %d points!\n", score);
        if(score > 15)
            printf("You played the game very well!\n");
        else if(score > 12)
            printf("Well played!\n");
        else if(score > 9)
            printf("Not bad, but you can do better!\n");
        else if(score > 5)
            printf("Focus!! Try harder.\n");
        else
            printf("Try again!\n");
        printf("\nEnter 1 to restart or any other number to quit.\n");
int restart;
        if(scanf("%d",&restart)!=1 || restart!=1){
            printf("Thanks for playing!\n");
            break;
        }
    }
    return 0;
}
int askQuestion(char question[], char options[][100], int correctAnswer){
    int answer;
    printf("\n%s\n",question);
    for(int i=0;i<4;i++)
        printf("%s\n",options[i]);
    printf("\nSelect your answer (1-4): ");
    if(scanf("%d",&answer)!=1){
        printf("Invalid input. -1 point.\n");
        while(getchar()!='\n');
        for(int i=0;i<60;i++)
            printf("*");
        printf("\n");
        return -1;
    }
    if(answer==correctAnswer){
        printf("Correct answer! +1 point\n");
        for(int i=0;i<60;i++)
            printf("*");
        printf("\n");
        return 1;
    }
    printf("Wrong answer. -1 point\n");
    for(int i=0;i<60;i++)
         printf("*");
    printf("\n");
    return -1;
}

#include <iostream>
int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num=(rand()%100)+1;
    std::cout<<"****** NUMBER GUESSING GAME ******\n";

    do{
        std::cout<<"Enter a number between (1-100):";
        std::cin>>guess;
        tries++;

    if(guess>num){
        std::cout<<"Too high!\n";
    }
    else if(guess<num){
        std::cout<<"Too low!\n";
    }
    else{
        std::cout<<"Correct!"<<'\n';
        std::cout<<"Number to tries:"<<tries<<'\n';
    }
    }while(guess!=num);
        std::cout<<"**********************Finished!**********************";
   
    return 0;
    system("pause"); 
}
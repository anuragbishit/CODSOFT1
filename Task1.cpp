// TASK:1= Create a program that generate a random number and asks the user to Guess it.
//  Provide feedback on whether the guess is Too high or Too Low until the user guesses 
// the coreect number.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

std::srand(std::time(0));

    int AnyNumber = std::rand() % 100 + 1;
     int youGuess;
     int attempts =0;

      std::cout<<"hey buddy please think a number between 1 to 100.\n";
        

      do{
        std::cout<<"Hey bro! Insert your guess:";
        std::cin>> youGuess;

         if(youGuess< AnyNumber) {
          std::cout<<"To low! hey buddy  please think high\n";
         } else if (youGuess >AnyNumber){
          std::cout<<"To high! hey buddy please think low\n";
         }
         attempts++;

         } while (youGuess != AnyNumber);
         std::cout<<"congratulation buddy you guessed the number in " << attempts <<"guesses\n";
         return 0;
      
}
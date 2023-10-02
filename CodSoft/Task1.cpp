//  Create a program that generates a random number and asks the
//  user to guess it. Provide feedback on whether the guess is too
//  high or too low until the user guesses the correct number.

#include<iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    cout<<"You will have to guess a number between 1 to 100"<<endl;
    cout<<"Lets start the game"<<endl;

    int guess,number;
    srand(time(0));  // Random number generator
    number = rand()%100 + 1;    // Generates Random number between 1 to 100
    cout<<"The number is "<<number<<endl;

    while(guess > 0 && guess <= 100  )
    {
        cout<<"Enter a number to check :"<<endl;
        cin>>guess;
        if(guess > number)
        {
            cout<<"Lower number please"<<endl;
        }
        else if(guess < number){
            cout<<"Higher number please"<<endl;
        }
        else{
            cout<<"Congrats. You have succesfully guessed the right number"<<endl;
            break;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){

    int target = 33;
    int guess;
    cout<<"Guess a number between 0-100\n";
    cin>>guess;
    cout<<"You guessed: "<<guess<<"\n";

    if(guess<target){
        cout<<"Your guess is too low \n";
    }
    else if(guess>target){
        cout<<"Your guess is too high \n";
    }
    else
    {
        cout<<"Your guess is correct and matched";
    }
    return 0;
}
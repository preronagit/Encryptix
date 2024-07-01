#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int random_number,guess;
    srand(static_cast<unsigned int>(time(0)));
    random_number=(rand()%100)+1;
    cout<<random_number;
    cout<<"Let's play number guessing game!\n";
    while(true){
        cout<<"Guess any number in the range 1 to 100:\n";
        cin>>guess;
        if(random_number>guess)
        cout<<"Your guess is too low!\n";
        else if (random_number<guess)
        cout<<"Your guess is too high!\n";
        else{
            cout<<"Congratulations! You have correctly guessed the number 😄\n";
            break;
        }
    }
    return 0;

}
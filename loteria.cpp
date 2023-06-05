/*This program will help me, and my family play loteria without having to use a mobile APP that barely works
    For this program we will need to cover various steps to make it work properly

    1. Make the program output the name of the Cards (CHECK)
        a) Make the program output numbers and assign said numbers with the name of the cards using IF statements
    2. Make the program output the name of the Cards that have been said previously
    3. Make sure that the program doesn't print repetitive cards
    4. Give the program register a KEY word for it to know when to stop (BUENAS OR BINGO)
    5. Make the program take in a KEY word for it to continue (NEXT OR 1)
    6. Make the program reset at the end when the KEY word for stop has been called

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout<<"Corre y se va!!!\n";

    srand(time(NULL));
    int answer = rand() % 54 + 1;


    if(answer == 1){
        cout<<"EL GALLO\n";
    }
    else if(answer == 2){
        cout<<"EL DIABLITO\n";
    }
    else if(answer == 3){
        cout<<"LA DAMA\n";
    }
    else if(answer == 4){
        cout<<"EL CATRIN\n";
    }
    else if(answer == 5){
        cout<<"EL PARAGUAS\n";
    }
    else if(answer == 6){
        cout<<"LA SIRENA\n";
    }
    else{
        cout<<"ERROR";
    }

}
#include <iostream>
#include <vector>
using namespace std;

void gameGrid(){
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout<<"[choose x or o]";
        }
        cout<<endl;
    }
    cout<<endl;
}

void playerChoice1(){
    // Player 1 can only choose X
}
void playerChoice2(){
    // Player 2 can only choose o
}

void gameGrid2(){
    // 
    string answer[9];
    cout<<"["<<answer[0]<<"]"<<"["<<answer[1]<<"]"<<"["<<answer[2]<<"]"<<endl;
    cout<<"["<<answer[3]<<"]"<<"["<<answer[4]<<"]"<<"["<<answer[5]<<"]"<<endl;
    cout<<"["<<answer[6]<<"]"<<"["<<answer[7]<<"]"<<"["<<answer[8]<<"]"<<endl;
}


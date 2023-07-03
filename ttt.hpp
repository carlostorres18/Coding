#include <iostream>
#include <vector>
using namespace std;

void gameGrid(){
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout<<"[]";
        }
        cout<<endl;
    }
    cout<<endl;
}
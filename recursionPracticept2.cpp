#include <iostream>
using namespace std;

void countdown(int num){
    if(num == 0){
        cout<<0;
    }
    else{
        cout<<num<<endl;
        countdown(num - 1);
    }
}

int countdownR(int num){
    if(num == 0){
        cout<<0;
    }
    else{
        cout<<num<<endl;
        countdown(num - 1);
    }
}

int main(){
    countdown(10);
    cout<<endl<<endl;
    countdownR(20);
}
    


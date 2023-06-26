#include <iostream>
#include <vector>
using namespace std;

int main(){
    int total_even = 0;
    int product_odd = 1;

    vector<int> vector = {2, 4, 3, 6, 1, 9};

    for(int i = 0; i < vector.size(); i++){
        if(vector.at(i) % 2 == 0){
            total_even += vector.at(i);
        }
        else{
            product_odd *= vector.at(i);
        }
    }

    cout<<"Sum of numbers is "<<total_even<<"\n";
    cout<<"Product of odd numbers is "<<product_odd<<"\n";
}
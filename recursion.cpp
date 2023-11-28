#include <iostream>
using namespace std;

int sum_digits(int number){
    // Base Case: When the recursion is going to stop
    if(number == 0){
        return 0;
    }

    // Recursive Case: When the fucntion calls itself
    return number % 10 + sum_digits(number / 10);
}
/*
    Target:
    sum_digits(237) = 7 + 3 + 2 + 0 = 12

    sum_digits(237) = 7 + sum_digits(23)

    sum_digits(23) = 3 + sum_digits(2)
    
    sum_digits(2) = 2 + sum_digits(0)

    sum_digits(0) = 0

*/

int main(){
    // 237 -> 2 + 3 + 7 = 12

    // number = 237
    //
    // 237 / 10 = 23 remainder 7
    //  23 / 10 =  2 remainder 3
    //   2 / 10 =  0 remainder 2

    // 237 % 10 = 7
    // 237 / 10 = 23
    // 

    int number = 0;

    cout<<"Enter number : ";
    cin>>number;

    cout<<"Digits Sum: "<<sum_digits(number)<<endl;

    return 0;

}
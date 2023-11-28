#include <iostream>
using namespace std;

int count_digits(int number);


int main(){
    // 3512 / 10 = 351
    //  351 / 10 = 35
    //   35 / 10 = 3
    //    3 / 10 = 0

    cout<<count_digits(3512)<<endl;


}

int count_digits(int number){
    // Base Case:
    if(number / 10 == 0){
        return 1;
    }

    // Recursive Case:
    return 1 + count_digits(number / 10);
}

// count_digits(792) ->
//      1 + count_digits(79)
//      1 + count_digits(7)
//      1 + count_digits(0)
//      1 + 1 + 1 = 3;
// 
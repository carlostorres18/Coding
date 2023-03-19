#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float temperature;
    int unit;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter unit (1 for Celsius, 2 for Fahrenheit): ";
    cin >> unit;

    if (unit == 1) { // convert Celsius to Fahrenheit
        temperature = temperature * 1.8 + 32;
        cout << fixed << setprecision(1) << temperature << " F" << endl;

        if (temperature <= 32) {
            cout << "Freezing" << endl;
        } else if (temperature <= 50) {
            cout << "Cold" << endl;
        } else if (temperature <= 68) {
            cout << "Mild" << endl;
        } else if (temperature <= 86) {
            cout << "Warm" << endl;
        } else {
            cout << "Hot" << endl;
        }
    } else { // convert Fahrenheit to Celsius
        temperature = (temperature - 32) / 1.8;
        cout << fixed << setprecision(1) << temperature << " C" << endl;

        if (temperature <= 0) {
            cout << "Freezing" << endl;
        } else if (temperature <= 10) {
            cout << "Cold" << endl;
        } else if (temperature <= 20) {
            cout << "Mild" << endl;
        } else if (temperature <= 30) {
            cout << "Warm" << endl;
        } else {
            cout << "Hot" << endl;
        }
    }

    return 0;
}
// This program prompts the user to enter a temperature and a unit (1 for Celsius, 2 for Fahrenheit), converts the temperature to the other unit, and outputs the converted temperature along with a message indicating how the temperature feels based on the ranges provided. The temperature is rounded to one decimal place using the fixed and setprecision functions from the iomanip library.





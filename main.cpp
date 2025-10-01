#include <iostream>
using namespace std;

int main () {
    cout << "this is a temperature conversion program\n";
    double temperature;
    char unit;
    cout << "choose a temperature unit ( F or C ):\n";
    cin >> unit;
    switch (unit) {
        case 'f':
        case 'F': {
            cout << "enter the temperature in celsius:" << endl;
            cin >> temperature;
            temperature = (temperature * 1.8) +32.0;
            cout << "temperature is: " << temperature << endl;
            break;
    }
        case 'c':
            case 'C': {
            cout << "enter the temperature in Fahrenheit: " << endl;
            cin >> temperature;
            temperature = (temperature - 32) * 5 / 9;
            cout << "temperature is: " << temperature << endl;
            break;
        }
    default:
    cout << "enter only in F or C:" << endl;
}
    return 0;
    }
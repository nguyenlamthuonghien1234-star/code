#include <iostream>
using namespace std;

int main () {
    double num1, num2, ans;
    char dau;
    cout << "Please enter two numbers and add +-*/";
    cin >> num1 >> dau >> num2;
    switch (dau) {
        case '+':
        ans = num1 + num2;
        cout << ans << endl;
        break;
        case '-':
        ans = num1 - num2;
        cout << ans << endl;
        break;
        case '*':
        ans = num1 * num2;
        cout << ans << endl;
        break;
        case '/':
        ans = num1 / num2;
        cout << ans << endl;
        break;
        default:
            cout << "Please enter a number and add /";
            break;
}
            return 0;
    }
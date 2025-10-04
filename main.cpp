#include <iostream>
using namespace std;
int main () {
    string playerA1, playerB1, tayA, tayB, playerA2, playerB2;
    const string PHAI = "PHAI";
    const string TRAI = "TRAI";
    const string BUA  = "BUA";
    const string KEO  = "KEO";
    const string BAO  = "BAO";
    cin >> playerA1 >> playerA2;
    cin >> playerB1 >> playerB2;
    cin >> tayA >> tayB;
    if (tayA == TRAI && tayB == PHAI) {
        if (playerA2 == playerB1) {
            cout << "DRAW" << endl;
        }
        else if ((playerA2 == BAO && playerB1 == KEO) || (playerA2 == KEO && playerB1 == BUA) ||
            (playerA2 == BUA && playerB1 == BAO)) {
            cout << "B WON" << endl;
            }
        else if ((playerA2 == KEO && playerB1 == BAO || playerA2 ==BUA && playerB1 == KEO || playerA2 ==BAO && playerB1 == BUA)) {
            cout << "A WON" << endl;
        }
    }
    //#######################################################################

    else {
        if (playerA1 == playerB2) {
            cout << "DRAW" << endl;
        }
        else if ((playerA1 == BAO && playerB2 == KEO) || (playerA1 == KEO && playerB2 == BUA) ||
            (playerA1 == BUA && playerB2 == BAO)) {
            cout << "B WON" << endl;
            }
        else if ((playerA1 == KEO && playerB2 == BAO || playerA1 ==BUA && playerB2 == KEO || playerA1 ==BAO && playerB2 == BUA)) {
            cout << "A WON" << endl;
        }
    }

    return 0;
}
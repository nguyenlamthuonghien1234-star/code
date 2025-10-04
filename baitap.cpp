#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main() {
    double x,y,z;
    cin >> x >> y >> z;
    double p = (x+y+z)/2;
    double dientich = sqrt(p*(p-x)*(p-y)*(p-z));
    cout << fixed << setprecision(2);


    if (x == y && x == z && y == z && x < y + z && y < x + z && z < x + y ) {

        cout << "Tam giac deu," << " " << "dientich = " << dientich << endl;
        return 0;
    }
    if ((x == y || x == z || y == z) && x < y + z && y < x + z && z < x + y) {

        cout << "Tam giac can," << " " << "dientich = " << dientich;
        return 0;
    }
    if ( x < y + z && y < x + z && z < x + y && (x*x + y*y == z*z ||x*x + z*z == y*y ||y*y + z*z == x*x)) {

        cout << "tam giac vuong," << " " << "dientich = " << dientich;
        return 0;
    }
    if (x < y + z && y < x + z && z < x + y) {

        cout << "Tam giac thuong," << " " << "dien tich = " << dientich;
        return 0;
    }
    if (x >= y + z || y >= x + z || z >= x + y) {
        cout << "Khong phai tam giac" << endl;
        return 0;
    }
}
#include <algorithm>
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    
    int x3 = x2 + dy, y3 = y2 - dx;
    int x4 = x1 + dy, y4 = y1 - dx;

    cout << "(" << x1 << "," << y1 << ")"
         << "(" << x2 << "," << y2 << ")"
         << "(" << x3 << "," << y3 << ")"
         << "(" << x4 << "," << y4 << ")\n";

    x3 = x2 - dy; y3 = y2 + dx;
    x4 = x1 - dy; y4 = y1 + dx;

    cout << "(" << x1 << "," << y1 << ")"
         << "(" << x2 << "," << y2 << ")"
         << "(" << x3 << "," << y3 << ")"
         << "(" << x4 << "," << y4 << ")\n";

    return 0;
}
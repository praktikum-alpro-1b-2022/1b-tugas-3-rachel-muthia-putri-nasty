#include <iostream>
#include <math.h>

using namespace std;

int main () {
    float b = 35, x = 15, c = 10;
    float y ;

    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;

    cout << "Selesaikan persamaan berikut y = bx^2 + 0.5x - c" << endl;
    cout << "y = 25 (15)^2 + 0.5 (15) - 20" << endl;
    y = (b * x * x) + 0.5 * x - c;

    cout << "Nilai y = " << y << endl;

    return 0;
}

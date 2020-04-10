#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    int n;
    int a = 10;
    a += 1;
    cout <<"a: " << a << endl;
    cout << "Enter integer value n:";
    cin >> n;
    Point p(12, 12);
    Point p1;
    cout << "p: ";
    p.print();
    cout << "p1: ";
    p1.setx(11);
    p1.sety(15);
    p1.print();
    Point p2 = p + p1;
    cout << " (+) " << "p2: " << p2 << "\n";
    Point p3 = p - p1;
    cout << " (-) " << "p3: " << p3 << "\n";
    p += n;
    cout << " (+=)" << "p: " << p << "\n";
    p -= n;
    cout << " (-=)" << "p: " << p << "\n";
    p *= n;
    cout << " (*=)" << "p: " << p << "\n";
    p /= n;
    cout << " (/=)" << "p: " << p << "\n";
    if((p > p1)== true)
        cout << " (<>) " << "p > p1";
    else
        cout << " (<>) " << "p < p1 or p = p1";
    p = p1;
    cout << "\n";
    cout << " (=) ";
    cout << " p: " << p << "; " << "p1: " << p1;
    return 0;

}

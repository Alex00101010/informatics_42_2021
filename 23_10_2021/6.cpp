#include <iostream>
#include <cmath>

using namespace std;

int SixDigNumbProd (int inp) {
    int inpcopy = abs(inp);
    int n1, n2, n3, n4, n5, n6;
    n6 = inpcopy % 10;
    inpcopy /= 10;
    n5 = inpcopy % 10;
    inpcopy /= 10;
    n4 = inpcopy % 10;
    inpcopy /= 10;
    n3 = inpcopy % 10;
    inpcopy /= 10;
    n2 = inpcopy % 10;
    inpcopy /= 10;
    n1 = inpcopy % 10;
    inpcopy /= 10;
    return (n1 * n2 * n3 * n4 * n5 * n6);
}

int main () {
    int sdn;
    cout << "Enter 6-digit number: ";
    cin >> sdn;
    if ((abs(sdn) / 100000) >= 1 && (abs(sdn) / 100000) < 10) {
        cout << "Result: " << SixDigNumbProd(sdn) << endl;
    } else {
        cout << "Not 6-digit number." << endl;
    }
    return 0;
}
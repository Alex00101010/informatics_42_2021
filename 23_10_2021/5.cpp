#include <iostream>
#include <cmath>

using namespace std;

float D(float x, float y, float z) {
    return (pow(y,2) - 4 * x * z);
}

int main()
{
    float x;
    float y;
    float z;
    cout << "Enter x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    float _D = D(x,y,z);
    
    if(_D < 0) {
        cout << "No roots" << endl;
    } else if(_D == 0) {
        cout << "One root: " << (-y/(2*x)) << endl;
    } else {
        cout << "Two roots: 1) " << ((-y + sqrt(_D))/(2*x)) << "2) " << ((-y - sqrt(_D))/(2*x)) << endl;
    }

    return 0;
}
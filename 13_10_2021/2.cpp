#include <iostream>
#include <cmath>

using namespace std;

class nothing {
    //literaly nothing
};

float PerimetrFunc(float a, float b, float c, float d) {
    return (a+b+c+d);
}
float PerimetrFunc(float r, nothing _nothing) {
    return (2*M_PI*r);
}
float PerimetrFunc(float a) {
    return (4*a);
}

float SquareFunc(float a, float b, float c, float d) {
    return (((a+b)/2) * sqrt(pow(c,2) - pow((pow(b-a,2)+pow(c,2)-pow(d,2))/(2*(b-a)),2)));
}
float SquareFunc(float r, nothing _nothing) {
    return (M_PI * pow(r,2));
}
float SquareFunc(float a) {
    return pow(a,2);
}

void trapeze() {
    float a;
    float b;
    float c;
    float d;
    cout << "Enter trapeze a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
    
    float perimetr = PerimetrFunc(a,b,c,d);
    float square = SquareFunc(a,b,c,d);
    
    cout << "Perimetr: " << perimetr << endl;
    cout << "Square: " << square << endl;
}

void circle() {
    nothing _nothing; //but I need this
    float r;
    cout << "Enter circle radius: ";
    cin >> r;
    
    float perimetr = PerimetrFunc(r, _nothing);
    float square = SquareFunc(r, _nothing);
    
    cout << "Perimetr: " << perimetr << endl;
    cout << "Square: " << square << endl;
}

void square() {
    float a;
    cout << "Enter square side: ";
    cin >> a;
    
    float perimetr = PerimetrFunc(a);
    float square = SquareFunc(a);
    
    cout << "Perimetr: " << perimetr << endl;
    cout << "Square: " << square << endl;
}

int main()
{
    trapeze();
    cout << endl;
    circle();
    cout << endl;
    square();

    return 0;
}

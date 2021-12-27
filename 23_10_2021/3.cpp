#include <iostream>
#include <cmath>

using namespace std;

float Summ(int k) {
    int n = 1;
    float result = 0;
    while(n < k) {
        result += (2 / ((2*(float)n+1)*(2*(float)n+3)));
        n++;
    }
    return result;
}
float Prod(int k) {
    int n = 1;
    float result;
    while(n < k) {
        result *= (pow(-1, n-1) + n);
        n++;
    }
    return result;
}

int main()
{
    int k;
    cout << "Enter k: ";
    cin >> k;
    cout << "Summ: " << Summ(k) << endl;
    cout << "Prod: " << Prod(k) << endl;
    return 0;
}

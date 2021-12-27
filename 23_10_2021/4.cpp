#include <iostream>

using namespace std;

long EvenSumm(int start, int end) {
    long result = 0;
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            result += i;
        }
    }
    return result;
}

int main()
{
    int start;
    int end;
    cout << "Enter start value: ";
    cin >> start;
    cout << "Enter end value: ";
    cin >> end;
    
    cout << "Summ: " << EvenSumm(start, end) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    //TASK 1
    int start, end;
    cin >> start;
    cin >> end;
    cout << "C          F" << endl;
    while (start <= end) {
        cout << start << "          " << start * 1.8 + 32 << endl;
        start++;
    }
    cout << "" << endl;

    //TASK 2
    int num, n;
    cin >> num;
    while (num > 0) {
        n = num % 10;
        num /= 10;
        cout << n;
    }
    cout << "" << endl;

    //TASK 3
    int number, k = 0;
    cin >> number;
    while (k < number - 1) {
        k++;
        if (number % k == 0) {
            cout << k << ", ";
        }
        else {
            cout << "";
        }
    }
    cout << number << "." << endl;
}

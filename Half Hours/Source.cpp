#include <iostream>
using namespace std;


int main() {
    while (true) {
        double A;
        double B;

        cout << "A: ";
        cin >> A;
        cout << "B: ";
        cin >> B;
        cout << ((A - B) / B * 100) << endl;
       
    }
    return 0;
}
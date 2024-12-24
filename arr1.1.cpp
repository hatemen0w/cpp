#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = rand()%7 + 7;
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (a[i] > 10) {
            a[i] = a[i] - 10;
        };
        cout << a[i] << " ";
    }

    return 0;
}

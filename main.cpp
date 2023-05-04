#include <iostream>
using namespace std;

int main() {
   int primo=1, secondo=1, terzo=0, n=0;

    cin >> n;

    cout << 1 << endl;
    cout << 1 << endl;
    for (int i = 0; i >= 0; i++) {
        terzo = primo + secondo;
        if (terzo>n) {
            break;
        }
        cout << terzo << endl;
        secondo = primo;
        primo = terzo;
        }
   return 0;
}

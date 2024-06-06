#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;

    stack<int> x;
    int y = 1;

    while (x.size() < n) {
        if (y % 2 != 0) {
            x.push(y);
        }
        y++;
    }

    cout << "Bilangan ganjil yang ada di stack: ";
    while (!x.empty()) {
        cout << x.top() << " ";
        x.pop();
    }
    cout << endl;

    return 0;
}
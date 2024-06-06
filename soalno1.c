#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> B[i];
    }

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (isPrime(i)) {
            for (int j = 1; j < m; j += 2) {
                if (A[i] == B[j]) {
                    cout << A[i] << " ";
                    found = true; 
                }
            }
        }
    }
    if (!found) {
        cout << "Tidak ada";
    }
    cout << endl;

    return 0;
}
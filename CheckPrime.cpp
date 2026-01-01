#include <iostream>
using namespace std;

bool prime(int n) {
    if (n == 1) return false;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }
    if (cnt == 2) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    if (prime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}


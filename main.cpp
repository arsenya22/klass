#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int x) {
    long long res = 1;
    for (int i = 1; i <= x; i++) {
        res *= i;
    }
    return res;
}

int main() {
    long long res = factorial(20);
    cout << "Result: " << res << endl;
    return 0;
}

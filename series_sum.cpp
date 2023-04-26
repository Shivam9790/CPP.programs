#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int s;
    double sum = 0.0;
    cout << "Enter the value of s: ";
    cin >> s;
    
    for (int i = 1; i <= s; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / pow(i, 2);
        } else {
            sum += 1.0 / pow(i, 2);
        }
    }
    
    cout << "The sum of the first " << s << " terms of the series is: " << sum << endl;
    return 0;
}
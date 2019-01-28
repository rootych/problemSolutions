#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    
    cin >> n;
    if (n > 5) {
        n = (double) n / 10;
        cout << n * (n + 1) << "25" << endl;
    } else {
        cout << n * n << endl;
    }
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

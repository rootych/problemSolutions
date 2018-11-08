#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, flag = 0, sum = 0;
	cin >> n;
	if(n <= 0) flag = 1;
	n = abs(n);
	sum = n * (n + 1) / 2;
	if(flag) cout << -1 * (sum - 1) << endl;
	else cout << sum << endl;

	return 0;
}

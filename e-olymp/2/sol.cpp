#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int cnt = 0;
	while(n > 0){
		n /= 10;
		cnt++;
	}
	cout << ((cnt > 0) ? cnt : 1) << endl;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int s = 0;
	if(n > 0){
		cout << n * (n + 1) / 2 << endl;
	} else{
		for(int i = 1; i >= n; i--){
			s += i;
		}
		cout << s << endl;
	}
	return 0;
}
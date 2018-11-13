#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	long long sum = 0;
	if(a % 2 == 0) a++;
	for(int i = a; i <= b; i+=2)
		sum += i;
	cout << sum << endl;
	return 0;
}
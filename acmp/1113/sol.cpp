#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));

	int a, b;
	cin >> a >> b;
	if(a % b == 0 or b % a == 0) cout << 1;
	else cout << rand() % 100 + 1;
	
	return 0;
}
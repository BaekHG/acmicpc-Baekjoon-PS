#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int num;
	int k[10];
	int cnt = 0;
	 
	for(int i = 0; i<10; i++){
		cin >> num;
		k[i] = num % 42;
	}
	
	sort(k,k+10);
	for (int i=0; i<9; i++){
		if (k[i] == k[i+1]) {
			++cnt;
		}
	}

	
	cout << 10-cnt;
	return 0;
}

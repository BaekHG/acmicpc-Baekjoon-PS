#include <iostream>

using namespace std;

int main(){
	int n;
	int sum =0 ;
	cin >> n;
	char a;
	
	for(int i=0; i<n; i++){
		cin >> a;
		sum += int(a)-48;
	}
	
	cout << sum;


	return 0;
}

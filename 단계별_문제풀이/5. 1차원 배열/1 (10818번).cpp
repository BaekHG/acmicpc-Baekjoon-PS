#include <iostream>

using namespace std;

int main(){
	int n,a;
	
	
	cin >> n;
	int k[n];
	for(int i=0; i<n; i++){
		cin >> k[i];
	}
	int max = k[0];
	int min = k[0];
	for(int i=0; i<n; i++){
		if(k[i] >= max){
			max = k[i];
		}
		
		if(k[i] <= min){
			min = k[i];
		}
		
	}
	cout << min <<" " << max;
	
//	cout << max <<" " << min;
	
	return 0;
}

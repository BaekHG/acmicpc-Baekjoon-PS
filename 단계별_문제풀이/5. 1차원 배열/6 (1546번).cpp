#include <iostream>

using namespace std;

int main(){
	
	int n;
	double max = 0.0;
	double sum = 0.0;
	cin >> n;
	double k[n];
	
	for(int i=0; i<n; i++){
		cin >> k[i];
		if(max <= k[i]) max = k[i];
	}
	

	for(int i=0; i<n; i++){
		k[i] = k[i]/max*100;
		sum += k[i];
	}

	cout << sum / n;
	
	return 0;
}

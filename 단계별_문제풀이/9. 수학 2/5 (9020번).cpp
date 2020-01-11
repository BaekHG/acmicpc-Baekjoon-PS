#include <iostream>
#include <cmath>
using namespace std;
bool isSosu(int num){

	for(int k=2; k<=sqrt(num); k++){	
		if(num%k == 0) return false;
		
	}
	if(num == 1) return false;
	return true;
}


int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	int cnt=0;
	int num;
	cin >> num;
	int sosu;
	int result;
	
	for(int i=0; i<num; i++){
		cin >>n;
		
		for(int j=n/2; j>0; j--){
			if(isSosu(j)) {
				if(isSosu(n-j)) {
					cout << j << ' '<< n-j  <<'\n';
					break;
				}
			}
		}
	}
	return 0;
}


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
				result = n-j;
				if(isSosu(result)) {
					cout << j << ' '<< result  <<'\n';
					break;
				}
				else continue; 
			}else continue;
		}
	}
	return 0;
}


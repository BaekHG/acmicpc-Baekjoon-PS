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
	while(true){
		cin >>n;
		cnt=0;
		if(n==0) break;
		for(int i=n+1; i<=2*n; i++){
			if(i==1) continue;
			if(isSosu(i)) ++cnt;
		}
		cout << cnt <<'\n';
	}
	return 0;	
}

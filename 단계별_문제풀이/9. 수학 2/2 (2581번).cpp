#include <iostream>
using namespace std;


bool isSosu(int num){
	int cnt =0;	
	for(int k=1; k<num; k++){	
		if(num%k == 0) ++cnt;
	}
	if(cnt==1) return true;
	else return false;
	
	
}
int main(){
	
	int m,n;
	int sum=0;
	bool Sosu=false;
	cin >> m >> n;
	int min = n;
	for(int i=m; i<=n; i++){
		if(m==n) break;
		if(isSosu(i)) {
			Sosu=true;
			sum+=i;
			if( i < min ) min = i;
		}
	}
	
	if(Sosu) cout << sum << '\n' << min;
  	else cout << -1;
	return 0;	
		
}
	


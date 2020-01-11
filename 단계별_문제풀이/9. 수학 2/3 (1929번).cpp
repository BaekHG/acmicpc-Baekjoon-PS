//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	int m,n;
//	bool isSosu=true;
//	cin >> m >> n;
//	
//	for(int i=m; i<=n; i++){
//		
//		int cnt =0;	
//		isSosu = true;
//		for(int k=1; k<i; k++){
//			if(i%k == 0) ++cnt;		
//			if(cnt==2) {
//				isSosu=false;	
//			}
//		}
//		if(isSosu) cout << i <<'\n';
//	}
//	return 0;	
//		
//}
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
	int m,n;
	cin >> m >> n;
	for(int i=m; i<=n; i++){
		 
		if(isSosu(i)) cout << i <<'\n';
	}
	
	return 0;
		
}

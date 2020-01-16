#include <iostream>
using namespace std;



bool conti(int num){
	int cnt=0;
	while(num>0){
		if(num % 10 == 6){
			cnt++;
			if(cnt == 3) return true; 
		}
		else cnt=0;
		num /= 10;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	int count=0;
	int i;
	for(i=0; count<n; i++){
		if(conti(i)){
			++count;
			cout << i << ' '<< count <<'\n';
		}	
	}
	cout << --i;
//	for(int i=0;; i++){
//		
//		if(conti(i)) ++count;
//		if(count==n){
//			cout << i;
//			return 0;
//		}
//		
//	}
}



 

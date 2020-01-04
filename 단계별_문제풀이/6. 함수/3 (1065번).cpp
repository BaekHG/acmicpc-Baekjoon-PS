#include <iostream>

using namespace std;


int hanSu(int num){
	int k[3];
	int result = num;
	
	
	for(int i=0; i<3; i++){
		k[i] = num %10;
		num /= 10;
	}

	if(k[0]-k[1] == k[1]-k[2]) {

		return result;
	}
	
	else {
		return 0;
	}
	

}


int main(){
	int cnt = 0;s
	int n;
	cin >> n;
	if(n < 100){
		cout << n;
	}else{
		for(int i=100; i<=n; i++){
			if(hanSu(i) != 0) ++cnt;
		}	
		if(n==1000) cout << (cnt-1) + 99;
		else cout << cnt + 99;
	}
	
	return 0;
}

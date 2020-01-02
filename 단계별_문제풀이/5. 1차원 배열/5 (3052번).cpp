#include <iostream>

using namespace std;

int main(){
	int num;
	int k[10];
	int cnt = 10;
	 
	for(int i =0; i<10; i++){
		cin >> num;
		k[i] = num % 42;
	}
	
//	for(int i=0; i<10; i++){
//		cout << k[i] <<" ";
//	}
//	
//	cout << '\n';
	
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if(k[i] == k[j]){
				cout << k[i] << " " << k[j] << '\n';
				--cnt;
			}
		}

	}
	
	cout << cnt;
	return 0;
}
//
//10개로 잡아놓고 같은게 있을때마다 하나씩 빼준다 

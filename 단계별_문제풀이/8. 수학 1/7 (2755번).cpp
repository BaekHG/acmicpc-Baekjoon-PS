#include <iostream>
using namespace std;

int roomNum(int k,int n){
	if(k==0) return n;
	if(n==1) return 1;
	else return roomNum(k-1,n) + roomNum(k,n-1);
}
int main(){
	int t,k,n;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> k >> n;
		cout << roomNum(k,n) << '\n';
	}
  	return 0;
}




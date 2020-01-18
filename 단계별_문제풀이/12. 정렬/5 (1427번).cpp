#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin >> n;
	int n1 = n;
	int cnt=0;
	while(n>0){
		n /= 10;
		cnt++;
	}	
	int arr[cnt];	
	for(int i=0; i<cnt; i++){
		arr[i] = n1%10;
		n1 /= 10;
	}
	sort(arr,arr+cnt,desc);
	
	for(int i=0; i<cnt; i++){
		cout << arr[i];
	}
	return 0;
}



 

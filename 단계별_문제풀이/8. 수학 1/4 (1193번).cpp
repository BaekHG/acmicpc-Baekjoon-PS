#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	int n=0;
	while( n*(n+1)/2 < num){
		++n;
	} 	
	if(n%2 == 0) cout <<  num - (n*(n-1)/2) << '/' << (n+1) - (num - (n*(n-1)/2));
	else cout << (n+1) - (num - (n*(n-1)/2))  << '/' << num - (n*(n-1)/2);
   	return 0;
}



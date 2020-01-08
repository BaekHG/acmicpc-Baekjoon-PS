#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	
	int total=0;
	int n =0;
	while( 1+3*n*(n+1) < num){
		++n;
	}
	
	cout << n+1;
   	return 0;
}

#include <iostream>
using namespace std;
int main(){
	
	//a: 고정비용 , b: 가변 비용, c: 가격 
	int a,b,c;
	cin >> a >> b >> c;
	if(c<=b) {
		cout << -1;
		return 0;
	}
	else{
		cout << a/ (c-b) + 1;
		return 0;
	}	
   	return 0;
}


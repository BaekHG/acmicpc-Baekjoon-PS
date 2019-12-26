#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	
	if (a>=b){
		if(a >= c){
			if(c >= b){
				cout << c;
			}else{
				cout << b;
			}
		}else{
			cout << a;
		}
	}else{
		if(b >= c){
			if(c >= a){
				cout << c;
			}else{
				cout << a;
			}
		}else{
			cout << b;
		}
	}

	
	
	return 0;
} 



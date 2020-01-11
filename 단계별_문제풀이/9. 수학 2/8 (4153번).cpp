#include <iostream>
#include <cmath>
using namespace std;



int max(int a, int b, int c){
	if(a > b) return a>c ? a:c;
	else return b>c ? b:c;
}
int main(){
	int a,b,c;
	
	while(true){
		cin >> a >> b >> c;
		int max_num;	
		if(a ==0 && b ==0 && c ==0) break;
		
		max_num = max(a,b,c);
		if(max_num == a){
			if(max_num *max_num == b*b + c*c) cout <<"right";
			else cout << "wrong";
		}else if(max_num == b){
			if(max_num *max_num == a*a + c*c) cout <<"right";
			else cout << "wrong";
		}else{
			if(max_num *max_num == a*a + b*b) cout <<"right";
			else cout << "wrong";
		}
		cout << '\n';
	}
	
	return 0;
}

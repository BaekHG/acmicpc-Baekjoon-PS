#include <iostream>

using namespace std;

int main(){
	int h;
	int m;
		
	cin >> h >> m;
	
	
	
	if( (m%60) -45 >=0){
		cout << (h%24) <<" "<< (m%60)-45;
	}else{
		if( (h%24 - 1) < 0 ){
			h = 24 + (h%24 -1);
		}else{
			h = h%24 -1;
		}
		cout << h <<" " << 15+ (m%60);
	}
	
	return 0;
} 

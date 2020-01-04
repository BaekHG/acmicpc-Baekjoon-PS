#include <iostream>

using namespace std;

int main(){
	
//	char alp;
	int cnt=0;
	
	string alp;
	cin >> alp;
	

	
	for(char i='a'; i<='z'; i++){
		cnt = 0;
		for(int j=0; j<alp.length(); j++){
			if( i == alp[j]) {
				
				break;
			}
			++cnt;	
		}
		if(cnt == alp.length()) cout << -1 <<' ';
		else cout << cnt << ' ';
		
		
	}
	return 0;
}



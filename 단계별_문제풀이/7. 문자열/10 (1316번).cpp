#include <iostream>

using namespace std;

int main(){
	int num;
	string str;
	cin >> num;
	int cnt=0;
	bool group = true;
	for(int i=0; i<num; i++){
		group = true;
		cin >> str;
		for(int j=0; j<str.length(); j++){
			for(int k=j+2; k<str.length(); k++){
				cout << str[j] << ' ' << str[k] << '\n';
				if(str[j] == str[k-1] && str[j] == str[k]) continue;
				if(str[j] == str[k] ) {
					group=false;
				}
			}
			if(!group) break;
		}
		
		if(group) ++cnt;
	} 
	
	cout << cnt;
	return 0;
}



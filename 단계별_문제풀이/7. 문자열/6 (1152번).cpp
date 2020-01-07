#include <iostream>
#include <string>
using namespace std;

int main(){
	string sen;
	getline(cin, sen);
	int cnt=1;
	if(sen[0] == ' ') --cnt;
	if(sen[sen.length()-1] == ' ') --cnt;
	
	for(int i=0; i<sen.length(); i++){
		
		if(sen[i] == ' ') {
			++cnt;	
		}
		else if(sen[i] == '\n') break;
		else continue;
	} 
	
	cout << cnt;

	return 0;
}

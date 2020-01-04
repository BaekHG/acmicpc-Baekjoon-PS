#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m;
	string word;
	cin >> n;
	
	for(int i=0; i<n; i++){

		cin >> m >> word;
		for(int j=0; j<word.length(); j++){
			for(int k=0; k<m; k++){
				cout << word[j];
			}		
		}
		cout<< '\n';
	} 

	return 0;
}


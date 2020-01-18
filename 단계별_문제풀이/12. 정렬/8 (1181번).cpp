#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a,string b){
	if(a.length() == b.length()) return a < b;
	return a.length() < b.length();
}
int main(){
	int n;
	cin >> n;
	string word[n];
	for(int i=0; i<n; i++){
		cin >> word[i];
	}
	
	sort(word,word+n,cmp);
	
	cout << word[0] << '\n';
	for(int i=1; i<n; i++){
		if(word[i] == word[i-1]) continue;
		cout<< word[i] <<'\n';
	}
	return 0; 
}

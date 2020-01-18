#include <iostream>
#include <algorithm>
#include <Vector>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}


int main(){
	int n;
	cin >> n;
	
	vector<pair<int,int>> v;
	
	
	
	for(int i=0; i<n; i++){
		int first,second;
		cin >> first >> second;
		v.push_back(pair<int, int>(first,second));
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0; i<n; i++){
		cout << v[i].first << ' ' << v[i].second << '\n';	
	}	
	return 0; 
}

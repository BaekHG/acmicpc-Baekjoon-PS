#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;



bool cmp(pair<int,pair<string,int>> a, pair<int,pair<string,int>> b){
	if(a.first == b.first) return a.second.second < b.second.second;
	
	return a.first < b.first;
}
int main(){
	
	vector<pair<int,pair<string,int>>> v;
	
	int num;
	int cnt[num];
	cin >> num;

		
		
	for(int i=0; i<num; i++){
		int first;
		string second;
		cin >> first >> second;
		v.push_back(pair<int,pair<string,int>> (first,pair<string,int>(second,i))) ;
	}
	 
	sort(v.begin(),v.end(),cmp);	
	
	for(int i=0; i<num; i++){
		cout << v[i].first << ' ' << v[i].second.first << '\n';
	}
	return 0;
}

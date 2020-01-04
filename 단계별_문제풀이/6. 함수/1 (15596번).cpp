#include <iostream>
#include <vector>

using namespace std;



long long sum(vector <int> &a);


long long sum(vector <int> &a){
	int result = 0;
	
	for(int i=0; i<a.size(); i++){
		result += a[i];
	}
	
	return result;
}
int main(){
	vector<int> a;
	int n;
	while(cin >> n){
		a.push_back(n);
	}

	cout << sum(a);
	return 0;
}

 

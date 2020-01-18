#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int num;
	int n;
	
	cin.tie(NULL);
    ios::sync_with_stdio(false);
	cin >> num;
	int count[10001] = {0};
	
	for(int i=0; i<num; i++){
		cin >> n;
		count[n]++;
	}
	
	for(int i=1; i<10001; i++){
		if(count[i] != 0){
			for(int j=0; j<count[i]; j++){
				cout << i << '\n';
			}
		}
	}
}

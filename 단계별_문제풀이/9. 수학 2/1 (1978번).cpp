#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int num;
	int count =0;
	for(int i=0; i<n; i++){
		
		cin >> num;
		int cnt =0;	
		if(num == 1) continue;
		for(int k=1; k<num; k++){	
			if(num%k == 0) ++cnt;
		}
		if(cnt==1) ++count;
	}

	cout << count;	
  	return 0;	
		
}
	


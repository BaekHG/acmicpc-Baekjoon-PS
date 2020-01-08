#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt= n/5;
	int bongji=0;
	int minimal_cnt = 1000000;
	int n1 = n;
	int three;
	
	bool exact = false;
	
	for(int i=0; i<cnt+1; i++){
		three = n1-(5*i);
//		cout <<three << '\n';
		if(three % 3 != 0) {
			if(!exact) exact =false; 
			continue;
			 
		}
		else{
			exact = true;
			while(three != bongji * 3) {
				++bongji;
			}
			
//			cout << three << ' '<< bongji+i<<'\n';
			if(minimal_cnt > bongji+i) minimal_cnt = bongji+i;
		}
	}
	
	if(exact) cout << minimal_cnt;
	else cout << -1;

	
   	return 0;
}


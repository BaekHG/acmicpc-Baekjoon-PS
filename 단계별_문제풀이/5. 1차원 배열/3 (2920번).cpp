#include <iostream>

using namespace std;

int main(){
	
	int k[8];
	int asc_cnt=0;
	int des_cnt=8;
	int asc=0;
	int des=0;
	
	for(int i=0; i<8; i++){
		cin >> k[i];
		++asc_cnt;
		--des_cnt;
		
		if(asc_cnt == k[i]){

			++asc;		
		}
		
		if(k[i]-1 == des_cnt){
			++des;
		}
		
	} 

	if(asc == 8){
		cout << "ascending";
	}else if(des == 8){
		cout << "descending";
	}else{
		cout <<"mixed";
	}
	return 0;
}

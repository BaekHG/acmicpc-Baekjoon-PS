#include <iostream>

using namespace std;

int main(){
	int k[9];
	int max = 0;
	int max_num;
	
	for(int i=0; i<9; i++){
		cin >> k[i];
		
		if(k[i] >= max){
			max = k[i];
			max_num = i+1;
		}

	} 
	
	cout << max << '\n' << max_num;
	return 0;
}

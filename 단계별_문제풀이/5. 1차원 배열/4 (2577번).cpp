#include <iostream>

using namespace std;

int main(){
	int a,b,c,result,digit;
	int cnt=0;
	int digit_cnt =0;

	
	cin >> a >> b >> c;
	
	result = a * b * c;
	digit = result;

	while(result > 0){
		result /= 10;
		
		++cnt;
	}
	int k[cnt];

	
	for (int i=0; i<cnt; i++ ){
		
		k[i] = digit % 10;
		digit /= 10;
	}
	
	for(int i=0; i<10; i++){
		
		for(int j=0; j<cnt; j++){
			if(i == k[j]){
				++digit_cnt;
			}
			
		}
		cout<< digit_cnt << '\n';
		digit_cnt = 0;

	}
	
	
	return 0;
}


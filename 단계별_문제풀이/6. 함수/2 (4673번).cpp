#include <iostream>

using namespace std;


int selfNum(int num){


	
	for(int i=1; i<=10000; i++){
		int sum = 0;
		int result = i;
		int result_1 = i;
		while(result>0){	
			int digit = result % 10;
			result /= 10;
			sum += digit;
		}

		sum += result_1;
		
		if(num == sum){
			return 0;
		}
	}

	return num;
	
}


int main(){
	
	for(int i=1; i<=10000; i++){
		if(selfNum(i) != 0) cout << i <<'\n';
	}

	return 0;
}

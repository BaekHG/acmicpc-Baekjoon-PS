#include <iostream>

using namespace std;

int divide(int num){
	int sum=num;
	while(num>0){
		sum += num%10;
		num /= 10; 
	}
	
	return sum;
}


int main(){
	int num;
	cin >> num;
	int cnt=1;
	while(num > cnt){
		if(num == divide(cnt)){
			cout << cnt;
			return 0;
		}
		++cnt;
	}
	cout << 0;
	return 0;	
}


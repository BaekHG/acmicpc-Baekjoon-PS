#include <iostream>
using namespace std;
int main(){
	
	//a: ������� , b: ���� ���, c: ���� 
	int a,b,c;
	int cnt=1;
	cin >> a >> b >> c;
	
	
//	while(a+(b*cnt) >= c*cnt){
	
	if(c<=b) {
		cout << -1;
		return 0;
	}
	else{
		while(a >= (c-b)*cnt){
			++cnt;
			if((c-b)*cnt >2100000000){
				cout <<-1;
				return 0;
			}
		} 
	}	
	cout << cnt;
   	return 0;
}
//2100000000

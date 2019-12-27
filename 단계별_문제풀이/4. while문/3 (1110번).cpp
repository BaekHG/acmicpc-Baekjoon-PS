#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
  	ios::sync_with_stdio(false);
	
	int a;
	int cnt=0;
	cin >> a;
	int result=a;
	do{
		int first = a/10;
		int second = a%10;
		a = second*10 + (first + second)%10;
		++cnt;
		cout << result <<" " << a << "\n";
	}while(result != a);
	
	cout << cnt;
}

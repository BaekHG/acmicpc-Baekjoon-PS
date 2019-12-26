#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a; cin >> b;
	int first = a * (b%10);
	int second = a * ((b/10) %10);
	int third =  a* ((b/100) % 10);
	//	int total = first + 10*second + 100*third;
	
	cout << first << "\n" << second <<"\n" << third <<"\n" << a * b;
}

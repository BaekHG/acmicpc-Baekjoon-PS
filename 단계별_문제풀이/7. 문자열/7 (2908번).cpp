#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;




int main(){
	string a,b;
	cin >> a >> b;
	char tmp;
	swap(a[0],a[2]);
	swap(b[0],b[2]);
	
	
	int n = atoi(a.c_str());
	int m = atoi(b.c_str());
	
	if(n>m) cout << n;
	else cout << m;
	
	return 0;
}

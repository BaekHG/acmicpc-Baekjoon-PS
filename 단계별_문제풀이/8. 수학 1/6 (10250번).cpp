#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int h,w,order;
	int ho,floor;
//	>> num 
	for(int i=0; i<num; i++){		
		cin >> h >> w >> order;
		floor = order% h;
		if(floor == 0) floor = h;
		ho = order/h + 1;
		
		if(order%h ==0) ho = order/h;
		if(ho<10) cout << floor << 0 << ho; 
		
		else cout << floor << ho; 
		cout << '\n';
	}

	
   	return 0;
}


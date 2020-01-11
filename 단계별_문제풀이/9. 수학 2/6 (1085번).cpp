#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,y,w,h;
	
	cin >> x >> y >> w >> h; 
	
	int rl = w-x;
	int ud = h-y;
	
	int min_w;
	int min_h;
	

	if(x < rl) min_w = x;
	else min_w = rl;

	
	if(y < ud) min_h = y;
	else min_h = ud;
	
	if(min_w < min_h) cout << min_w;
	else cout <<min_h;
	
	return 0;
}

//  w , h <= 1000
//1 <= x <= w-1
//1 <= y <= h-1

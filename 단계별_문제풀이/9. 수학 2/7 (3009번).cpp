#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x,y,x1,y1,x2,y2;
	
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	int w,h;
	
	if(x == x1) w = x2;
	else if(x == x2) w = x1;
	else w = x;
	
	if(y== y1) h = y2;
	else if (y==y2) h =y1;
	else h = y;
	
	
	
	cout << w << ' '<< h;

	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

double dis(int x, int y, int x1 ,int y1){
	return sqrt(pow(x-x1,2) + pow(y-y1,2));
}
int main(){
	
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	
		int x,y,x1,y1,r1,x2,y2,r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2; 
		
		double distance = dis(x1,y1,x2,y2);
		
		int big,small;
		if(r2>r1) {
			big = r2;
			small = r1;
		}
		else {
			big =r1;
			small = r2;	
		}
		
		if(r1==r2 && x1==x2 && y1==y2) cout << -1;
		else if(distance < r1+r2 &&  distance+small > big) cout << 2;
		else if(distance == r1+r2 || distance+small == big) cout << 1;
		else cout << 0;
		
		cout << '\n';
	}
	
	
	return 0;
}

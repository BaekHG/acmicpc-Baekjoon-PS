#include <iostream>
#include <cmath>
using namespace std;

void move(int from, int to){
	cout << from << ' ' << to << '\n';
}

void hanoi(int n,int from,int std,int to){
	if(n == 1) move(from,to);
	else{
		hanoi(n-1,from,to,std);
		move(from,to);
		hanoi(n-1,std,from,to);
	} 
	
}

int main(){
	int num;
	cin >> num;
	int from=1;
	int to=3;
	int std=2;
	unsigned int cnt = pow(2,num)-1;
	cout<< cnt << '\n';
	hanoi(num,from,std,to);
	
	
	return 0;	
}


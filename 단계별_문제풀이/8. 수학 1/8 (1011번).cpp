#include <iostream>
using namespace std;

int main(){
	int num,x,y;
	cin >> num;

	for(int i=0; i<num; i++){
		int cnt = 0;
		int result;
		cin >> x >> y;
		int distance = y-x;
		for(unsigned int j=1; ; j++){

			if(j*j >= distance) {
				cout << (j-1)*2 + 1;
				break;
			}
			else if(j*(j+1) >= distance){
				cout << j*2;
				break;
			}
			
		}
	
		cout << '\n';
	}

  	return 0;
}

#include <iostream>

using namespace std;



int dialNum(char alp){
	
	if(alp == 'A' || alp =='B' || alp =='C') return 3;
	else if(alp == 'D' || alp =='E' || alp =='F') return 4;
	else if(alp == 'G' || alp =='H' || alp =='I') return 5;
	else if(alp == 'J' || alp =='K' || alp =='L') return 6;
	else if(alp == 'M' || alp =='N' || alp =='O') return 7;
	else if(alp == 'P' || alp =='Q' || alp =='R' || alp =='S')  return 8;
	else if(alp == 'T' || alp =='U' || alp =='V') return 9;
	else return 10;

}
int main(){
	string alp;	
	cin >> alp;
	int sum=0;
	

	for(int i=0; i<alp.length(); i++){
		sum += dialNum(alp[i]);
	}
	
	cout << sum;
	return 0;
}





#include <iostream>

using namespace std;


int main(){
	double c,num;
	double avg;
	int score[1000];
	double sum=0.0;
	double cnt=0;
	cin >> c;
	
	
	for(int i=0; i<c; i++){
		cin >> num;
		for(int j=0; j<num; j++){
			cin >> score[j];
			sum += score[j];
		}
		
		avg = double(sum / num);

		
		for(int k=0; k<num; k++){
			if(score[k] > avg) ++cnt;
		}

		cout << fixed;
		cout.precision(3);
		cout << (cnt/num) * 100 << '%' << '\n';
		sum=0;
		cnt=0;
	}
	return 0;
}

 

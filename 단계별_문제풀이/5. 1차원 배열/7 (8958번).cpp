#include <iostream>
#include <string>

using namespace std;


int main(){
	
	int n;
	
	

	cin >> n;
	string k[n];
	string score;
	

	for(int i=0; i<n; i++){
		int sum = 0;
		int O_score = 1;
		cin >> score;
		
		for(int j=0; j<score.length(); j++){
			
			if(score.at(j) == 'X') {
				O_score = 1;
				continue;
			}	
			else{
				sum += O_score;
				if( j+1 < score.length() && score.at(j) == score.at(j+1) ){
					++O_score;
				}
			}
		}
		
		cout << sum << '\n';
	}
	 
	return 0;
}


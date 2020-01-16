#include <iostream>
using namespace std;


int main(){
	int n,m;
	int cnt;
	int cnt1;
	int min = 70;
	int min1 = 70;
	cin >> n >> m;

	char input[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> input[i][j];
		}
	}

	char board[8][8];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(i%2 == 0) {
				if(j%2 == 1) board[i][j] = 'W';
				else board[i][j] = 'B';
			}
			else{
				if(j%2 == 1) board[i][j] = 'B';
				else board[i][j] = 'W';				
			}
		}
	}
	
	char board1[8][8];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(i%2 == 0) {
				if(j%2 == 1) board1[i][j] = 'B';
				else board1[i][j] = 'W';
			}
			else{
				if(j%2 == 1) board1[i][j] = 'W';
				else board1[i][j] = 'B';				
			}
		}
	}

	
	for(int i=0; i< n-7; i++){
		for(int j=0; j< m-7; j++){
			cnt=0;
			cnt1=0;
			for(int k=i; k<8+i; k++){
				for(int l=j; l<8+j; l++){
					if(board[k-i][l-j] != input[k][l]) ++cnt;
					if(board1[k-i][l-j] != input[k][l]) ++cnt1;
				}
			}
			if(cnt < min) min = cnt;
			if(cnt1 < min1) min1 = cnt1;			
		}
	}
	if(min < min1) cout << min;
	else cout << min1;

}

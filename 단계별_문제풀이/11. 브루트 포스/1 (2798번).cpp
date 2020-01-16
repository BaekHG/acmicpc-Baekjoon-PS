#include <iostream>
using namespace std;

int main(){
	int n,m;
	
	cin >> n >> m;
	int arr[n]; 
	for(int i=0; i<n; i++){
		cin >> arr[i]; 
	}
//	int combi = n*(n-1)*(n-2) / 6;
//	int sum[combi];
//	int cnt=0;
	
	int max = 3;
	
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++ ){
			for(int k=j+1; k<n; k++){
				if(m==arr[i] + arr[j] + arr[k]){
					cout << m;
					return 0;
				}
				else if(m > arr[i] + arr[j] + arr[k] && arr[i] + arr[j] + arr[k] > max){
						max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	
	cout << max;
	
	return 0;	
}


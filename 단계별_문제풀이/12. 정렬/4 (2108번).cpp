#include <iostream>
#include <algorithm>
using namespace std;


int min_max(int arr[],int count){
	sort(arr,arr+count);
	
	return arr[count-1]-arr[0];
}

int most(int arr[]){
	int count[8001] = {0,};
	max=arr[0] + 4000;
	for(int i=0; i<8001; i++){
		count[arr[i]] += 4000;
		if(count[max] < count[arr[i]])
			max = count[arr[i]];
	}
	
	int cnt=0;
	for(int i=0; i<8000; i++){
	if
		if(count[i] != 0){
			for(int j=0; j<count[i]; j++){
				
			}
		}
	}
		
}






double sansul(int arr[],int count){
	double sum=0;
	for(int i=0; i<count; i++){
		sum += arr[i];
//		cout << sum << '\n';
	}

	return sum/count;
}
int jungang(int arr[],int count){
	sort(arr,arr+count);
	return(arr[count/2]);
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
//	cout << sansul(arr,sizeof(arr)/4)
	cout << fixed;
	cout.precision(0);
	cout << most(arr,sizeof(arr)/4);
//	cout << sansul(arr,sizeof(arr)/4) << '\n' << jungang(arr,sizeof(arr)/4)
//	<< '\n' << most(arr,sizeof(arr)/4) << '\n' << min_max(arr,sizeof(arr)/4);
	
}

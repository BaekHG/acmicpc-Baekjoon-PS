//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int num,a,b;
//	cin >> num;
//	int total[num];
//	
//	for(int i=0; i<num; i++){
//		cin >> a >> b;
//		total[i] = a+b;
//	}
//	for(int i=0; i<num; i++){
//		cout << total[i] << "\n";
//	}
//	
//	return 0;
//}

#include <iostream>

using namespace std;

int main(){
	int num,a,b;
	cin >> num;
	
	for(int i=0; i<num; i++){
		cin >> a >> b;
		cout << a+b << "\n";
	}

	
	return 0;
}

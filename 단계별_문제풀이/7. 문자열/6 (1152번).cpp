#include <iostream>

using namespace std;

int main(){
	string sen;
	getline(cin, sen);
	int cnt=1;
	if(sen[0] == ' ') --cnt;
	if(sen[sen.length()-1] == ' ') --cnt;
	
	for(int i=0; i<sen.length(); i++){
		
		if(sen[i] == ' ') {
			++cnt;	
		}
		else if(sen[i] == '\n') break;
		else continue;
	} 
	
	cout << cnt;

	return 0;
}

// 코드가 간결하고 메모리를 덜 차지하지만 시간이 더 걸림. 
//#include <iostream>
//using namespace std;
//int main(){
//   string str;
//   int cnt = 0;
//   
//   while(cin >> str){
//      ++cnt;
//   }
//   cout << cnt;
//   
//   return 0;
//}

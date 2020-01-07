#include <iostream>

using namespace std;

int main(){
	string alp;
	cin >> alp;
	int cnt=0;
	for(int i=0; i< alp.length(); i++){
		if(i>1 && alp[i] == '=' && alp[i-1] == 'z' && alp[i-2] == 'd') cnt -= 2;
		else if(alp[i] =='=' && 
		(alp[i-1] == 'c' || alp[i-1] == 's' || alp[i-1] == 'z')) --cnt;
		
		else if(alp[i] == '-' && (alp[i-1] == 'c' || alp[i-1] == 'd')) --cnt;
		else if(i>0 && alp[i] == 'j' && ((alp[i-1]) == 'l' || alp[i-1] == 'n')) {
			--cnt;
		}
		cnt++;
	}
	
	cout << cnt;
	return 0;
}

// find을 이용한 풀 

//#include <iostream>
//using namespace std;
//int main(){
//   string cro[8] = {"c=", "c-", "dz=", "d-이", "lj", "nj", "s=", "z="};
//   string str;
//   cin >> str;
//   for(int i=0; i<8; i++){
//      int index = str.find(cro[i]);
//      if(index != string::npos){
//         str.replace(index, cro[i].length(), "_");
//         --i;
//      }
//   }
//   cout << str.size();
//   
//   return 0;
//}

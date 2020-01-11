#include <iostream>
#include <cmath>
using namespace std;



int max(int a, int b, int c){
	if(a > b) return a>c ? a:c;
	else return b>c ? b:c;
}
int main(){
	int a,b,c;
	
	while(true){
		cin >> a >> b >> c;
		int max_num;	
		if(a ==0 && b ==0 && c ==0) break;
		
		max_num = max(a,b,c);
		if(max_num == a){
			if(max_num *max_num == b*b + c*c) cout <<"right";
			else cout << "wrong";
		}else if(max_num == b){
			if(max_num *max_num == a*a + c*c) cout <<"right";
			else cout << "wrong";
		}else{
			if(max_num *max_num == a*a + b*b) cout <<"right";
			else cout << "wrong";
		}
		cout << '\n';
	}
	
	return 0;
}

//#include <iostream>
//using namespace std;
//int main(){
//   cin.tie(NULL);
//   ios::sync_with_stdio(false); 
//   int a, b, c;
//   while(cin >> a >> b >> c && (a!=0 && b!=0 && c!=0)){
//      bool isRecTri = false;
//      if(a > b && a > c && a*a == b*b + c*c) isRecTri = true;
//      else if(b > a && b > c && b*b == a*a + c*c) isRecTri = true;
//      else if(c > a && c > b && c*c == a*a + b*b) isRecTri = true;
//      if(isRecTri) cout << "right\n";
//      else cout << "wrong\n";
//   }
//   
//   return 0;
//}

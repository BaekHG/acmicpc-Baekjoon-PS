#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string word;
	cin >> word;
	int max=0;
	int max_cnt=0;
	int max_index;
	
	int c = 0;
	int cnt[26] = {0};
	int count=0;
	for(int i=0; i<word.length(); i++){
		word[i] = toupper(word[i]);
	}


	for(char i='A'; i<='Z'; i++){
		for(int j=0; j<word.length(); j++){
			if( i == word[j] ) {
				cnt[count]++;
			}
		}
		++count;
		
	}
	
	
	for(int i=0; i<26; i++){
		if(max < cnt[i]){
			max = cnt[i];
			max_index = i;
		}
	}

	


	//Ãâ·Â
	 
	for(int i=0; i<26; i++){
		if(cnt[i] == max) ++max_cnt;
		
		if(max_cnt == 2) {
			cout << "?";
			return 0;
		}
	}
	
		
	for(char a='A'; a<='Z'; a++){
		if(c == max_index) {
			cout <<  a;
			return 0;
		}
		++c;
		
	}
	
	
	
	return 0;
}


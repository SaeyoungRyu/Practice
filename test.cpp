#include <iostream>
#include <string>
using namespace std;

void main(){
	
	string str;
	int strLen = 0, arrSmall [26] = {0,}; //, arrBig [26] = {0,};
	char ch;

	cin>>str;
	strLen  = str.length();
	
	for(int i = 0; i < strLen ; i++ ){
		ch = str[i];
		/*
		if(ch < 97)	// ´ë¹®ÀÚ
			arrBig [ch-65] += 1;
		else
		*/
		arrSmall[ch-97] +=1;
	}

	for(int i = 0; i < strLen ; i++ ){
		if(arrSmall[i] > 0){
			ch = i + 97;
			cout<<ch<<arrSmall[i];
		}
	}
	system("pause");
}

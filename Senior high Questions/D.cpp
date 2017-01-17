#include <iostream>
#include <stdlib.h>
#include <cmath> 

using namespace std;

int main(){
	char S[10000], T[10000], alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int alphabets_num[26]={0}, i=0;
	cin >> S;
	cin >> T;
	while(S[i]){
		for(int j=0; j<26; j++){
			if(S[i]==alphabets[j]){
				alphabets_num[j]++;
			}
		}
		i++;
	}
	i=0;
	while(T[i]){
		for(int j=0; j<26; j++){
			if(T[i]==alphabets[j]){
				alphabets_num[j]--;
			}
		}
		i++;
	}
	int yes = 0;
	for(int k=0; k<26; k++){
		if(alphabets_num[k]!=0){
			yes=1;
		}
	}
	if(yes==0)
		cout << "Yes" << endl;
	if(yes==1)
		cout << "No" << endl;
}

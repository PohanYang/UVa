#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    char s1[1001], s2[1001];
    while(gets(s1)){
        gets(s2);
        int check1[123]={0}, check2[123]={0};
        for(int i=0; i<strlen(s1); i++){
            for(int j=0; j<strlen(s2); j++){
                if(s1[i]==s2[j]){
                    check1[s1[i]]++;
                    break;
                }
            }
        }
        for(int k=0; k<strlen(s2); k++){
            for(int l=0; l<strlen(s1);l++){
                if(s2[k]==s1[l]){
                    check2[s2[k]]++;
                    break;
                }
            }
        }
        int tmin;
        for(int t=97; t<123; t++){
            tmin=0;
            if(check1[t]<check2[t])
                tmin=check1[t];
            else
                tmin=check2[t];
            for(int q=0; q<tmin; q++){
                cout << char(t);
            }
        }
        cout << endl;
    }
    return 0;
}

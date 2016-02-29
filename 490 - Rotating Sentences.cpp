#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char s1[101], s2[101];
    while(cin >> s1 >> s2){

        int check1[123]={0}, check2[123]={0};
        for(int i=0; i<strlen(s1); i++){
            for(int j=0; j<strlen(s2); j++){
                if(s1[i]==s2[j]){
                    check1[int(s1[i])]++;
                    break;
                }
            }
        }
        for(int i=0; i<strlen(s2); i++){
            for(int j=0; j<strlen(s1); j++){
                if(s2[i]==s1[j]){
                    check2[int(s2[i])]++;
                    break;
                }
            }
        }
        /*check
        for(int a=97; a<123; a++){
            cout << "check1[" << a << "]is " << check1[a] << endl;
        }
        check*/
        int smin;
        for(int k=97; k<123; k++){
            if(check1[k]>0&&check2[k]>0){
                smin=0;
                if(check1[k]>check2[k]){
                    smin=check2[k];
                }else{
                    smin=check1[k];
                }
                for(int l=0; l<smin; l++){
                    cout << char(k);
                }
            }
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char n1[16], n2[16];
    while(cin >> n1 >> n2){
    if(n1[0]=='0' && strlen(n1)==1 && n2[0]=='0' && strlen(n2)==1)
        return 0;

    int len_n1, len_n2, p, carry=0,temp=0;
    len_n1 = strlen(n1);
    len_n2 = strlen(n2);
    if(len_n1>len_n2)
        p = len_n2;
    else
        p = len_n1;
    len_n1 -= 1;
    len_n2 -= 1;
    for(int i=0; i<p; i++){
        if(((n1[len_n1]-'0')+(n2[len_n2]-'0')+temp)>=10){
            carry += 1;
            temp = 1;
        }else{
            temp = 0;
        }
        len_n1 --;
        len_n2 --;
    }
    if(len_n1==-1){
        int tn2 = len_n2;
        for(int i=0; i<=tn2; i++){
            if(((n2[len_n2]-'0')+temp)==10){
            carry +=1;
            len_n2 --;
            temp = 1;
            }
        }
    }
    if(len_n2==-1){
        int tn1 = len_n1;
        for(int i=0; i<=tn1; i++){
            if(((n1[len_n1]-'0')+temp)==10){
            carry +=1;
            len_n1 --;
            temp = 1;
            }
        }
    }

    if(carry==0)
        cout << "No carry operation." << endl;
    else if(carry==1)
        cout << "1 carry operation." << endl;
    else
        cout << carry << " carry operations." << endl;

    }
    return 0;
}

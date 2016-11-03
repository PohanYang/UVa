#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

static char num[1024];
int main(){
    unsigned i;
    while(gets(num)){
            if(num[0]=='0' && strlen(num)==1)
                return 0;

                int odd=0, even=0, temp, check;
                for(i=0;i<strlen(num);i++){
                    if(i%2)
                        odd = odd + num[i]-'0';
                    else
                        even = even + num[i]-'0';
                }
                check = abs(odd - even);
                if(check%11){
                    cout << strlen(num) << endl;
                    cout << num << " is not a multiple of 11." << endl;
                }
                else
                    cout << num << " is a multiple of 11." << endl;
    }
    return 0;
}

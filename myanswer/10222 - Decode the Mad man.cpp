#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    char in;
    char kb1[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(scanf("%c",&in) != EOF){
        if(in>='A'&&in<='Z')
            in += 32;
        if(isspace(in))
            cout << in;
        else{
            for(int i=0; kb1[i]; ++i){
                if(in==kb1[i]){
                    printf("%c",kb1[i-2]);
                    break;
                }
            }
        }
    }
    return 0;
}

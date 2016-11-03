#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

int main(){
    char text[1001];
    while(gets(text)){
        int num=0;
        if(text[0]=='0' && strlen(text)==1)
                return 0;

        for(int i=0; i<strlen(text); i++){
            num = num+text[i]-48;
        }
        if(num%9==0){
            int sc=0, c=1;
            while(num!=9){
                c += 1;
                int t_num = num, p=0;
                while(t_num!=0){
                    t_num /= 10;
                    sc ++;
                }
                for(int j=sc-1; j>=0; j--){
                    p = p + floor(num/pow(double(10),double(j)));
                    num = num - floor(num/pow(double(10),double(j)))*floor(pow(double(10),double(j)));
                }
                num = p;
            }
            cout << text << " is a multiple of 9 and has 9-degree " << c << "." << endl;
        }else{
            cout << text << " is not a multiple of 9." << endl;
        }
    }
    return 0;
}

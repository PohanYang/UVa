#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <iomanip>

using namespace std;

void check(long long num);
int main(){
    long long num;
    int c = 1;
    while((cin >> num)!=NULL){
        cout << setw(4) << c << ".";
        if(num)
            check(num);
        else
            cout << " 0";

        cout << endl;
        c ++;
    }
    return 0;
}

void check(long long num){
    if(num / 10000000){
        check(num/10000000);
        cout << " kuti";
        num = num%10000000;
    }
    if(num / 100000){
        check(num/100000);
        cout << " lakh";
        num = num%100000;
    }
    if(num / 1000){
        check(num/1000);
        cout << " hajar";
        num = num%1000;
    }
    if(num / 100){
        check(num/100);
        cout << " shata";
        num = num%100;
    }
    if(num){
        cout << " " <<num;
    }
}

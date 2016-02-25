#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0) return 0;
        while((n/10)!=0){
            int temp, temp2=0;
            temp = n;
            while(temp!=0){
                temp2 += temp%10;
                temp /= 10;
            }
            n=temp2;
        }
        cout << n << endl;
    }
    return 0;
}

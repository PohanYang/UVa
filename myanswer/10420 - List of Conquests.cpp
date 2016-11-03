#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    char a[2001];
    string country[2001];
    cin >> n;
    for(int i=0; i<n; i++){
        gets(a);
        cin >> country[i];
    }
    sort(country, country+n);
    int check = 0, num = 1;
    for(int j=0; j<n; j++){
        if(check==0){
            check=1;
            cout << country[j] << " ";
        }
        if(country[j]==country[j+1]){
            num += 1;
        }
        if(country[j]!=country[j+1]){
            cout << num << endl;
            num = 1;
            check = 0;
        }
    }
}

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0)
            return 0;
    int len = 0, two[100];
    for(int i = 0 ; n > 0; i++){
      two[i] = n % 2 ;
      n /= 2 ;
      len++;
    }
    //cout << len << endl;
    cout << "The parity of ";
    int sum = 0;
    for(int j=len-1; j>=0; j--){
        if(two[j]==1){
            sum +=1;
        }
        cout << two[j];
    }
    cout << " is " << sum << " (mod 2)." << endl;
    }
    return 0;
}

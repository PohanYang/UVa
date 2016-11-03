#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

int main(){
    int n[3001];
    int N;
    while(cin >> N){
        for(int i=0; i<N; i++){
            cin >> n[i];
        }
        int c = 0, a=0, check[3001];
        for(int j=1; j<N; j++){
            check[a] = abs(n[j]-n[j-1]);
            a++;
        }
        for(int k=0; k<a; k++){
            for(int l=k+1; l<a; l++){
                if(check[k]==check[l]){
                    c = 1;
                    break;
                }
            }
        }
        for(int m=0; m<a; m++){
            if(check[m]<1||check[m]>=N){
                c = 1;
                break;
            }
        }
        if(c) cout << "Not jolly" << endl;
        else cout << "Jolly" << endl;
    }
}

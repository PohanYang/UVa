#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int N;
    while(cin >> N){
        for(int i=1; i<=N; i++){
            char m[2];
            int n;
            long long T[101][101];
            cin >> m[0] >> m[1] >> n;
            int c=0;
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    cin >> T[j][k];
                    if(T[j][k]<0) c=1;
                }
            }
            for(int a=0; a<n; a++){
                for(int b=0; b<n; b++){
                    if(T[a][b]!=T[n-1-a][n-1-b]) c=1;
                }
            }
            if(c) cout << "Test #" << i << ": Non-symmetric." << endl;
            else cout << "Test #" << i << ": Symmetric." << endl;
        }
    }
    return 0;
}

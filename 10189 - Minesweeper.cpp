#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int n, m, c=1;
    bool space = true;
    while(cin >> n){
        cin >> m;
        if(n==0 && m==0)
            break;
        char matrix[105][105], temp[105];
        for(int i=0; i<n; i++){
            gets(temp);
            cin >> matrix[i];
        }
        if(c>1)
            cout << endl;
        cout << "Field #" << c << ":" << endl;
        int bomb;
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(matrix[j][k]=='*')
                    cout << "*";
                else{
                    bomb=0;
                    if(matrix[j-1][k-1]=='*')
                        bomb++;
                    if(matrix[j-1][k]=='*')
                        bomb++;
                    if(matrix[j-1][k+1]=='*')
                        bomb++;
                    if(matrix[j][k-1]=='*')
                        bomb++;
                    if(matrix[j][k+1]=='*')
                        bomb++;
                    if(matrix[j+1][k-1]=='*')
                        bomb++;
                    if(matrix[j+1][k]=='*')
                        bomb++;
                    if(matrix[j+1][k+1]=='*')
                        bomb++;

                    cout << bomb;
                }
            }
            cout << endl;
        }
        c++;
    }
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int N;
    while(cin >> N){
        int X[1000001], X_max=0;
        for(int i=0; i<N; i++){
            cin >> X[i];
            if(X[i]>X_max)
                X_max=X[i];
        }
        int A;
        if(N%2==1)
            A=X[(N)/2];
        else
            A=X[(N-1)/2];
        cout << A;
        int much=0;
        for(int j=0; j<N; j++){
            if(A==X[j])
                much++;
        }
        if(N%2==0){
            for(int k=X[(N-1)/2]; k<X[((N-1)/2)+1]; k++){
                for(int l=0; l<N; l++){
                    if(k==X[l])
                        much++;
                }
            }
        }
        cout << " " << much << " ";
        //cout << "   N is " << N << "     ";
            int last=0;
            if(N%2==0){
                for(int m=X[(N-1)/2]; m<=X[(N-1)/2+1]; m++){
                    last++;
                }
                cout << last;
            }
            else
                cout << "1";

        cout << endl;
    }
    return 0;
}


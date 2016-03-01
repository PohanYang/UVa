#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int T;
    while(cin >> T){
        for(int i=0; i<T; i++){
            int N;
            cin >> N;
            int P;
            cin >> P;
            int h[100];
            for(int j=0; j<P; j++){
                cin >> h[j];
            }
            int hartals=0;
            for(int k=1; k<=N; k++){
                for(int l=0; l<P; l++){
                    if(k%7!=6&&k%7!=0&&k%h[l]==0){
                        //cout << "k is " << k << " l is " << l << endl;
                        hartals++;
                        break;
                    }
                }
            }
            cout << hartals << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N, t[30001];
    while(cin >> N){
        int n, live;
        for(int k=0; k<N; k++){
            cin >> n;
            for(int i=0; i<n; i++){
                cin >> t[i];
            }
            sort(t,t+n);
            if(n%2==1){
                live = t[(n)/2];
            }else{
                live = (t[(n-1)/2]+t[(n-1)/2+1])/2;
            }
            //cout << "live is " << live << endl;
            int ans=0;
            for(int j=0; j<n; j++){
                ans += abs(t[j]-live);
            }
            cout << ans << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int N;
    while(cin >> N){
        for(int j=1; j<=N; j++){
            int nx, ny, mx, my, all=0;
            cin >> nx >> ny >> mx >> my;
            int nstep = 0, mstep = 0;
            for(int i=1; i<=nx+ny; i++){
                nstep += i;
            }
            nstep = nstep + nx + 1;
            //cout << "nstep is : " << nstep << endl;
            for(int k=1; k<=mx+my; k++){
                mstep += k;
            }
            mstep = mstep + mx;
            //cout << "mstep is : " << mstep << endl;
            int result = mstep - nstep +1;
            cout << "Case " << j << ": " << result << endl;
        }
    }
}

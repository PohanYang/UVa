#include <iostream>
using namespace std;
int main(){
    int T, N, tmp_N, flag;
    char scare_num[10];
    cin >> T;
        for(int i=0; i<T; i++){
            flag = 1;
            cin >> N;
            cin >> scare_num;
            //identify N have scare number or not
            while(flag!=0){
                flag = 0;
                tmp_N = N;
                while(N>0){
                    if(scare_num[N%10]=='0')
                        flag=1;
                    N /= 10;
                }
                N = tmp_N;
                if(flag==1)
                    N++;
            }
            cout << tmp_N << endl;
        }
}


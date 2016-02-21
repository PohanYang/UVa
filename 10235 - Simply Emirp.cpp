#include <iostream>
using namespace std;
int prime[1000005] = { 1, 1, 0 };
int main(){
    int num;
    for(int k=2; k<1000000; k++){
        if(prime[k]==0){
            for(int h=2*k;h<1000000;h+=k) prime[h]=1;
        }
    }
    while(cin >> num){
            cout << num << " is ";
            int tnum=num, rnum=0;
            while(tnum){
                rnum *= 10;
                rnum += tnum%10;
                tnum /= 10;
            }
            if(prime[num]){
                cout << "not prime." << endl;
            }else{
                if(prime[rnum]){
                    cout << "prime." << endl;
                }else{
                    if(num==rnum){
                        cout << "prime." << endl;
                    }else cout << "emirp." << endl;
                }
            }
    }
    return 0;
}

// x+y=s
//|x-y|=d
//2 cases
//1. x>y

//x=(s+d)/2
//y=(s-d)/2

//2. x<y
//x=(s-d)/2
//y=(s+d)/2
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int N;
    while(cin >> N){
        for(int i=0; i<N; i++){
            long long s, d;
            cin >> s >> d;
            //cout << "s is " << s << " d is " << d << endl;
            long long n1 = (s+d)/2;
            long long n2 = s-n1;
            if(n2>n1){
                long long temp = n1;
                n1 = n2;
                n2 = temp;
            }
            if(n1<0||n2<0) cout << "impossible" << endl;
            else if((s+d)%2==1) cout << "impossible" << endl;
            else cout << n1 << " " << n2 << endl;
        }
    }
}

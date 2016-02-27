#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string n;
    int c=0;
    while(getline(cin,n)){
        for(int i=0; i<n.length(); i++){
            if(n[i]=='"'&&c==0){
                cout << "``";
                c = 1;
            }else if(n[i]=='"'&&c==1){
                cout << "''";
                c = 0;
            }else{
                cout << n[i];
            }
        }
        cout << endl;
    }
    return 0;
}

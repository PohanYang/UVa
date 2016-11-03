#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char t[1204];
    bool first=false;
    while(gets(t)){
        if(first) cout << endl;
        int ascii[256]={0};
        for(int i=0; i<strlen(t); i++){
            ascii[int(t[i])]++;
        }
        for(int k=1; k<1204; k++){
            for(int j=127; j; j--){
                if(ascii[j]==k)
                    cout << j << " " << ascii[j] << endl;
            }
        }
        first=true;
    }
}

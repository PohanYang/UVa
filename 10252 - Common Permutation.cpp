#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
    char s1[1001], s2[1001];
    while(cin >> s1 >> s2){
        sort(s1, s1+strlen(s1));
        sort(s2, s2+strlen(s2));
        for(int i=0; i<=strlen(s1); i++){
            for(int j=0; j<=strlen(s2); j++){
                if(s1[i]==s2[j]){
                    cout << s1[i];
                    s1[i]==NULL;
                    s2[j]==2;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

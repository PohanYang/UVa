#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    int n, len=0, countN[26];
    char text[9999], over[9999], countO[26] ;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> text;
        for(int j=0; j<=strlen(text); j++){
            over[len+j] = text[j];
        }
        len = len + strlen(text);
    }
    for(int k=0; k<=len; k++){
        if((over[k]>='a')&&(over[k]<='z'))
            over[k] = over[k] -32;
    }
    sort(over, over+len);
    int m=-1;
    for(int l=0; l<=len; l++){
        if(m==-1){
            m = 0;
            countO[m] = over[l];
            countN[m] = 1;
        }
        if(over[l]==over[l+1]){
            countN[m] += 1;
        }
        if(over[l]!=over[l+1]){
            m += 1;
            countO[m] = over[l+1];
            countN[m] = 1;
        }
    }

    int a, b, temp;
    for (a = len - 1; a > 0; a--)
    {
        for (b = 0; b <= a - 1; b++)
        {
            if (countN[b] < countN[b + 1])
            {
                temp = countN[b];
                countN[b] = countN[b + 1];
                countN[b + 1] = temp;

                temp = countO[b];
                countO[b] = countO[b + 1];
                countO[b + 1] = temp;
            }
        }
    }

    for(int p=0; p<=m; p++){
        if(countO[p]!=NULL)
            cout << countO[p] << " " << countN[p] << endl;
    }
}

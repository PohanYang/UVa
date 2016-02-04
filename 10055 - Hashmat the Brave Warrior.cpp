#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    long long num, num1, num2;
    while(cin >> num1 >> num2){
        num = num1-num2;
        cout << abs(num) << endl;
    }
    return 0;
}

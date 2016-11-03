#include <stdio.h>

#ifndef ONLINE_JUDGE /* 這個是用來預防ACM測試錯誤用，可以把system pause忽略 */
#include <stdlib.h>
#endif

int main(void)
{
    int n, i, a, b, temp, cycle, max;
    while (scanf("%d%d", &a, &b) == 2)
        {
        printf("%d %d", a, b);

        if (a > b){
                temp = a;
                a = b;
                b = temp;
                }
        max = 0;
        for (i = a; i <= b; i++){
                n = i;
                cycle = 1;
                while(n != 1){
                        n = n%2 ? 3*n+1 : n/2;/* 同if(n%2) 3*n+1 else n/2 */
                        cycle++;
                }
        /* 求出最大值 */
        max = cycle > max ? cycle : max;
        }
        printf(" %d\n", max);
        }
#ifndef ONLINE_JUDGE
system("pause");
#endif

return 0;
}

#include <stdio.h>

int gcd(int m, int n){
    if (n == 0){
        return m;
    }
    else{
        return gcd(n, m % n);
    }
}
int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main(void) { 
    int m, n;
    while (m!=-1&&n!=-1){
        printf("請輸入兩個數(以空白隔開)："); 
        scanf("%d %d", &m, &n);
            printf("最大公倍數：%d\n", lcm(m, n));
        }
    return 0; 
}

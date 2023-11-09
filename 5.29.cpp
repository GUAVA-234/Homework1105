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
        printf("�п�J��Ӽ�(�H�ťչj�})�G"); 
        scanf("%d %d", &m, &n);
            printf("gcd�G%d\n", gcd(m, n));
            printf("lcm�G%d\n", lcm(m, n));
        }
    return 0; 
}

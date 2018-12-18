#include <stdio.h>

void p6() {
    int n;
    scanf("%d", &n);
    printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);

}

void p9() {
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    a = (4 * n - m) / 2;
    b = n - a;
    //m%==1
    if (a < 0 || b < 0 || 2 * a != 4 * n - m)
        printf("No answer");
    else
        printf("%d %d\n", a, b);

}

int main() {
    printf("Hello, World!\n");
    p9();
    return 0;
}
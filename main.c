#include <stdio.h>
#include <math.h>

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

void p11_3() {
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d \n", a, b, c);
}

void p11_4() {
    int a, b, c, x, y, z;
    scanf("%d%d%d", &a, &b, &c);
    x = a;
    if (b < x) x = b;
    if (c < x) x = c;
    z = a;
    if (b > z) z = b;
    if (c > z) z = c;
    y = a + b + c - x - z;
    printf("%d %d %d", x, y, z);

}

void p16() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; ++i) {
        printf("%d\n", i);
    }
}

void p18_1() {
    int a, b, n;
    double m;
    for (a = 1; a <= 9; ++a) {
        for (b = 0; b <= 9; ++b) {
            n = 1100 * a + 11 * b;
            m = sqrt(n);
            if (floor(m + 0.5) == m) printf("%d\n", n);
        }
    }
}

int main() {
    printf("Hello, World!\n");
    p18_1();
    return 0;
}
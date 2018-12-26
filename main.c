#include <stdio.h>
#include <math.h>
#include <time.h>
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

void p21() {
    for (int i = 1;; ++i) {

        int n = i * i;
        if (n < 1000)
            continue;
        if (n > 9999)
            break;
        int hi = n / 100;
        int lo = n % 100;
        if (hi / 10 == hi % 10 && lo / 10 == lo % 10)
            printf("%d\n", n);

    }
}

void p22() {
    int count = 0;
    int n2;
    scanf("%d", &n2);
    long long n=n2;
    while (n > 1) {
        if (n % 2 == 1) {

            n = 3 * n + 1;
            count++;
        } else {
            n = n / 2;
            count++;
        }
    }
    printf("%d\n", count);
}

void p24(){
    double sum =0;
    for (int i = 0;  ; ++i) {
        double term=1.0/(2*i+1);
        if(i%2==0)sum+=term;
        else sum-=term;
        if(term<1e-6)break;
    }
    printf("%.6f\n",sum);
}

void p25(){
    int n,S=0;
    scanf("%d",&n);
    if(n>25)n=25;
    for (int i = 1; i <=n; ++i) {
        int f=1;
        for (int j = 1; j <=i ; ++j) {
            f*=j;
        }
        S+=f;
    }
    printf("%d\n",S%1000000);
    printf("%.6f\n",(double)clock()/CLOCKS_PER_SEC);

}

int main() {
    printf("Hello, World!\n");
    p25();
    return 0;
}
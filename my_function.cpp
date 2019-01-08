//
// Created by Yesterday on 2019/1/4.
//
#include "my_function.h"
#include <stdio.h>
#define MANX 20

void p40(){
    int a[MANX][MANX];
    int n,x,y,tot=0;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    tot=a[x=0][y=n-1]=1;
    while (tot<n*n){
        while(x+1<n&&!a[x+1][y])a[++x][y]=++tot;
        while(y-1>=0&&!a[x][y-1])a[x][--y]=++tot;
        while(x-1>=0&&!a[x-1][y])a[--x][y]=++tot;
        while(y+1<n&&!a[x][y+1])a[x][++y]=++tot;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}

void p43(){
    int count=0;
    char s[20],buf[99];
    scanf("%s",s);
    for (int abc = 111; abc <=999 ; ++abc) {
        for (int de = 11; de <=99 ; ++de) {
            int x=abc*(de%10),y=abc*(de/10),z=abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
            int ok=1;
            for (int i = 0; i < strlen(buf); ++i) {
                if(strchr(s,buf[i])==NULL) ok=0;
            }
            if(ok)
            {
                printf("<%d>\n",++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",
                        abc,de,x,y,z);
            }
        }
    }
    printf("The number of solution = %d\n", count++);
}
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
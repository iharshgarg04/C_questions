#include<stdio.h>

int main(){

    int x =9;
    int y= 3;

    int a = x&~y;
    int b = ~x&y;
    int c = ~a & ~b;

    int ans = ~c;
    printf("%d",ans);

}
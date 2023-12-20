#include<stdio.h>

int main(){

    int x =0b11010110;
    int p =3;
    int n=2;

    int mask = (~(-1<<n))<<p;

    int ans = x^mask;

    printf("%d",ans);   

    return 0;
}
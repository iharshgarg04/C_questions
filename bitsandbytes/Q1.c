#include<stdio.h>

int main(){

    int x = 8;
    int y =9;

    int nx =~x;
    int ny = ~y;
    int ans = ~(nx|ny);

    printf("%d",ans);
    return 0;
}
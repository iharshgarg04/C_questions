#include<stdio.h>

int main(){

    int x = -1;
    int n = 30  ;

    int a = x>>n;
    int mask = ~(1<<31>>n<<1);
    int ans = a&mask;

    printf("%d",ans);

    return 0;

}
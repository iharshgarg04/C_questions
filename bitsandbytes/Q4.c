#include<stdio.h>

int main(){

    int num = 0x12345678;
    int mask1 = 3*8;
    num = num>>mask1;
    int mask2 = 0xFF;
    num = num & mask2;
    printf("%d",num);
    return 0;

}
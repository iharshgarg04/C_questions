#include<stdio.h>


int sign(int n) {
    return (((1 << 30) | n) >> 30) & (~(!n));
}

int main(){
	sign(2);
	return 0;
}
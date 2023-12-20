#include <stdio.h>

int sign(int x) {
    return (!!x)|(x>>31);
}

int main() {
    int x = 25;
    int result = sign(x);
    
    printf("sign(%d) = %d\n", x, result);

    return 0;
}
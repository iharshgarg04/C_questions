#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int stack[1000];
int top = -1;

int main() {

    int n;
    scanf("%d", &n);
    getchar(); 

    while (n--) {

        char arr[1000];
        fgets(arr, sizeof(arr), stdin);

        int z = 0;
        for (int i = 0; arr[i] != '?'; i++) {
            if (isdigit(arr[i])) {
                
                int ope = 0;
                while(isdigit(arr[i])){
                    ope = ope*10 + (arr[i]-'0');
                    i++;
                }
                stack[++top] = ope;

            } else if (arr[i] == ' ') {
                continue;
            } else {
                int operand1 = stack[top--];
                int operand2 = stack[top--];

                switch (arr[i]) {

                case '+':
                    z = operand1 + operand2;
                    break;
                case '-':
                    z = operand2 - operand1;
                    break;
                case '/':
                    z = operand2 / operand1;
                    break;
                case '*':
                    z = operand2 * operand1;
                    break;
                default:
                    break;
                }
                stack[++top] = z;
            }
        }

        printf("%d\n", stack[top--]);
    }

    return 0;
}

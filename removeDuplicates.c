#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

char* removeDuplicateLetters(char* s) {
    int count[26] = {0};
    bool inStack[26] = {false}; 
    char stack[256]; 
    int top = -1; 

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        count[index]--;

        if (inStack[index]) {
            continue;
        }

        while (top != -1 && s[i] < stack[top] && count[stack[top] - 'a'] > 0) {
            inStack[stack[top--] - 'a'] = false;
        }

        stack[++top] = s[i];
        inStack[index] = true;
    }

    char* result = malloc(top + 2);
    for (int i = 0; i <= top; i++) {
        result[i] = stack[i];
    }
    result[top + 1] = '\0';

    return result;
}

int main(){

    char arr[100];
    printf("Enter a string: ");
    fgets(arr,sizeof(arr),stdin);

    char* ans = removeDuplicateLetters(arr);
    printf("%s",ans);
       free(ans);
    return 0;
}
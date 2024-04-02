#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int n, m = 0;
    printf("Insira a String a ser revertida:\n");
    scanf("%s", str);
    n = strlen(str) - 1;
    char rev[n + 1];
    while(m < strlen(str)){
        rev[m] = str[n];
        m++;
        n--;
    }
    rev[m] = '\0';
    printf("%s", rev);
}

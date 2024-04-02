#include<stdio.h>

int main(){
    int anterior, anterior2, atual, valor;
    anterior = 1;
    anterior2 = 0;
    atual = 0;
    printf("Insira o valor desejado: ");
    scanf("%d", &valor);
    printf("\n%d\n", valor);

    while(valor > atual){
        printf("%d, ", atual);
        anterior2 = anterior;
        anterior = atual;
        atual = anterior + anterior2;
    }
    printf("%d", atual);
    if(valor == atual){
        printf("\nPertence à sequência de Fibonacci");
    }
    else
        printf("\nNão pertence à sequência de Fibonacci");
    printf("\n\nPressione qualquer tecla para continuar.");
    getchar();
    return 0;
}

#include <stdio.h>
 
int main() {

    //movimento do bispo 5 casas para a Direita em While
int torre = 1, bisbo = 1, rainha = 1;
    
while (torre <= 5)
{
    printf("Torre moveu-se para Direita.\n", torre);
    torre++;
}
do //movimento do bispo 5 casas na diagonal(Cima, Direita) em Do-While
{
    printf("Bisbo moveu-se para Cima, Direita.\n", bisbo);
    bisbo++;
} while (bisbo <= 5);
//movimento da rainha 8 casas para a Esquerda em For
for (int rainha = 1; rainha <= 8; rainha++)
{
    printf("Rainha moveu-se para esquerda.\n", rainha);
}

    
   
    return 0;
}
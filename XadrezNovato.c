#include <stdio.h>
 
int main() {

int torre = 1, bisbo = 1, rainha = 1;
    
while (torre <= 5)
{
    printf("Torre moveu-se para Direita.\n", torre);
    torre++;
}
do
{
    printf("Bisbo moveu-se para Cima, Direita.\n", bisbo);
    bisbo++;
} while (bisbo <= 5);
for (int rainha = 1; rainha <= 8; rainha++)
{
    printf("Rainha moveu-se para esquerda.\n", rainha);
}

    
   
    return 0;
}
#include <stdio.h>
 
int main() {
    // Declaração das variáveis para as notas
    float nota1, nota2, nota3;
    float media;

   printf("*** Programa de Cálculo de Média ***\n");

   // Entrada das notas
   printf("Digite a sua primeira nota: \n");
   scanf("%f", &nota1);  

   printf("Digite a sua segunda nota: \n");
   scanf("%f", &nota2);   

   printf("Digite a sua terceira nota: \n");
   scanf("%f", &nota3);  

   media = (nota1 + nota2 + nota3) / 3

   printf("A média é: %.2f\n", media);

    return 0;
}
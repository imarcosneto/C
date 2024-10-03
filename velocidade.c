#include <stdio.h>

int main() {
    int a;          // Distância
    float b, c;     // Tempo e Velocidade

    printf("\nEntre com uma distância: ");
    scanf("%d", &a);  // Leitura da distância (inteiro)
    
    printf("\nEntre com um tempo: ");
    scanf("%f", &b);  // Leitura do tempo (float)
    
    c = a / b;  // Calcula a velocidade (float resultante da divisão)
    
    printf("\nA velocidade média é %.2f\n", c);  // Mostra a velocidade com 2 casas decimais
    
    return 0;
}

#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor >= 200.00) {
        desconto = valor * 0.10;
    } else if (valor >= 100.00) {
        desconto = valor * 0.05;
    } else {
        desconto = 0.00;
    }

    valorFinal = valor - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
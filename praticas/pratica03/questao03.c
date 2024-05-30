#include <stdio.h>

int main() {
    // Arrays para armazenar os qualitativos e as notas correspondentes
    const char *qualitativos[] = {"", "Ruim", "Insuficiente", "Suficiente", "Bom", "Ótimo"};
    const int notas[] = {1, 2, 3, 4, 5};

    int nota;

    // Solicita que o usuário insira a nota
    printf("Insira a nota (de 1 a 5): ");
    scanf("%d", &nota);

    // Verifica se a nota está dentro do intervalo válido
    if (nota >= 1 && nota <= 5) {
        // Imprime o qualitativo correspondente à nota
        printf("%s\n", qualitativos[nota]);
    } else {
        // Caso a nota seja inválida, imprime "Nota inválida"
        printf("Nota inválida\n");
    }

    return 0;
}
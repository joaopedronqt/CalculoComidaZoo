#include <stdio.h>
#include <string.h>

// Tabela de consumo de comida por dia para diferentes animais
struct Animal {
    char nome[20];
    int consumo;
};

struct Animal tabelaConsumo[] = {
    {"Leopardo", 7},
    {"Elefante", 15},
    {"Girafa", 10},
    {"Leão", 8},
    {"Macaco", 5},
    {"Jacaré", 7},
    {"Cobra", 2},
    {"Tucano", 2},
    
};

int main() {
    char tipoAnimal[20];
    int quantidadeAnimais;
    float custoPorKilo;

    // Solicitar dados de entrada 
    printf("Tipo de Animal: ");
    scanf("%s", tipoAnimal);
    printf("Quantidade de animais: ");
    scanf("%d", &quantidadeAnimais);
    printf("Custo estimado por kilo de comida: ");
    scanf("%f", &custoPorKilo);

    
    int i;
    int encontrado = 0;
    for (i = 0; i < sizeof(tabelaConsumo) / sizeof(tabelaConsumo[0]); i++) {
        if (strcmp(tipoAnimal, tabelaConsumo[i].nome) == 0) {
            encontrado = 1;
            int consumoPorAnimal = tabelaConsumo[i].consumo;
            int consumoPorDia = consumoPorAnimal * quantidadeAnimais;
            int consumoPorMes = consumoPorDia * 30;
            float custoPorMes = consumoPorMes * custoPorKilo;

            // Exibir os resultados
            printf("Quantidade por de kilo por animal: %d\n", consumoPorAnimal);
            printf("Quantidade por dia: %d\n", consumoPorDia);
            printf("Quantidade por mes: %d\n", consumoPorMes);
            printf("Custo estimado por mes: %.2f\n", custoPorMes);
            break;
        }
    }

    if (!encontrado) {
        printf("Animal não encontrado na tabela de consumo.\n");
    }

    return 0;
}

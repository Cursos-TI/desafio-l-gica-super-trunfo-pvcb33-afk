    nivel novato 
#include <stdio.h>
#include <string.h>

struct Carta {
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1 = {"RJ01", "Rio de Janeiro", 6747815, 1200.27, 400.0, 90};
    struct Carta carta2 = {"MG01", "Belo Horizonte", 2530701, 331.4, 104.0, 55};

    // Escolha do atributo de comparação (pode mudar para "populacao", "area", "pib", "pontosTuristicos")
    char atributo[] = "pib";

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n\n");

    // Exibindo cartas
    printf("Carta 1: %s\n", carta1.cidade);
    printf("Código: %s | População: %d | Área: %.2f km² | PIB: R$%.1f bi | Pontos turísticos: %d\n\n",
           carta1.codigo, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);

    printf("Carta 2: %s\n", carta2.cidade);
    printf("Código: %s | População: %d | Área: %.2f km² | PIB: R$%.1f bi | Pontos turísticos: %d\n\n",
           carta2.codigo, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);

    printf(">>> Comparando atributo: %s\n", atributo);

    // Lógica de comparação usando if e if-else
    if (strcmp(atributo, "populacao") == 0) {
        if (carta1.populacao > carta2.populacao)
            printf("🏆 Vencedora: %s (maior população)\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("🏆 Vencedora: %s (maior população)\n", carta2.cidade);
        else
            printf("🤝 Empate na população!\n");
    } else if (strcmp(atributo, "area") == 0) {
        if (carta1.area > carta2.area)
            printf("🏆 Vencedora: %s (maior área)\n", carta1.cidade);
        else if (carta2.area > carta1.area)
            printf("🏆 Vencedora: %s (maior área)\n", carta2.cidade);
        else
            printf("🤝 Empate na área!\n");
    } else if (strcmp(atributo, "pib") == 0) {
        if (carta1.pib > carta2.pib)
            printf("🏆 Vencedora: %s (maior PIB)\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("🏆 Vencedora: %s (maior PIB)\n", carta2.cidade);
        else
            printf("🤝 Empate no PIB!\n");
    } else if (strcmp(atributo, "pontosTuristicos") == 0) {
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("🏆 Vencedora: %s (mais pontos turísticos)\n", carta1.cidade);
        else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
            printf("🏆 Vencedora: %s (mais pontos turísticos)\n", carta2.cidade);
        else
            printf("🤝 Empate nos pontos turísticos!\n");
    } else {
    }

    return 0;
    nivel aventureiro
}
    #include <stdio.h>
#include <string.h>

// Estrutura para a carta
struct Carta {
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para exibir uma carta
void exibir Carta(struct Carta carta) {
    printf("\nCidade: %s (%s)", carta.cidade, carta.codigo);
    printf("\nPopulação: %d", carta.populacao);
    printf("\nÁrea: %.2f km²", carta.area);
    printf("\nPIB: R$%.1f bilhões", carta.pib);
    printf("\nPontos Turísticos: %d\n", carta.pontosTuristicos);
}

// Função principal
int main() {
    struct Carta carta1 = {"RJ01", "Rio de Janeiro", 6747815, 1200.27, 400.0, 90};
    struct Carta carta2 = {"MG01", "Belo Horizonte", 2530701, 331.4, 104.0, 55};

    int opcao;

    printf("=== SUPER TRUNFO - NÍVEL AVENTUREIRO ===\n");

    // Exibe as cartas
    printf("\n--- Carta 1 ---");
    exibirCarta(carta1);
    printf("\n--- Carta 2 ---");
    exibirCarta(carta2);

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Escolha (1-4): ");
    scanf("%d", &opcao);

    // Switch com comparações aninhadas
    switch (opcao) {
        case 1:
            printf("\n>>> Comparando por População...\n");
            if (carta1.populacao > carta2.populacao)
                printf("🏆 %s venceu com maior população!\n", carta1.cidade);
            else if (carta2.populacao > carta1.populacao)
                printf("🏆 %s venceu com maior população!\n", carta2.cidade);
            else {
                printf("Empate na população! Verificando PIB como critério de desempate...\n");
                if (carta1.pib > carta2.pib)
                    printf("🏆 %s venceu pelo maior PIB!\n", carta1.cidade);
                else if (carta2.pib > carta1.pib)
                    printf("🏆 %s venceu pelo maior PIB!\n", carta2.cidade);
                else
                    printf("🤝 Empate total!\n");
            }
            break;
        case 2:
            printf("\n>>> Comparando por Área...\n");
            if (carta1.area > carta2.area)
                printf("🏆 %s venceu com maior área!\n", carta1.cidade);
            else if (carta2.area > carta1.area)
                printf("🏆 %s venceu com maior área!\n", carta2.cidade);
            else
                printf("🤝 Empate na área!\n");
            break;
        case 3:
            printf("\n>>> Comparando por PIB...\n");
            if (carta1.pib > carta2.pib)
                printf("🏆 %s venceu com maior PIB!\n", carta1.cidade);
            else if (carta2.pib > carta1.pib)
                printf("🏆 %s venceu com maior PIB!\n", carta2.cidade);
            else {
                printf("Empate no PIB! Verificando população como critério de desempate...\n");
                if (carta1.populacao > carta2.populacao)
                    printf("🏆 %s venceu pelo maior número de habitantes!\n", carta1.cidade);
                else if (carta2.populacao > carta1.populacao)
                    printf("🏆 %s venceu pelo maior número de habitantes!\n", carta2.cidade);
                else
                    printf("🤝 Empate total!\n");
            }
            break;
        case 4:
            printf("\n>>> Comparando por Pontos Turísticos...\n");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("🏆 %s venceu com mais pontos turísticos!\n", carta1.cidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("🏆 %s venceu com mais pontos turísticos!\n", carta2.cidade);
            else
                printf("🤝 Empate nos pontos turísticos!\n");
            break;
        default:
    }
    return 0;
    }    
    nivel mestre
    #include <stdio.h>
#include <string.h>

// Estrutura para a carta
struct Carta {
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para exibir uma carta
void exibirCarta(struct Carta carta) {
    printf("\nCidade: %s (%s)", carta.cidade, carta.codigo);
    printf("\nPopulação: %d", carta.populacao);
    printf("\nÁrea: %.2f km²", carta.area);
    printf("\nPIB: R$%.1f bilhões", carta.pib);
    printf("\nPontos Turísticos: %d\n", carta.pontosTuristicos);
}

// Função para comparar dois atributos
int compararValores(float v1, float v2, int menorVence) {
    if (v1 == v2) return 0;
    return (menorVence ? (v1 < v2 ? 1 : 2) : (v1 > v2 ? 1 : 2));
}

// Função principal
int main() {
    struct Carta carta1 = {"RJ01", "Rio de Janeiro", 6747815, 1200.27, 400.0, 90};
    struct Carta carta2 = {"MG01", "Belo Horizonte", 2530701, 331.4, 104.0, 55};

    int atributo1, atributo2;

    printf("=== SUPER TRUNFO - NÍVEL MESTRE ===\n");

    // Exibe as cartas
    printf("\n--- Carta 1 ---");
    exibirCarta(carta1);
    printf("\n--- Carta 2 ---");
    exibirCarta(carta2);

    // Menu dinâmico
    printf("\nEscolha dois atributos diferentes para comparar:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos Turísticos (maior vence)\n");
    printf("5 - Densidade Populacional (MENOR vence)\n");

    // Leitura dos atributos
    printf("\nDigite o número do 1º atributo: ");
    scanf("%d", &atributo1);
    printf("Digite o número do 2º atributo: ");
    scanf("%d", &atributo2);

    // Validação simples
    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {  
    }

    // Calcula densidade
    float densidade1 = carta1.populacao / carta1.area;
    float densidade2 = carta2.populacao / carta2.area;

    // Função auxiliar para obter o valor de um atributo
    float obterValor(struct Carta c, int attr) {
        switch (attr) {
            case 1: return c.populacao;
            case 2: return c.area;
            case 3: return c.pib;
            case 4: return c.pontosTuristicos;
            case 5: return c.populacao / c.area;
            default: return 0;
        }
    }

    // Indica se o menor valor vence (apenas para densidade)
    int menorVence(int attr) {
        return attr == 5;
    }

    float val1_a1 = obterValor(carta1, atributo1);
    float val2_a1 = obterValor(carta2, atributo1);
    int resultado = compararValores(val1_a1, val2_a1, menorVence(atributo1));

    if (resultado == 1) {
        printf("\n🏆 %s venceu no 1º atributo!\n", carta1.cidade);
    } else if (resultado == 2) {
        printf("\n🏆 %s venceu no 1º atributo!\n", carta2.cidade);
    } else {
        // Empate no primeiro atributo -> compara o segundo
        float val1_a2 = obterValor(carta1, atributo2);
        float val2_a2 = obterValor(carta2, atributo2);
        int resultado2 = compararValores(val1_a2, val2_a2, menorVence(atributo2));

        if (resultado2 == 1) {
            printf("\n⚖️ Empate no 1º atributo.\n🏆 %s venceu no 2º atributo como critério de desempate!\n", carta1.cidade);
        } else if (resultado2 == 2) {
            printf("\n⚖️ Empate no 1º atributo.\n🏆 %s venceu no 2º atributo como critério de desempate!\n", carta2.cidade);
        } else {
            printf("\n🤝 EMPATE TOTAL!\n👏 Ambas as cidades são incríveis!\n");
        }
    }

    return 0;
}

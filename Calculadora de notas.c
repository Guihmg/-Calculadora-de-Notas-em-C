#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_de_unidades, i, matricula;
    float nota_prova, nota_trabalhos, peso_prova, peso_trabalhos, nota_unidade, soma_das_notas, media_final, total_aulas, total_faltas, percentual_presenca;
    char continuar;

    printf("Informe a quantidade de unidades (bimestres ou trimestres) do periodo letivo: ");
    scanf("%d", &numero_de_unidades);

    printf("Qual o total de aulas do periodo?: ");
    scanf("%f", &total_aulas);

    continuar = 'S';
    while (continuar == 'S' || continuar == 's') {

        system("cls");

        soma_das_notas = 0.0;

        printf("\n--- Novo Aluno ---\n");
        printf("Digite o numero da matricula: ");
        scanf("%d", &matricula);

        for (i = 1; i <= numero_de_unidades; i++) {
            printf("\n--- Unidade %d ---\n", i);

            printf("Nota da Avaliacao Principal: ");
            scanf("%f", &nota_prova);
            printf("Peso da Avaliacao Principal: ");
            scanf("%f", &peso_prova);

            printf("Nota das outras atividades: ");
            scanf("%f", &nota_trabalhos);
            printf("Peso das outras atividades: ");
            scanf("%f", &peso_trabalhos);

            nota_unidade = ((nota_prova * peso_prova) + (nota_trabalhos * peso_trabalhos)) / (peso_prova + peso_trabalhos);
            
            soma_das_notas += nota_unidade;
        }

        media_final = soma_das_notas / (float)numero_de_unidades;

        printf("\nDigite o total de faltas do aluno: ");
        scanf("%f", &total_faltas);

        percentual_presenca = ((total_aulas - total_faltas) / total_aulas) * 100;

        printf("\n--- Resultado Final ---\n");
        printf("Matricula: %d\n", matricula);
        printf("Media Final: %.2f\n", media_final);
        printf("Frequencia: %.2f%%\n", percentual_presenca);

        if (media_final >= 7.0 && percentual_presenca >= 75.0) {
            printf("Status: APROVADO!\n");
        } else {
            printf("Status: REPROVADO!\n");
        }

        printf("\nDeseja calcular para outro aluno? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("\nPrograma finalizado.\n");

    return 0;
}

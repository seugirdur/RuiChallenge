#include <stdio.h>

char medico1[20];
char medico2[20];
char medico3[20];
char pesquisa_medico[20];
char pesquisa_data[11];
char data_consulta1[11];
char data_consulta2[11];
char data_consulta3[11];
int medicoExiste;

void salvar() {

    printf("Digite o nome do medico a ser salvo\n");
    fflush(stdin);
    printf("Digite o Nome do 1o Medico: \n");

    fflush(stdin);
    gets(medico1);
    medicoExiste = 0;

    do {
        printf("Digite o Nome do 2o Medico: \n");
        fflush(stdin);
        gets(medico2);
        for (int i = 0; i < 20; i++) {

            if (medico1[i] == medico2[i]) {
                medicoExiste = 1;
                continue;
            } else {
                medicoExiste = 0;
                break;
            }

        }


        if (medicoExiste == 1) {
            printf("O medico ja existe");

        }

    } while (medicoExiste == 1);

    do {
        printf("Digite o Nome do 3o Medico: \n");
        fflush(stdin);
        gets(medico3);
        for (int i = 0; i < 20; i++) {

            if (medico1[i] == medico3[i]) {
                medicoExiste = 1;
                continue;
            } else {
                medicoExiste = 0;
                break;
            }

        }

        if (medicoExiste == 1) {
            printf("O medico ja existe\n");
            continue;
        }

        for (int i = 0; i < 20; i++) {

            if (medico2[i] == medico3[i]) {
                medicoExiste = 1;
                continue;
            } else {
                medicoExiste = 0;
                break;
            }

        }

        if (medicoExiste == 1) {
            printf("O medico ja existe\n");
            continue;

        }

    } while (medicoExiste == 1);


    printf("Digite a 1a Data: \n");
    fflush(stdin);
    gets(data_consulta1);
    printf("Digite a 2a Data: \n");
    fflush(stdin);
    gets(data_consulta2);
    printf("Digite a 3a Data: \n");
    fflush(stdin);
    gets(data_consulta3);


    printf("\n\nDados inseridos com Sucesso!\n\n");

}

void listar() {
    printf("funcao listar\n");
    printf("Medico 1: ");
    puts(medico1);
    printf("\nMedico 2: ");
    puts(medico2);
    printf("\nMedico 3: ");
    puts(medico3);
    printf("\n1a Data: ");
    puts(data_consulta1);
    printf("\n2a Data: ");
    puts(data_consulta2);
    printf("\n3a Data: ");
    puts(data_consulta3);
    printf("\n\nDados Listados com Sucesso!\n\n");
}
//
//int pesquisarMedico() {
//    medicoExiste = 0;
//    printf("\nfuncao pesquisarMedico\n");
//    fflush(stdin);
//
//    printf("Digite o nome do medico que deseja pesquisar: \n");
//    fflush(stdin);
//    gets(pesquisa_medico);
//    for (int i = 0; i < 20; i++) {
//
//        if (pesquisa_medico[i] == medico1[i]) {
//            printf("%c", medico1[i]);
//            printf("%c", pesquisa_medico[i]);
//
//            medicoExiste = 1;
//        } else {
//            medicoExiste = 0;
//            break;
//        }
//    }
//
//    for (int i = 0; i < 20; i++) {
//        if (medicoExiste == 1) {
//            break;
//        }
//        if (pesquisa_medico[i] == medico2[i]) {
//            medicoExiste = 2;
//        } else {
//            medicoExiste = 0;
//            break;
//        }
//    }
//
//    for (int i = 0; i < 20; i++) {
//        if (medicoExiste == 1 || medicoExiste == 2) {
//            break;
//        }
//        if (pesquisa_medico[i] == medico3[i]) {
//            medicoExiste = 3;
//        } else {
//            medicoExiste = 0;
//            break;
//        }
//    }
//
//    switch (medicoExiste) {
//        case 1 :
//            printf("\nO medico e: %s", medico1);
//            printf("\nA data e: %s", data_consulta1);
//            break;
//        case 2 :
//            printf("\nO medico e: %s", medico2);
//            printf("\nA data e: %s", data_consulta2);
//            break;
//        case 3 :
//            printf("\nO medico e: %s", medico3);
//            printf("\nA data e: %s", data_consulta3);
//            break;
//
//        default:
//            printf("\nO medico NAO esta na Base de Dados!\n\n");
//
//    }
//    return medicoExiste;
//
//}

//void pesquisarData() {
//
//    printf("funcao pesquisarData\n");
//    int dataExiste = 0;
//    fflush(stdin);
//
//    printf("Digite a Data que deseja pesquisar: \n");
//    fflush(stdin);
//    gets(pesquisa_data);
//    for(int i = 0; i < 11; i++) {
//
//
//        if(pesquisa_data[i] == data_consulta1[i]) {
//            dataExiste = 1;
//        } else {
//            dataExiste = 0;
//            break;
//        }
//    }
//    printf("na data %s consta o seguinte medico\n", pesquisa_data);
//    if(dataExiste == 1) {
//        puts(medico1);
//    }
//
//
//    for(int i = 0; i < 11; i++) {
//
//        if(pesquisa_data[i] == data_consulta2[i]) {
//            dataExiste = 2;
//        } else {
//            dataExiste = 0;
//            break;
//        }
//    }
//
//    if(dataExiste == 2) {
//        puts(medico2);
//    }
//
//    for(int i = 0; i < 11; i++) {
//
//        if(pesquisa_data[i] == data_consulta3[i]) {
//            dataExiste = 3;
//        } else {
//            dataExiste = 0;
//            break;
//        }
//    }
//
//    if(dataExiste == 3) {
//        puts(medico3);
//    }
//
//
//    if(dataExiste == 0)
//    {
//        printf("NAO existe consulta com essa Data! \n");
//    }
//
//}


void pesquisarData() {

    printf("funcao pesquisarData\n");
    int dataExiste = 0;
    int dataNum = 0;

    fflush(stdin);

    printf("Digite a Data que deseja pesquisar: \n");
    fflush(stdin);
    gets(pesquisa_data);

    for (int i = 0; i < 11; i++) {
        if (pesquisa_data[i] == data_consulta1[i]) {
            dataNum = 1;
        } else {
            dataNum = 0;
            break;

        }
    }
    if (dataNum > 0) {
        printf("Na data %s consta o seguinte medico\n", pesquisa_data);
        dataExiste = 1;
    }

    if (dataNum == 1) {
        printf("%s\n", medico1);
    }

    for (int i = 0; i < 11; i++) {
        if (pesquisa_data[i] == data_consulta2[i]) {
            dataNum = 2;
        } else {
            dataNum = 0;
            break;

        }
    }

    if (dataNum > 0) {
        if (dataExiste == 0) {
            printf("Na data %s consta o seguinte medico\n", pesquisa_data);
        }
        dataExiste = 1;
    }

    if (dataNum == 2) {
        printf("%s\n", medico2);
    }

    for (int i = 0; i < 11; i++) {
        if (pesquisa_data[i] == data_consulta3[i]) {
            dataNum = 3;
        } else {
            dataNum = 0;
            break;

        }
    }
    if (dataNum > 0) {
        if (dataExiste == 0) {
            printf("Na data %s consta o seguinte medico\n", pesquisa_data);
        }
        dataExiste = 1;
    }

    if (dataNum == 3) {
        printf("%s\n", medico3);
    }

    if (dataExiste == 0) {
        printf("NAO existe consulta com essa Data! \n");
    }
}

//
//void alterar() {
//
//    char novoMedico[20];
//
//    printf("funcao alterar");
//    printf("qual medico quer alterar?");
//    int medicoNum = pesquisarMedico();
//    printf("O medico a ser alterado é o medico %d", medicoNum);
//
//    do {
//        printf("Digite o Nome do %do Medico: \n", medicoNum);
//        fflush(stdin);
//        gets(novoMedico);
//        for (int i = 0; i < 20; i++) {
//
//            if (novoMedico[i] == medico1[i]) {
//                medicoExiste = 1;
//                continue;
//            } else {
//                medicoExiste = 0;
//                break;
//            }
//
//        }
//
//        if (medicoExiste == 1) {
//            printf("O medico ja existe\n");
//            continue;
//        }
//
//        for (int i = 0; i < 20; i++) {
//
//            if (novoMedico[i] == medico2[i]) {
//                medicoExiste = 2;
//                continue;
//            } else {
//                medicoExiste = 0;
//                break;
//            }
//
//        }
//
//        if (medicoExiste == 2) {
//            printf("O medico ja existe\n");
//            continue;
//
//        }
//
//        for (int i = 0; i < 20; i++) {
//
//            if (novoMedico[i] == medico3[i]) {
//                medicoExiste = 3;
//                continue;
//            } else {
//                medicoExiste = 0;
//                break;
//            }
//
//        }
//
//        if (medicoExiste == 3) {
//            printf("O medico ja existe\n");
//            continue;
//
//        }
//
//    } while (medicoExiste == 1);
//
//    switch (medicoNum) {
//        case 1:
//            for (int i = 0; i < 20; i++) {
//                fflush(stdin);
//                medico1[i] = novoMedico[i];
//
//            }
//            printf("Medico 1 alterado com sucesso!");
//
//            break;
//        case 2:
//            for (int i = 0; i < 20; i++) {
//                fflush(stdin);
//                medico2[i] = novoMedico[i];
//            }
//            printf("Medico 2 alterado com sucesso!");
//
//            break;
//        case 3:
//            for (int i = 0; i < 20; i++) {
//                fflush(stdin);
//                medico3[i] = novoMedico[i];
//            }
//            printf("Medico 3 alterado com sucesso!");
//
//            break;
//
//        default:
//            printf("Ocorreu um erro!");
//            break;
//    }
//
//
//}

void sair() {
    printf("funcao sair");
    return;
}
//
//int pesquisarMedico() {
//    medicoExiste = 0;
//    printf("\nfuncao pesquisarMedico\n");
//    printf("Digite o nome do medico que deseja pesquisar: \n");
//    fflush(stdin);
//    gets(pesquisa_medico);
//
//    int i = 0;
//
//    // Compare os caracteres individualmente.
//    for (i = 0; i < 20; i++) {
//        if (pesquisa_medico[i] != '\0' && pesquisa_medico[i] != medico1[i]) {
//            break;
//        }
//    }
//
//    if (i == 20 && medico1[i] == '\0') {
//        printf("\nO medico e: %s", medico1);
//        medicoExiste = 1;
//    }
//
//    for (i = 0; i < 20; i++) {
//        if (pesquisa_medico[i] != '\0' && pesquisa_medico[i] != medico2[i]) {
//            break;
//        }
//    }
//
//    if (i == 20 && medico2[i] == '\0') {
//        printf("\nO medico e: %s", medico2);
//        medicoExiste = 2;
//    }
//
//    for (i = 0; i < 20; i++) {
//        if (pesquisa_medico[i] != '\0' && pesquisa_medico[i] != medico3[i]) {
//            break;
//        }
//    }
//
//    if (i == 20 && medico3[i] == '\0') {
//        printf("\nO medico e: %s", medico3);
//        medicoExiste = 3;
//    }
//
//    if (medicoExiste == 0) {
//        printf("\nO medico NAO esta na Base de Dados!\n\n");
//    }
//
//    return medicoExiste;
//}
//
//void alterar() {
//    char novoMedico[20];
//
//    printf("funcao alterar\n");
//    printf("Qual medico quer alterar?\n");
//    int medicoNum = pesquisarMedico();
//    printf("O medico a ser alterado e o medico %d", medicoNum);
//
//    if (medicoNum != 0) {
//        printf("Digite o novo nome para o medico %d: \n", medicoNum);
//        fflush(stdin);
//        gets(novoMedico);
//
//        int i = 0;
//
//        switch (medicoNum) {
//            case 1:
//                for (i = 0; i < 20; i++) {
//                    medico1[i] = novoMedico[i];
//                }
//                printf("Medico 1 alterado com sucesso!");
//                break;
//            case 2:
//                for (i = 0; i < 20; i++) {
//                    medico2[i] = novoMedico[i];
//                }
//                printf("Medico 2 alterado com sucesso!");
//                break;
//            case 3:
//                for (i = 0; i < 20; i++) {
//                    medico3[i] = novoMedico[i];
//                }
//                printf("Medico 3 alterado com sucesso!");
//                break;
//            default:
//                printf("Ocorreu um erro!");
//                break;
//        }
//    }
//}

void excluir() {
    printf("funcao excluir");
    printf("qual medico quer excluir?");
    int medicoNum = pesquisarMedico();
    printf("O medico a ser excluido é o medico %d", medicoNum);

    switch (medicoNum) {
        case 1:
            for (int i = 0; i < 20; i++) {
                medico1[i] = '\0';

            }
            printf("Medico 1 excluido com sucesso!");

            break;
        case 2:
            for (int i = 0; i < 20; i++) {
                medico2[i] = '\0';
            }
            printf("Medico 2 excluido com sucesso!");
            break;
        case 3:
            for (int i = 0; i < 20; i++) {
                medico3[i] = '\0';
            }
            printf("Medico 3 excluido com sucesso!");
            break;

        default:
            printf("Ocorreu um erro!");
            break;
    }
}


int main() {

    int menu;
    do {
        printf("Bem vindo ao sistema! O que voce deseja escolher hoje?\n\n1 Entrada de dados.\n2 Lista todos os dados na tela.\n3 Pesquisa um medico pelo nome completo e mostra todo os dados na tela\n4 Pesquisa pela data de consulta e mostra todos na tela.\n5 Altera dados. Pesquisa pelo nome completo do medico.\n6 Exclui dados. Pesquisa pelo nome completo do medico.\n7 Saida\n");

        scanf("%d", &menu);

        while (menu < 1 || menu > 7) {
            printf("Digite novamente um numero entre 1 e 7\n");
            scanf("%d", &menu);
        }

        printf("Voce selecionou o menu %d\n", menu);


        switch (menu) {
            case 1:
                salvar();
                break;
            case 2:
                listar();
                break;
            case 3:
                pesquisarMedico();
                break;
            case 4:
                pesquisarData();
                break;
            case 5:
                alterar();
                break;
            case 6:
                excluir();
                break;
            case 7:
                sair();
                break;
        }
    } while (menu != 7);


    return 0;
}

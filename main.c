#include <stdio.h>

char medico1[20];
char medico2[20];
char medico3[20];
char data_consulta1[11];
char data_consulta2[11];
char data_consulta3[11];



void salvar() {

    printf("Digite o nome do medico a ser salvo");
    //gets(medico1[20]);


}

void listar() {
    printf("funcao listar");
}

void pesquisarMedico() {
    printf("funcao pesquisarMedico");
}

void pesquisarData() {
    printf("funcao pesquisarData");
}

void alterar() {
    printf("funcao alterar");
}

void excluir() {
    printf("funcao excluir");
}

void sair() {
    printf("funcao sair");
}



int main() {

    int menu;

    printf("Bem vindo ao sistema! O que voce deseja escolher hoje?\n\n1 Entrada de dados.\n2 Lista todos os dados na tela.\n3 Pesquisa um medico pelo nome completo e mostra todo os dados na tela\n4 Pesquisa pela data de consulta e mostra todos na tela.\n5 Altera dados. Pesquisa pelo nome completo do medico.\n6 Exclui dados. Pesquisa pelo nome completo do medico.\n7 Saida\n");

    scanf("%d", &menu);

    while(menu < 1 || menu > 7) {
        printf("Digite novamente um numero entre 1 e 7\n");
        scanf("%d", &menu);
    }

    printf("Voce selecionou o menu %d\n", menu);

    switch(menu) {
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



    return 0;
}

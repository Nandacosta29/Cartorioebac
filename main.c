//
//  main.cpp
//  projeto_teste
//
//  Created by Macbook Air on 29/04/25.
//

#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro(void) {
    char arquivo[40], cpf[40], Nome[40], Sobrenome[40], Cargo[40];

    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);
    strcpy(arquivo, cpf);

    FILE *file = fopen(arquivo, "w");
    fprintf(file, "%s,", cpf);
    fclose(file);

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", Nome);
    file = fopen(arquivo, "a");
    fprintf(file, "%s,", Nome);
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", Sobrenome);
    file = fopen(arquivo, "a");
    fprintf(file, "%s,", Sobrenome);
    fclose(file);

    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", Cargo);
    file = fopen(arquivo, "a");
    fprintf(file, "%s", Cargo);
    fclose(file);

    printf("Cadastro concluído!\nPressione Enter para continuar...");
    getchar(); getchar();
    return 0;
}

int consultar(void) {
    setlocale(LC_ALL, "Portuguese");
    char cpf[40], conteudo[200];

    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);

    FILE *file = fopen(cpf, "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo. Usuário não encontrado.\n");
    } else {
        printf("\nEssas são as informações do usuário:\n");
        while (fgets(conteudo, 200, file) != NULL) {
            printf("%s\n", conteudo);
        }
        fclose(file);
    }

    printf("Pressione Enter para continuar...");
    getchar(); getchar();
    return 0;
}

int deletar(void) {
    char cpf[40];
    printf("Digite o CPF que deseja deletar: ");
    scanf("%s", cpf);

    if (remove(cpf) == 0) {
        printf("Usuário removido com sucesso.\n");
    } else {
        printf("Usuário não encontrado ou erro ao remover.\n");
    }

    printf("Pressione Enter para continuar...");
    getchar(); getchar();
    return 0;
}

int main(void)
    {
    int opcao=0; //Definido variáveis
    int laco=1;
    
    for(laco = 1; laco == 1;)
    {
        system("clear");
        setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
        
        printf("#### Cartório da EBAC ###\n\n");
        printf("Escolha a opção desejada do menu: \n\n");
        printf("\t1 - Registrar nomes\n");
        printf("\t2 - Consultar nomes\n");
        printf("\t3 - Deletar nomes\n");
        printf("\t4 - Sair do sistema\n\n");
        printf("Opção:  ");// fim do menu
        
        
        scanf("%d" , &opcao); //armazenando a escolha do cliente
        getchar();// consome o Enter após o número
        
        switch (opcao)
        {
            case 1:
                printf("Você escolheu o registro de nomes!\n");
                break;
                
            case 2:
                printf("Você escolheu consultar os  nomes!\n");
                break;
                
            case 3:
                printf("Você escolheu deletar nomes!\n");
                break;
                
            case 4:
                printf("Obrigado por utilizar o sistema!\n");
                break;
                
        }
         printf("Pressione Enter para continuar...");
         getchar(); // pausa a execução até o Enter
    }
    return 0;
}

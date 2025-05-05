//
//  main.cpp
//  projeto_teste
//
//  Created by Macbook Air on 29/04/25.
//

#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região


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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //Matheus Lourenco e Adriano 
    //Turma A 1º periodo   
       
    char nomePaciente[50];
    char nomeEspecialidade[50];
    char nomeMedico[50];
    char planoSaude;
    int dia, mes, ano;
    int especialidade, consulta, medico;
    float valorConsulta;
    
    //estrutura de decisao marcar consulta
    printf(" Escolha uma opcao:\n");
    printf("  Opcao 1- Marcar uma consulta\n  Opcao 2- Sair do programa\n");
    printf(" Digite a opcao: ");
    scanf("%d", &consulta);
    
    if(consulta == 1){
        printf("\n Prosseguir com a consulta...\n");
    }
    else if (consulta == 2){
        printf(" Saindo do programa...\n");
        system("pause");
        return 0;           //termina o programa
           
    }
    else{
        printf("Opcao invalida!!\n");
        system("pause");  //termina o programa
        return 0;
    }
    
    //estrutura da data da consulta
    printf("\n Escreva seu nome completo: ");
    scanf( " %[^\n]s", &nomePaciente);
    
    printf("\n Digite o dia da consulta: ");
    scanf("%d", &dia);
    
    printf(" Digite o mes da consulta: ");
    scanf("%d", &mes);
    
    printf(" Digite o ano da consulta: ");
    scanf("%d", &ano);
    
    //estrutura if data da consulta
    if(dia >30 || dia <1 || mes >12 || mes <1 || ano <2025){
        printf("  \nData invalida!!\n");
        printf("   \nDigite uma data valida (dd/mm/aaaa)!\n");
        system("pause");
        return 0;
    } 
    
    //estrutura da especialidade do medico
    printf("\n Qual especialidade voce deseja consultar?:\n ");
    printf("  Opcao 1- Oftalmologista\n   Opcao 2- Cardiologista\n ");
    printf("Digite a opcao: ");
    scanf("%d", &especialidade);
    
    //estrutura if para a especialidade do medico
     if(especialidade == 1){
          strcpy(nomeEspecialidade,"Oftalmologista");
          printf("\n Voce escolheu a especialidade Oftalmologista!\n ");
          printf("\n Escolha o medico que deseja ser atendido(a):");
          printf("\n   Opcao 1- Elias\n   Opcao 2- Nicolas\n ");
          printf("Digite a opcao: ");
          scanf("%d", &medico);
              
          if(medico == 1){
              strcpy(nomeMedico,"Elias");
              printf("\n Voce sera atendido(a) por: Elias!\n");
              valorConsulta = 150.00;
           }
          else if(medico == 2){
              strcpy(nomeMedico,"Nicolas");
              printf("\n Voce sera atendido(a) por: Nicolas!\n");
              valorConsulta = 150.00;
           }
          else{
              printf("Opcao invalida!!");
         }
     }
        //estrutura if para especialidade cardiologista
     if(especialidade == 2){
          strcpy(nomeEspecialidade,"Cardiologista");
          printf("\n Voce escolheu a especialidade Cardiologista!\n ");
          printf("\nEscolha o medico(a) que deseja ser atendido(a):");
          printf("\n   Opcao 1- Celia\n   Opcao 2- Diana\n ");
          printf("\nDigite a opcao: ");
          scanf("%d", &medico);
        
          if(medico == 1){
              strcpy(nomeMedico,"Celia");
              printf("\n Voce sera atendido(a) por: Celia!\n");
              valorConsulta = 200.00;
          }
          else if(medico == 2){
              strcpy(nomeMedico,"Diana");
              printf(" Voce sera atendido(a) por: Diana!");
              valorConsulta = 200.00;
          }
          else{
              printf("Opcao invalida!!");
          }
     }
     //estrutura de decisao if do plano de saude
     printf("\n Deseja utilizar o plano de saude?\n");
     printf(" Digite (S/N): ");
     scanf(" %c", &planoSaude);
     
     if ((especialidade == 1 && medico == 2) || (especialidade == 2 && medico == 1)) {
        printf("\n Esse medico nao aceita plano de saude!\n");
    } else if (planoSaude == 'S' || planoSaude == 's') {
        printf("\n Plano de saude aceito!\n");
        valorConsulta = 0;
    } else {
        printf("\n Voce escolheu nao utilizar plano de saude!\n");
    }
    
    printf("\n Sua consulta foi agendada!\n\n");
    
    printf(" Nome do paciente: %s\n", nomePaciente);
    printf(" Especialidade: %s\n", nomeEspecialidade);
    printf(" Medico(a): %s\n", nomeMedico);
    printf(" Data da consulta: %d/%d/%d   \n", dia,mes,ano);
    printf(" Valor da consulta: R$%.2f\n", valorConsulta);
     
    system("pause");
    return 0;
}    

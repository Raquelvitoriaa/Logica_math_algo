#include <stdio.h>
#include <stdlib.h>

void Exercicio01() {

  printf("Exercicio 1: (deois ecrever  aquestao)!!");
}


int main() {
  
 int opcao;
 do {
   
  printf("================================================\n");
  printf("\n MENU DOS EXERCICIOS\n ");
  printf("================================================\n");
  printf("[1] - Exercicio01  \n");
  printf("[2] - Exercicio02  \n");
  printf("[3] - Exercicio03  \n");
  printf("[4] - Exercicio04  \n");
  printf("[5] - Exercicio05  \n");
  printf("[6] - Exercicio06  \n");
  printf("[7] - Exercicio07  \n");
  printf("[8] - Exercicio08  \n");
  printf("[9] - Exercicio09  \n");
  printf("[10] - Exercicio10  \n");
  printf("[11] - Exercicio11  \n");
  printf("[12] - Exercicio12  \n");
  printf("[13] - Exercicio13  \n");
  printf("[0] - Sair\n");

  printf("Digite uma opcao: [01-14]:");
   scanf("%d", opcao);

   switch(opcao) {

     case 1: 
       Exercicio01();
     break;
     case 2: 
       Exercicio02();
     break;
     case 3: 
       Exercicio03();
     break;
     case 4: 
       Exercicio04();
     break;
     case 5: 
       Exercicio05();
     break;
     case 6: 
       Exercicio06();
     break;
     case 7: 
       Exercicio07();
     break;
     case 8: 
       Exercicio08();
     break;
     case 9: 
       Exercicio09();
     break;
     case 10: 
       Exercicio10();
     break;
     case 11: 
       Exercicio11();
     break;
     case 12: 
       Exercicio12();
     break;
     case 13: 
       Exercicio13();
     break;

     printf("Saindo do sistema...");
     printf("Opcao invalida! Tente novamente.");
   }

   if(opcao != 0) {
     printf("\n Pressione qualquer tecla para voltar ao menu..");
     getchar();
     getchar();
   }
   
}while(opcao != 0);

  system("pause");
  return 0;
}

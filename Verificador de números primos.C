#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //definindo variaveis
    int i=0;
    // usuario colocando valor da variavel
    printf("Digite o numero que deseja");
    scanf("%d", &i);

    //verificando se e um numero primo
      if(i==5|| i==3){
        printf("%d numero primo \n",i);

        }else if(i%1==0 && i%i==0 && i%3!=0 && i%5!=0){
            printf("%d numero  primo \n",i);

        }else{
        printf("%d numero nao primo",i);
        }

    }



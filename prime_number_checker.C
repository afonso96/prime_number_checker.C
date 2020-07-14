#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //defining variables
    int i=0;
    // user putting variable value
    printf("Digite o numero que deseja");
    scanf("%d", &i);

    //checking if it's a prime number
      if(i==5|| i==3){
        printf("%d numero primo \n",i);

        }else if(i%1==0 && i%i==0 && i%3!=0 && i%5!=0){
            printf("%d numero  primo \n",i);

        }else{
        printf("%d numero nao primo",i);
        }

    }



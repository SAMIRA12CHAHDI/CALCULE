#include <stdio.h>
#include <stdlib.h>

int main()
{
   float N1    ,  N2;
   char operateur;
printf("cliquer sur q si vous voulez quitez calculatrice");
do {
   
   printf("saisir le premier nombre");
    scanf("%f",&N1);

   printf("saisir la deuxieme nombre");
  scanf("%f",&N2);

   printf("Enter votre  operateur (+, -, *, /): ");
   scanf("%s",&operateur);

  switch(operateur) {
    case '+':
            printf("operation  d addition est %f ",N1+ N2 );
            break;
    case '-':
            printf("operation du substraction %f ",N1-N2 );
            break;

    case '*':
            printf("operation du multiple %f",N1* N2);
            break;

    case '/':
          if (N2 !=0)  {
                printf("la divistion est  %f" , N1 / N2); 
  }
            else  {
                    printf("operation impossible");}

            break;
    default :
        printf("votre operation erronee");




}


} while( operateur='q' );




    return 0;
}

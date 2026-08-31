/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hora, wattz;
    float kwh;
    
    printf("Digite a quantidade wattz -");
    scanf("%d",&wattz);
    printf("horas por uso -");
    scanf("%d",&hora);
    kwh = (wattz*hora *30) /1000  ;
    printf("consumo mensal de  %2.f",kwh);
    
    return 0;
}

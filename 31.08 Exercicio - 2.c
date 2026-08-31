#include <stdio.h>

int main()
{
    int hora, minuto, conversao;
    
    printf("Digite a hora");
    scanf("%d",&hora);
    printf("Digite os minutos");
    scanf("%d",&minuto);
    conversão = hora * 60 + minuto;
    printf("Total de minutos %d",conversão);
    
    return 0;
}

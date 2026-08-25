

#include <stdio.h>

int main()
{   int quantidade;
    float preço,total;
    preço = 10;
    printf("Quantos cafes voce deseja ?");
    scanf("%d",&quantidade);
    total = preço * quantidade;
    printf("%2.f",total);
    return 0;
}

#include <stdio.h>
int main()
{
    int n1;
    printf("digite um valor: ");
    scanf("%d", &n1);

    switch (n1)
    {
    case 1:
        printf("bom dia");
        break;
    case 2:
        printf("boa tarde");
        break;
    case 3:
        printf("boa noite");
        break;
    default:
        printf("digite um valor entre 1 e 3");
        break;
    }
}
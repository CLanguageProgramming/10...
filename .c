#include <stdio.h>

int main()
{
    printf("Enter the number of digits >>");
    int zero;
    scanf("%d", &zero);
    printf("1");
    for(int i=1;i<=zero-1;i++)
    {
        printf("0");
    }
}

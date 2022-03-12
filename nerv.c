#include<stdio.h>
int main()
{
    int i=10;
    static j=30;
    j++;
    i++;
    printf("info for the data");
    printf("%d%d",i,j);
    return 0;
}

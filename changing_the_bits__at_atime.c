/* changing the bits of set ,clear ,toggle at a time .   */


#include<stdio.h>
int main()
{
    int pos,endpos,num1,num2,num3;
    printf("enter the numbers \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("enter the position and endposition \n");
    scanf("%d%d",&pos,&endpos);
    for(pos;pos<endpos;pos++)
    {
       num1|=(1<<pos-1);
       num2&=~(1<<pos-1);
       num3^=(1<<pos-1);
    }
    printf("num1 set bits :%x\n",num1);
    printf("num2 clear bits :%x\n",num2);
    printf("num3 toggle bits %x\n",num3);

}




#include<stdio.h>
int main(void)
{
        int i=0,j=0,k=0;
        printf("enter the number of rows u want?:    ");
        scanf("%d",&k);
        for(i=1;i<=k;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("01");
            }
            printf("\n");
        }
        return 0;
}

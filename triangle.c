#include <stdio.h>
int main()
{
    while(1)
    {
        int n,i,j;
        printf("size : ");
        scanf("%d",&n);

        for(i = 1; i<=n; i++)
        {
            for(j = 1; j<=i; j++)
            {
                if(i > n/2) printf(" *");
                else printf(" $");
            }
            printf("\n");
        }
    }
    return 0;
}

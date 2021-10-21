#include<stdio.h>
int main()
{
    int a[3],b[3],i,temp,j;
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0; i<3; i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<3; i++)
    {
        for(j = i+1; j < 3; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }

    }
     for(i=0; i<3; i++)
     {
         printf("%d\n",b[i]);
     }

    return 0;
}

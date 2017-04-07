#include<stdio.h>
main()
{
    int a,i;
    scanf("%d",&a);
    printf("%d=",a);
    i=2;
    while(a!=i)
    {
        if( a%i==0)
        {
            a=a/i;
            printf("%d",i); printf("x");
        }
        else{i=i+1;
 }
    printf("%d",i);
    return 0;
    }





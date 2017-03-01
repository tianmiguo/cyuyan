#include<stdio.h>
//#include<windows.h>
int main()
{
void shuchu(int a ,int b);
int c,d;
scanf("%d",&c);
d=2*c-1;
 shuchu(c,d);
//system("pause");
return 0;
}
void shuchu(int a ,int b)
{
	int i,j,c;
	for(i=1;i<=a;i++)
	{
		   for(j=1;j<=b;j++)
        {
	            if(j<=a-i)
	            {
		       printf(" ");
	        	c=j;
	            }
		       else if(j<c+2*i)
           	{
			 printf("*");
    }
}
		printf("\n");

		}
	}

#include<stdio.h>
int main()
{
    printf("请输入骰子点数:");
    int a,b,sum,state,he;
   state =1;
    scanf( "%d,%d",&a,&b);
 // printf("%d\n",state);
    sum=a+b;

    if (sum==7 || sum==11)
    {
    }
    else if (sum==2 || sum==3 || sum==12)
   {
   state=0;
   }  //printf("%d\n",state);}
    else if (sum>0)   
    {
        while(  he!=sum )
         {
             scanf( "%d,%d",&a,&b);
             he=a+b;
                if(he==7)
                {
                state=0; // printf("%d\n",state);
                }
       
         }
    }
      if( state==1)
      printf("victory");
       else
       printf("fail");
return 0;
}

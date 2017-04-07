#include<stdio.h>
 main()
{
	int a,i,s;
	i=0;
	s=0;
	int n  [ 5];
	canf( "%d",&a);
	if( a<0)
	{
		printf("fu ");
	}
	while( a!=0)
	{
		n[i]=a%10;
		a=a/10;
		i++;
	}
	for(i ;i>=1;i--)
 	switch(n[i])	
	{
		case 0:printf( "ling ");break;
		case 1:printf( "yi ");break;
		case 2:printf( "er ");break;
		case 3:printf( "san ");break;
		case 4:printf( "si ");break;
		case 5:printf( "wu ");break;
		case 6:printf( "liu ");break;
		case 7:printf( "qi ");break;
		case 8:printf( "ba ");break;
		case 9:printf( "jiu ");break;
	}
	return 6;
}

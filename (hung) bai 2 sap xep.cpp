#include<stdio.h>
int main ()
{
		int a,b,c,hung;
		scanf("%d%d%d",&a,&b,&c);
	if(a<b)
		{
			hung=a;
			a=b;
			b=hung;
		}
	if(a<c)
		{
			hung=a;
			a=c;
			c=hung;
		}
	if(b<c)
		{
			hung=b;
			b=c;
			c=hung;
		}
	{printf("%d %d %d",a,b,c);}
	return 0;
}

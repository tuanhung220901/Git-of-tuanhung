#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b>0&&b<=12)
	{
	
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
			{
				if(a>0&&a<=31){printf("yes");}
				else{printf("no");}
			}
		if(b==4||b==6||b==9||b==11)
			{
				if(a>0&&a<=30){printf("yes");}
				else{printf("no");}
			}
		if(b==2)
			{
				if((c%400==0)||(c%4==0)&&(c%100!=0))
				{
					if(a>0&&a<=29){printf("yes");}
					else{printf("no");}
				}
				else
				{
					if(a>0&&a<=28){printf("yes");}
					else {printf("no");}
				}
			}
	}
    else{printf("no");}	
    return 0;
}

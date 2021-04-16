include<stdio.h>
int lcm(int,int);
main()
{
	int a,b,result;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	result=lcm(a,b);
	printf("the LCM number %d and %d is %d\n",a,b,result);
	getch();
}
int lcm(int a, int b)
{
	static int common=1;
	if(common %a==0 && common %b==0)
	{
		return 0;
	}
	common++;
	lcm(a,b);
	return common;
}

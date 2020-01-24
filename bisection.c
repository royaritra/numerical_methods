#include<stdio.h>
#include<math.h>
double fun(float x)
{
	double y;
	y=x*tan(x)-1.28;
	//y=pow(x,3)-2*x-5;
	//y=pow(x,3)-0.185*pow(x,2)+3.993*pow(10,-4)*x;
	return y;
}
double rounds(double n)
{
	n=round(n*pow(10,4));
	return n/pow(10,-4);
}
double mods(double n)
{
	if(n>0)
		return n;
	else
		return n*-1;
}
int main()
{
	double a=0.0;
	double b=1.0;
	double w,c,n;
	double e=pow(10,-4);
	if(fun(a)>0 && fun(b)<0)
	{
		w=a;
		a=b;
		b=w;
	}
	c=(a+b)/2;
	n=fun(c);
	n=mods(fun(c));
	while(rounds(n)>e)
	{
		c=(a+b)/2;
		if(fun(c)<0)
			a=c;
		else
			b=c;
		printf("%lf\t %lf\t %lf\t %lf\n",a,b,c,fun(c));
		n=mods(fun(c));
	}
	
	printf("\n%lf\n",c);
}
	

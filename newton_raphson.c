#include<stdio.h>
#include<math.h>
double func(double x) //declare the function
{
    double f;
    //f=pow(x,2)-15*x+5;
    f=pow(x,3)-10;
    return f;
}
double dfunc(double x) //declare the derivative of function
{
    double f;
    f=3*pow(x,2);
    return f;
}
double mods(double x)
{
    if(x<0)
        return x*(-1);
    else
        return x;
    
}
int main()
{
    double a,f,fd,mf,g,er;
    printf("Enter the initial guess: "); //take the initial guess
    scanf("%lf",&g);
    printf("Enter the value of error,(upto which decimal): ");
    scanf("%lf",&er);
    er=pow(10,-1*er); //error margin
    a=func(g);          //func value with initial guess
    fd=dfunc(g);        //derivative with initial guess
    f=a-(f/fd);         //using the formula for nr
    mf=mods(f);         //getting the mod value
    while((mf>er))
    {
        a=f;
        f=a-(func(f)/dfunc(f));
        mf=mods(f-a);
        printf("%lf\t%lf\t%lf\n",a,f,func(a));
    }
    printf("Approximate value of root upto the error margin is: %lf\n",f);
}
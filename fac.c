# include <stdio.h>
int main()
 {

int i, x, fac ;
x=0;
fac=1;

printf("Enter the number ");
scanf ("%d", &x);
for (i=1; i<=x; i++)
{
   
fac=fac*i;
}
printf("Factorial of integer %d is %d",  x , fac);


return 0;
}
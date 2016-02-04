#include <cstdio>;
int main() 
{
     int A,a,b,c;
     scanf("%d",&A);
	 a=A/100;
	 b=A/10%10;
	 c=A%10;
	 printf("%d%d%d",c,b,a);
     return 0;
}

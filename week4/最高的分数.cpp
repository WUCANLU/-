#include <cstdio>;
int main() 
{
     int n,b,max=0;
     scanf("%d\n",&n);
     for(int i=1;i<=n;++i){
        scanf("%d\ ",&b);
        if(b>max)
         max=b;
      }
	 printf("%d",max);
     return 0;
}

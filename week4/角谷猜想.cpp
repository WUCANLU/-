#include <cstdio>;
int main() 
{
    int x;
    scanf("%d",&x);
	for(;x>1;){
	if(x==1) break;
    if(x%2==1){
      printf("%d*3+1=%d\n",x,x*3+1);
	  x=x*3+1;
	}
	else {
      printf("%d/2=%d\n",x,x/2);
	  x=x/2;
    }
    }
	printf("End");
     return 0;
}


#include <cstdio>
int main() 
{
    int times, D, S, normal_times = 0, max_times = 0;//S==systolic pressure,D==diastolic pressure;
    scanf("%d", &times);
     
     
    for (int i = 1;i <= times;++i)
	  {
		scanf("%d %d", &S, &D);
    if(S >= 90 && S <= 140 && D >= 60 && D <= 90)
		{
        normal_times += 1;
	  }
	  else 
	  {
	    	normal_times = 0;
		}
		if(normal_times > max_times)
   	{
    		max_times = normal_times;
		}
    }
    
    
    printf("%d", max_times);
    return 0;
}
    return 0;
}

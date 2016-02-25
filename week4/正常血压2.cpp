#include <cstdio>


int main() 
{
	int times;               
	scanf ("%d", &times);
	/*
		Input the number of measurements;
	*/
	
	
	int sp, dp;//dp = diastolic pressure, sp = systolic pressure;
	int normal_times = 0, max_times = 0;
	for (int i=0; i < times; ++i)
	{
		scanf ("%d %d", &sp, &dp);
		if (90 <= sp && sp <= 140 && 60 <= dp && dp <= 90)
		{
			normal_times ++;
		}
		else
		{
			normal_times = 0;
		}
		if (normal_times > max_times)
		{
			max_times = normal_times;
		}	
	}
	/*
		The input of each measurement of
		systolic and diastolic blood pressure 
	  and calculate the longest continuous
		blood pressure normal hours;
	*/
	
	
	printf ("%d", max_times);
	/* output the longest continuous
	   blood pressure normal hours;
	*/
	
	
    return 0;
}

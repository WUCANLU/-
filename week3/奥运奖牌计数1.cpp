#include <cstdio>
int main () 
{ 
	int days, gold_num, silver_num , bronze_num , sum;
	scanf ("%d", &days);
	gold_num = 0;
	silver_num = 0;
	bronze_num = 0;
	sum = 0;
	for (int i = 0; i < days; ++i) 
	{ 
	    int egn, esn, ebn;	//everyday_gold_num, everyone_silver_num, eyeryone_bronze_num;
		scanf("%d %d %d", &egn, &esn, &ebn);
		gold_num += egn;
		silver_num += esn;
		bronze_num += ebn; 
	}
	sum = gold_num + silver_num + bronze_num;
	printf ("%d %d %d %d", gold_num, silver_num, bronze_num, sum);
	return 0;
}

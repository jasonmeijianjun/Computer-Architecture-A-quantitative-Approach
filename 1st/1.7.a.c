#include <stdio.h>
#include <math.h>
int main(void)
{
	double acc_ratio;
	double acc_rate;
	double acc;
	acc_ratio = 0.8;
	acc_rate = 2;
	acc = (1 - acc_ratio) + acc_ratio/acc_rate;
	printf("total acc = %f \n",acc);

}

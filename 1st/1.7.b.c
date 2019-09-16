#include <stdio.h>
#include <math.h>
int main(void)
{
	double acc_ratio;
	double acc_rate;
	double acc;
	double power_ratio;
	acc_ratio = 0.8;
	acc_rate = 2;
	acc = (1 - acc_ratio) + acc_ratio/acc_rate;
	/*
	 *power_new/power_old = power((V * 0.6),2.0) * (freq * 0.6) /(power(V,2.0)* freq); 
	 *
	  */
	power_ratio = pow(0.6,3.0);
	printf("total acc = %f \n",acc);
	printf("dynamic power ratio = %f \n",power_ratio);
}

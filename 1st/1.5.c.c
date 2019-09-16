#include <stdio.h>
#include <math.h>
#define N 4.0
int main(void)
{
	double p_cpu;
	double p_dram;
	double p_disk;
	double p_total;
	double power_rate;
	int    supply_power;
	int    num;
	p_cpu  = 66;
	p_dram = 2.3;
	p_disk = 7.9;
	power_rate = 0.8;
	supply_power = 200 * 11;
	p_total = (p_cpu + p_dram +  p_disk);
	num = supply_power/p_total;
	printf("total power supply = %f\n",p_total);
	printf("total number = %d\n",num);

}

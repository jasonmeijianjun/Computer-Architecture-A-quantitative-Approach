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
	p_cpu  = 66;
	p_dram = 2.3;
	p_disk = 7.9;
	power_rate = 0.8;
	/*Below formula seem confick with textbook ??
	*According to textbook,should be: good_rate =pow(( 1 + chip_flaw_rate * chip_area ),-N);
	*/
	p_total = (p_cpu + p_dram * 2  + p_disk)/power_rate;

	printf("total power supply = %f\n",p_total);
}

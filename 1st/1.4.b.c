#include <stdio.h>
#include <math.h>
int main(void)
{
	double p_disk[2];
	double p_total;
	double power_rate;
	p_disk[0] = 4.0;
	p_disk[1] = 7.9;
	/*Below formula seem confick with textbook ??
	*According to textbook,should be: good_rate =pow(( 1 + chip_flaw_rate * chip_area ),-N);
	*/
	p_total = ( p_disk[0] * 0.6  + p_disk[1] * 0.4 );

	printf("total power supply = %f\n",p_total);
}

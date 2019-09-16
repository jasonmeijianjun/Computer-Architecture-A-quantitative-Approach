#include <stdio.h>
#include <math.h>
#define N 4.0
int main(void)
{
	double chip_area;
	double good_rate;
	double chip_flaw_rate;
	chip_area = 3.89;
	chip_flaw_rate = 0.3;
	good_rate =pow(( 1 + chip_flaw_rate * chip_area ),-N);

	printf("Chip good_rate = %f\n",good_rate);
}

#include <stdio.h>
#include <math.h>
#define PIE 3.1415
int main(void)
{
	double wafer_area;
	double wafer_dimension;
	double num[2];
	double chip_area[2];
	double good_rate[2];
	double chip_flaw_rate;
	int per_margin[2];
	int margin[2];
	int i;
	chip_area[0]= 1.5;
	chip_area[1]= 2.5;
	per_margin[0] = 20;
	per_margin[1] = 25;
	chip_flaw_rate = 0.3;
	wafer_dimension = 30;
/*1. calculate chip number*/
	for ( i = 0; i < 2; i++ ) {	
		num[i] = PIE * wafer_dimension * ( wafer_dimension/chip_area[i] - 1/(sqrt(2 * chip_area[i])));	
		printf("Chip num[%d] = %f\n",i,num[i]);
/*2. calculate good chip rate*/	
		good_rate[i] =pow(( 1 - chip_flaw_rate ),chip_area[i]);
		printf("Chip good_rate[%d] = %f\n",i, good_rate[i]);

/*3. calculate the margin of the chip*/
		margin[i] = (int) num[i] * per_margin[i];
		printf("Chip margin[%d] = %d\n",i, margin[i]);
	}
}

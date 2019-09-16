#include <stdio.h>
#include <math.h>
int main(void)
{
	double p_disk[2][2];
	double work_rate[2];
	/*5400 rpm voltage*/
	p_disk[0][0] = 7.0;
	p_disk[0][1] = 2.9;

	/*7200 rpm voltage*/
	p_disk[1][0] = 7.9;
	p_disk[1][1] = 4.0;
	/*work_rate[0] is for 5400 rpm, [1] for 7200*/
	work_rate[1] = work_rate[0] * 0.75;
	/*
        p_disk[0][0] * work_rate[0] + p_disk[0][1] *(1 - work_rate[0]) =  
        p_disk[1][0] * work_rate[1] + p_disk[1][1] *(1 - work_rate[1]) 

	( p_disk[0][0] - p_disk[0][1] - 0.75 * p_disk[1][0] + 0.75 * p_disk[1][1] ) 
	 * work_rate[0] = p_disk[1][1] - p_disk[0][1]
	*/
	work_rate[0] = (p_disk[1][1] - p_disk[0][1]) /( p_disk[0][0] - p_disk[0][1] - 0.75 * p_disk[1][0] + 0.75 * p_disk[1][1] );
	work_rate[1] = 0.75 * work_rate[0];
	printf("Disk 5400 idle rate is %f\n",1 - work_rate[0]);
	printf("Disk 7200 idle rate is %f\n",1 - work_rate[1]);
}

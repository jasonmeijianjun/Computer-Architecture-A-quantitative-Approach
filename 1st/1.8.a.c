#include <stdio.h>
#include <math.h>
int main(void)
{
	/*mol rulesi:integrates circuit resources double every 18 ~ 24 month
	 *so every year 4/3
	 */
	double ratio;
	double years;
	double scale;
	ratio = 1.35;
	years = 10;
	scale = pow(ratio,years);
	printf("scale  = %f\n",scale);

}

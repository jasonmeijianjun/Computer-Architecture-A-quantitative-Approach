#include <stdio.h>
#define B  8
int main(void)
{
int i,j,m;
for (i = 0; i < 256; i += B ) {
	for(j = 0; j < 256; j+=B) {
		for(m = 0; m < B; m++){
			output[j + n][i + m] = input[i+m][j + n];  
		}

	}
}
}

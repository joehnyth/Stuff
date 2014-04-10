#include<stdio.h>

int main(void){
	long n, j, i, k;
	int cycleCount = 1, cycleMax = 0;

	while(scanf("%ld %ld", &n, &j) != EOF){



		for(i = n; i <= j; i++){
		


			k  = i;
			
			while( k != 1 ){


				if( k % 2 ){


					k = 3 * k + 1;
				}

				else{

					k = k / 2;
				
				}

				cycleCount++;
				if( cycleCount > cycleMax ){
					cycleMax = cycleCount;
				}
			}

			cycleCount = 1;
		}

		printf( "%ld %ld %d", n, j, cycleMax );

	}

return 0;

}

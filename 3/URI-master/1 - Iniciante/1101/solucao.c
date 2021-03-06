#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define MIN(a, b)	((a) < (b) ?  (a) : (b))
#define MAX(a, b)	((a) > (b) ?  (a) : (b))
#define ABS(a)		((a) <  0  ? -(a) : (a))
#define IMPAR(a)	((a)&1)
#define CTOI(a)		((a) - '0')
#define ITOC(a)		((a) + '0')

#define TRUE	1
#define FALSE	0

int main()
{
	int A, B, I, F, S, k;
	
	#ifdef DEBUG
		double tI_ = clock();
	#endif
	
	while(scanf("%d %d", &A, &B) != EOF)
	{
		
		if(A == 0 || B == 0)
			break;
		
		if(A <= B)
		{
			I = A;
			F = B;
		}
		else
		{
			I = B;
			F = A;
		}
		
		S = 0;
		
		for(k = I; k <= F; k++)
		{
			printf("%d ", k);
			S += k;
		}
		
		printf("Sum=%d\n", S);
	}
	
	#ifdef DEBUG
		printf("Tempo: %.1lf %.1lf\n", clock() - tI_, (clock() - tI_) / CLK_TCK);
	#endif
	
	return 0;
}
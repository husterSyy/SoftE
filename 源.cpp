/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double mux, muy, muz;
	int i, j, k;
	double r = 2.000000; 
	while(r>0)
	{
		int m = (int)(1 / r) ^ (1 / 3);  //m¸öÇò
		int a = (int)(1/r);
		printf("%d\n", a);
		for (i = 0; i < a; i++)  //z
			for (j = 0; j < a; j++)  //y
				for (k = 0; k < a; k++)  //x
				{
			mux =(double) (2*k + 1)*r;
			muy =(double) (2 * j + 1)*r;
			muz = (double)(2 * i + 1)*r;
			if ((mux <= 2.000000) && (muy <= 2.000000) && (muz <= 2.000000))
				;
		//	printf("(%.6d,%.6d,%.6d", £¨mux, muy, muz£©);
			else continue;
				}
		r = 0.5*r;
	}
	system("pause");
	return 0;
}
*/
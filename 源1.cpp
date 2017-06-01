//project1
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	
	double mux, muy, muz;
	int i, j, k;
	int m;
	printf("请输入m:\n");
	scanf_s("%d", &m);
	int count = 0;
	int d = pow(m, 1.0 / 3);  //m个球
	double r = 1.000000 / d;
	int a = d;
	printf("最大半径为%.6f\n", r);
	for (i = 0; i < a; i++)  //z
		for (j = 0; j < a; j++)  //y
		{
		for (k = 0; k < a; k++)  //x
		{

			mux = (double)((2 * k + 1)*r - 1.000000);
			muy = (double)((2 * j + 1)*r - 1.000000);
			muz = (double)((2 * i + 1)*r - 1.000000);
			count++;
			printf("第%d个球坐标(%.6f,%.6f,%.6f)\n", count, mux, muy, muz);



		}
		
}
system("pause");
return 0;
}
*/
//project2
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
double dx, dy, dz;
printf("最大半径为%.6f\n", r);
printf("输入障碍物坐标:");
scanf_s("%7f %7f %7f", &dx, &dy, &dz);
//printf("障碍物坐标:%7f %7f %7f",dx,dy,dz);
for (i = 0; i < a; i++)  //z
for (j = 0; j < a; j++)  //y
{
  for (k = 0; k < a; k++)  //x
{
mux = (double)((2 * k + 1)*r - 1.000000);
muy = (double)((2 * j + 1)*r - 1.000000);
muz = (double)((2 * i + 1)*r - 1.000000);
 count++;
//if ((mux == dx) && (muy == dy) && (muz == dz))  
 if ((mux == 0.500000) && (muy == 0.500000) && (muz == 0.500000))
 {
	 printf("第%d个球球心坐标(%.6f,%.6f,%.6f)空间被占据\n", count,mux, muy, muz);
	 continue;
 }
else
   
    printf("第%d个球心坐标(%.6f,%.6f,%.6f)\n", count, mux, muy, muz);

}

}

system("pause");
return 0;
}
*/
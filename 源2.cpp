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
printf("������m:\n");
scanf_s("%d", &m);
int count = 0;
int d = pow(m, 1.0 / 3);  //m����
double r = 1.000000 / d;
int a = d;
double dx, dy, dz;
printf("���뾶Ϊ%.6f\n", r);
printf("�����ϰ�������:");
scanf_s("%7f %7f %7f", &dx, &dy, &dz);
//printf("�ϰ�������:%7f %7f %7f",dx,dy,dz);
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
	 printf("��%d������������(%.6f,%.6f,%.6f)�ռ䱻ռ��\n", count,mux, muy, muz);
	 continue;
 }
else
   
    printf("��%d����������(%.6f,%.6f,%.6f)\n", count, mux, muy, muz);

}

}

system("pause");
return 0;
}
*/
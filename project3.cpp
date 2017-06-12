/*
In a box(3D) bounded by [-1, 1], given m balloons(they cannot overlap)with variable radio r and position mu. And some tiny blocks are in the box at given position {d};balloons cannot overlap with these blocks. find the optimal value of r and mu which maximizessum r^2

在由[-1, 1]界定的框（3D）中，给定m个气球（它们不能重叠）
具有可变无线电r和位置mu。 一些小块在给定位置的盒子里;
气球不能与这些块重叠。 找到最大化的r和mu的最优值
和r ^ 2
*/

/*
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef  struct ball
{
	double x;
	double y;
	double z;
	double r;

}Ball;

typedef struct ballList
{
	struct ballList *next;
	Ball ball;
}BallList;

void insert(Ball ball);
double distance(Ball b1, Ball b2);
double abs(double num);
int judge(Ball b);
void putBall();


BallList *head = NULL;
double step = 0.01;
int num = 0;
double sumr = 0;

int main()
{
	
	

		int n, pointNum, i;
		printf("请输入空间内要放置的气球数量:");
		scanf_s("%d", &n);
	
		printf("\n球编号\t x坐标\t y坐标\t z坐标\t 半径\t r^2之和\n");
		for (i = 0; i < n; i++)
		{
			putBall();
		}
		printf("\nr^2之和为:\t %lf\n", sumr);

	


	system("pause");
	return 0;

}


void insert(Ball ball)
{
	ballList *newBall = (ballList *)malloc(sizeof(ballList));
	newBall->ball = ball;
	newBall->next = head;
	head = newBall;

}
void putBall()
{
	Ball ball = { -1 + step, -1 + step, -1 + step, 0 };
	Ball maxBall = ball;
	int i, j, k;
	for (i = 0; ball.x < 1; ++i)
	{
		ball.x += step;
		ball.y = -1 + step;
		ball.z = -1 + step;
		for (j = 0; ball.y < 1; ++j)
		{
			ball.y += step;
			ball.z = -1 + step;
			for (k = 0; ball.z < 1; ++k)
			{
				ball.z += step;
				ball.r = 0;
				double rstep = 0.1;

				while (rstep > 0.00001)
				{
					if (ball.r>maxBall.r)
					{
						maxBall = ball;
					}
					ball.r += rstep;

					if (!judge(ball))
					{
						ball.r -= rstep;
						rstep /= 10;
					}

				}
			}


		}
	}
	if (judge(maxBall))
	{
		insert(maxBall);
		num++;
		sumr += maxBall.r*maxBall.r;
		printf("%ld\t %.3lf\t %.3lf\t %.3lf\t %.3lf\t %lf \n", num, maxBall.x, maxBall.y, maxBall.z, maxBall.r, sumr);

	}
}

int judge(Ball b)
{
	if ((abs(b.x) + b.r) > 1 || (abs(b.y) + b.r) > 1||(abs(b.z)+b.r)>1)
	{
		return false;
	}
	ballList *tmp = head;
	while (tmp)
	{
		Ball ball = tmp->ball;
		if (distance(b, ball) < b.r + ball.r)
		{
			return false;
		}
		tmp = tmp->next;
	}
	return true;
}

double ab(double num)
{
	if (num > 0)
		return num;
	return 0 - num;

}

double distance(Ball b1, Ball b2)
{
	double x1 = b1.x;
	double y1 = b1.y;
	double z1 = b1.z;
	double x2 = b2.x;
	double y2 = b2.y;
	double z2 = b2.z;

	return pow((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)+(z1-z2)*(z1-z2), 0.5);
}

*/
#include<stdio.h>
#include<math.h>
#define f(y,x) (-y)
int main()
{
	int a,i;
	double y1,h,x,t;
	printf("初值a：");scanf("%d", &a); 

	
	y1=a;
	h=0.001;
	
	printf("x\t\ty(欧拉)\n");
	printf("%lf\t%lf\n",x,y1);
	//欧拉法计算 
	do{
		t=y1;
		y1=y1+h*f(y1,x);
		x=x+h;
		printf("%lf\t%lf\n",x,y1);
		}while(fabs(t-y1)>= 0.001*h);
	
	printf("收敛值为%lf",y1);
	
	return 0;
 } 

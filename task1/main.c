#include<stdio.h>
#include<math.h>
#define f(y,x) (-y)
int main()
{
	int a,i;
	double y1,h,x,t;
	printf("��ֵa��");scanf("%d", &a); 

	
	y1=a;
	h=0.001;
	
	printf("x\t\ty(ŷ��)\n");
	printf("%lf\t%lf\n",x,y1);
	//ŷ�������� 
	do{
		t=y1;
		y1=y1+h*f(y1,x);
		x=x+h;
		printf("%lf\t%lf\n",x,y1);
		}while(fabs(t-y1)>= 0.001*h);
	
	printf("����ֵΪ%lf",y1);
	
	return 0;
 } 

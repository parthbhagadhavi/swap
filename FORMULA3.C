#include<stdio.h>
#include<conio.h>
main()
{
int w;
int x;
int ans;

clrscr();
printf("enter the value of x\n");
scanf("%d",&w);
printf("value of x\n%d\n",w);

printf("enter the value of y\n");
scanf("%d",&x);
printf("value of y\n%d\n",x);


ans=(w*w*w)+(x*x*x)+(2*w*x)+(2*x*w);
printf("answer is \n %d \n",ans);





getch();
}
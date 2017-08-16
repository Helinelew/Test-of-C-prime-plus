/*#include<stdio.h>
#define max 100
int main(void)
{
	int count =max+1;
	while (--count >0)
	{
		printf ("%d bottles of spring water on the wall,""%d bottles of spring water! \n",count,count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n",count-1);

	}
	getchar();
	getchar();
		return 0;
}*/
/*#include<stdio.h>
	int main(void)
{
	int count,sum;
	count=0;
	sum=0;
	while (count++<20)
	{
		sum=sum+count;
		printf("sum=%d\n",sum);
			
	}
	getchar();
		getchar();
		return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;
	float mice;
	fl=i=ch='C';
	printf("ch=%c,i=%d,fl=%2.2f\n",ch,i,fl);
	ch=ch+1;
	i=fl+2*ch;
	fl=2.0*ch+i;
	printf("ch=%c,i=%d,fl=%2.2f\n",ch,i,fl);
	ch=1107;
	printf("Now ch =%c\n",ch);
	ch=80.89;
	printf("Now ch =%c\n",ch);
	getchar();
	mice=1.6+1.7;
	mice=(int)1.6+(int)1.7;
	printf("%f\n",mice);
	getchar();
	return ;
	getchar();
}*/
/*#include<stdio.h>
void pround (int n);
int main(void)
{
	int times=5;
	char ch='!';
	float f=6.0f;

	pround(times);
	pround(ch);
	pround(f);
	return 0;
}
void pround(int n)
{
	while(n-->0)
		printf("Taiwan\n");
	printf("\n");
}*/
/* #include<stdio.h>
const int s_per_m=60;
const int s_per_h=3600;
const double m_per_k=0.62137;
int main(void)
{
	double distk,distm;
	double rate;
	int min,sec;
	int time;
	double mtime;
	int mmin,msec;
	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("Speed in miles per hour.\n");
	printf("Please enter, in kilometers,the distance run\n");
	scanf("%lf",&distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d",&min);
	printf("Now enter the seconds.\n");
	scanf("%d",&sec);
	time=s_per_m*min+sec;
	distm=m_per_k*distk;
	rate=distm/time*s_per_h;
	mtime=(double)time/distm;
	mmin=(int)mtime/s_per_m;
	msec=(int)mtime%s_per_m;
	printf("You ran %1.2f km (%1.2f miles) in %d min,%d sec.\n",distk,distm,min,sec);
	printf("That pace corresponds to running a mile in %d min,",mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);
	getchar();
	getchar();
	return 0;
}*/
/*#include<stdio.h>
#define format "%s! c is cool\n"
int main(void)
{
	int num=10;
	printf(format,format);
	printf("%d\n",++num);
	printf("%d\n",num++);
    printf("%d\n",num--);
	printf("%d\n",num);
	return 0;
}
*/
/*#include<stdio.h>
int main(void)
{
	char c1,c2;
	int diff;
	float num;
	c1='S';
	c2='O';
	diff=c1-c2;
	num=diff;
	printf("%c%c%c:%d %3.2f\n",c1,c2,c1,diff,num);
	return 0;
}*/
/*#include<stdio.h>
#define word 'g'
int main(void)
{
	char n='a';
	while (n<=word)
	{
		printf("%c",n);
		n++;
	}
	printf("\n");
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int x=0;
	while(++x<3)
		printf("%4d",x);
	return 0;
}
*/
/*#include<stdio.h>
int main(void)
{
	int x=100;
	while (x++<103);
		printf("%d\n",x); 
	printf("%4d\n",x);
	return 0;
}
*/
/*#include<stdio.h>
int main(void)
{
	char ch='s';
	while (ch<'w')
	{
		printf("%c",ch);
		ch++;
	}
	printf("%c\n",ch);
	return 0;
}*/
/*#define mesg "computer bytes dog"
#include<stdio.h>
int main(void)
{
	int n=0;
	while(n<5)
	{
		printf("%s\n",mesg);
	    n++;
	}
	printf("That's all.\n");
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	long num;
	long sum=0L;
	int status;
	printf("Please enter an integer to be summed");
	printf("(q to quit):");
	status=scanf("%ld",&num);
	while (status==1)
	{
		sum=sum+sum;
		printf("Please enter next integer (q to quit):");
		status=scanf("%ld",&num);
	}
	printf("Those integers sum to %ld.\n",sum);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
   int a=1,b=1;
   int a_post,pre_b;
   a_post=a++;
   pre_b=++b;
   printf("a a_post b pre_b\n");
   printf("%ld %5d %5d %5d\n",a,a_post,b,pre_b);
   return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int n=-100000000000000;
	while (n<10000000000000)
	{
		printf("n=%d\n",n);
		n++;
		printf("Now n=%d\n",n);
	}
	printf("The loop has finished.\n");
	return 0;
}
*/
/*#include<stdio.h>
int main(void)
{
	int n=0;
	while(n++<3);
	printf("n is %d\n",n);
	printf("That's all thid program does.\n");
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(void)
{
	const double answer =3.1415926535897932;
	double response;
	printf("What is the value of ¦Ð?\n");
	scanf("%lf",&response);
	while (fabs(response-answer)>.0001)
	{
		printf("Try again!\n");
		scanf("%lf",&response);
	}
	printf("Close enough!\n");
	return 0;
}*/
/*#include<stdio.h>
int main (void)
{
	int true_val,false_val;
	true_val=(10>2);
	false_val=(10==2);
	printf("true=%d;false=%d\n",true_val,false_val);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int n=3;
	while(n)
		printf("%2d is true\n",n--);
	printf("%2d is false\n",n);
	n=-3;
	while (n)
	{
		printf("%2d is true\n",n++);
	}
	printf("%2d is false\n",n);
	return 0;
}
*/
/*#include<stdio.h>
int main(void)
{
	long num;
	long sum=0L;
	bool status;
	printf("Please enter an integer to be summed");
	printf("(q to quit):");
	status=(scanf("%ld",&num)==1);
	while (status==1)
	{
		sum=sum+sum;
		printf("Please enter next integer (q to quit):");
		status=(scanf("%ld",&num)==1);
	}
	printf("Those integers sum to %ld.\n",sum);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	const int number =65536;
	int count =1;
	while (count<=number)
	{
		printf("Press any key to continue . . .\n");
		count++;
	}
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	const int number=22;
	int count;
	for(count=1;count<=number;count++)
		printf("Be my Valentine\n");
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int num;
	printf("   n   ncubed\n");
	for(num=2147465530;num<=2148000000;num++)
		printf("%5d %5d\n",num,num+1);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	int ch;
	for(ch=' ';ch<='z';ch++)
		printf("The ASCII value for %c is %d.\n",ch,ch);
	return 0;
}*/
/*#include<stdio.h>
int main(void)
{
	const int first_oz=46;
	const int next_oz=20;
	int ounces,cost;
	printf("ounces cost\n");
	for(ounces=1,cost=first_oz;ounces<=16;ounces++,cost+=next_oz)
		printf("%5d $%4.2f\n",ounces,cost/100.0);
	return 0;
}
	*/
#include<stdio.h>
	int main()

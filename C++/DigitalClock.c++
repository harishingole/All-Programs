#include<stdio.h>
#include<stdlib.h>
class Time{
	int h,m,s;
public:
	void init();
	void calculateTime();
};
void Time :: init()
{
	printf("Enter the Time in HH::MM::SS format\n");
	scanf("%d%d%d",&h,&m,&s);
}
void Time ::  calculateTime()
{
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			
			for(s;s<60;s++)
			{
				system("clear");
				printf("\n\n\n\n\n\n\t\t\t\t %d : %d : %d",h,m,s);
				
				if(h<12)
					printf("AM");
				else
					printf("PM");
				
				for(double i =0;i<3619999;i++)
				{
					i++;i--;
				}
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;

}
int main()
{
	Time t;
	t.init();
	t.calculateTime();
		
}	

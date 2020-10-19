#include<stdio.h>
#include<time.h>

int main()
{
	time_t s, val =1;
	struct tm *ct;
	
	s = time(NULL);
	
	ct = localtime(&s);
	
	printf("\n\n\n\t\t\t%2d :: %2d :: %2d \n\n\n",ct->tm_hour,ct->tm_min,ct->tm_sec);
}

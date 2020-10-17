#include<bits/stdc++.h> 

struct Point 
{ 
	float x;
	float y; 
};
bool check_PointsInsideRectangle(Point p, Point left1, Point right1)
{
	if(p.x>right1.x || p.y>left1.y)
		return false;
	if(p.x<left1.x ||p.y<right1.y)
		return false;
	
return true;
}


int calculate_height(Point left1, Point reft1)
{
	int height;
	return height = left1.y - reft1.y;
}

int calculate_width(Point left1, Point right1)
{
	int width;
	return width = right1.x-left1.x;
}

int main() 
{
	Point left1 = {2,4}, reft1 = {4,2}; 
    	Point p = {4,3};
	int h,w;
	printf("Height of the first rectangle ::\n");
	h =  calculate_height(left1,reft1);
	printf(" %d \n",h);
	printf("Width of the first rectangle ::\n");
	w =  calculate_width(left1,reft1);
	printf(" %d \n",w);
	if(check_PointsInsideRectangle(p,left1, reft1))
		printf("Point is inside the rectangle\n");
	else
		printf("Point is not inside the rectangle\n");	 
return 0; 
}


#include<bits/stdc++.h> 

struct Point 
{ 
	int x;
	int y; 
}; 
bool doOverlap(Point left1, Point right1, Point left2, Point right2) 
{ 
    if (left1.x >= right2.x || l2.x >= right1.x) 
        return false; 

    if (left1.y <= right2.y || l2.y <= right1.y) 
        return false; 
  
    return true; 
} 
int calculate_height(Point left1, Point reft1)
{
	int height;
	return height = left1.y - reft1.y;
}

int calculate_width(Point left1, Point r1)
{
	int width;
	return width = reft1.x-left1.x;
}

int main() 
{
	Point left1 = {10, 26}, reft1 = {45,10}; 
    	Point left2 = {20, 20}, reft2 = {45, 10};
	int h,w;
	printf("Height of the first rectangle ::\n");
	h =  calculate_height(left1,reft1);
	printf(" %d \n",h);
	printf("Width of the first rectangle ::\n");
	w =  calculate_width(left1,reft1);
	printf(" %d \n",w);
	printf("Height of the Second rectangle ::\n");
	h =  calculate_height(left2,reft2);
	printf(" %d \n",h);
	printf("Width of the Second rectangle ::\n");
	w =  calculate_width(left2,reft2);
	printf(" %d \n",w);
	if (doOverlap(left1, reft1, left2, reft2)) 
		printf("Rectangles Overlap\n"); 
	else
		printf("Rectangles Don't Overlap\n"); 
	return 0; 
}


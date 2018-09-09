#include<stdio.h>
#define XMAX 10
#define YMAX 10

struct point{
int x;
int y;
};

struct rect{
	struct point pt1;
	struct point pt2;
};

struct point makepoint(int x,int y)
{
	struct point temp;
	temp.x=x;
	temp.y=y;
	return temp;
}


int main()
{
	struct rect screen;
	struct point middle;
	struct point makepoint(int,int);

	screen.pt1 = makepoint(0,0);
	screen.pt2 = makepoint(10,10);
	middle = makepoint((screen.pt1.x + screen.pt2.x)/2 ,
			   (screen.pt1.y + screen.pt2.y)/2);
	printf("%d \n",middle.x);
	printf("%d \n",middle.y);
	return 0;
}


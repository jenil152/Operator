#include<stdio.h>

main()

{
	int x=2,y=4,z=6,c;
	c=x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x);
	printf("c=%d",c);
}

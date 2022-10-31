#include <stdio.h>
int main ()
{
	int x,y,z;
	int sum,avg,product;
		printf ("Enter first number \n");
		scanf ("%d",&x);
		printf ("Enter second number \n");
		scanf ("%d",&y);
		printf ("Enter third number \n");
		scanf ("%d",&z);
		printf ("sum= %d\navg= %d\nproduct= %d\n",sum= x+y+z,avg= (x+y+z)/3,product= x*y*z);
		
		if (x>y && x>z){
		printf ("x is the largest\n");}
	    if (x<y && x<z){
		printf ("x is the smallest\n");}
			if (y>x && y>z){
		printf ("y is the largest\n");}
		if (y<x && y<z){
		printf ("y is the smallest\n");}
		if (z>x && z>y){
		printf ("z is the largest\n");}
		if (z<x && z<y){
		printf ("z is the smallest\n");}
	
		
		
				
}
		
		
		
		


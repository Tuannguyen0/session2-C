#include<iostream>
#include<stdio.h> 
#include <math.h>
using namespace std;
int main()
{
	int C;
	printf("Hay nhap nhiet do C:"); 
	scanf("%d ",&C);
	float F=0;
	F += C*1.8+32;
	printf("Nhiet do F là: %.2f \n",F); 
	
	
	return 0;
}

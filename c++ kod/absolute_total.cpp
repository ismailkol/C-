#include <stdio.h>
#include <math.h>

float absolute_total (const float *dizi, int boyut);

int main ()
{
	float dizi[]={0,1,-6,7,8,-3,-5,7,5,-7};
	float mtoplam;
	int boyut=10;
	
	mtoplam = absolute_total(dizi, boyut);
	
	printf ("%f",mtoplam);
	
	return 0;
}

float absolute_total (const float *dizi, int boyut)
{
	int i;
	float toplam=0;
	
	
	for (i=0; i<boyut; i++)
	{
		toplam += fabs (*dizi);
		
		*dizi++;
	}
	
	return toplam;
}

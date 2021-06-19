#include <stdio.h>

float min(const float *dizi, int boyut);

int main ()
{
	float dizi[]={0,1,-6,7,8,-3,-5,7,5,-7};
	float Min;
	int boyut=10;
	
	Min = min (dizi, boyut);
	
	printf ("%f",Min);
	
	return 0;
}

float min (const float *dizi, int boyut)
{
	int i;
	float Min = *dizi;
	*dizi++;
	
	for (i=1; i<boyut; i++)
	{
		if ( Min > *dizi )
		{
			Min = *dizi;
		}
		
		*dizi++;
	}
	
	return Min;
}

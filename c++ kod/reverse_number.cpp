#include <stdio.h>
#include <math.h>

int reverse_Number(int sayi)
{
	int mod,basamak=0;
	
	for (mod=10; sayi>0; gsayi=gsayi/10)
	{
		basamak=sayi%mod;
		
		int dizi [40],i=1;
		
		dizi[i]=basamak;
		
		printf ("%d",dizi[i]);
		
		i++;		
		
	}
}


int main()
{
	int x;
	
	printf ("Bir sayi giriniz: ");
	scanf ("%d",&x);
	
	 reverse_Number(x);
	
	return 0;
}

#include <stdio.h>

int find_number (int sayi);

int main ()
{
	int x;
	
	printf ("Lutfen bir sayi giriniz: ");
	scanf ("%d",&x);
	
	find_number(x);
	
	return 0;
}

int find_number (int sayi)
{
	int i, dizi[100], basamak, say=0, rakam, sayac=0;
	
	for (i=0; sayi>0; i++)
	{
		basamak=sayi%10;
		sayi=sayi/10;
		dizi[i]=basamak;
		say++;
	}
	
	for (rakam=0; rakam<10; rakam++)
	{
		
		for (i=0; i<say; i++)
		{
			if ( rakam==dizi[i] )
			{
				sayac++;
			}
			
		}
		
		printf ("%d rakamindan %d tane vardir.\n",rakam,sayac);
		
		sayac=0;
	}
}

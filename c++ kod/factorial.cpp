#include <stdio.h>

int Factorial(int gsayi)
{
	int kat,f=1;
	
	for (kat=1; kat<=gsayi; kat++)
	{
		f=f*kat;
	}
	
	return f;
}

int main()
{
	int x,sonuc;
	printf ("Bir sayi giriniz: ");
	scanf ("%d",&x);
	
	sonuc = Factorial(x);
	
	printf ("sayinin faktoriyeli: %d",sonuc);
	
	return 0;
}

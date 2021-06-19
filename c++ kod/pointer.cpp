#include <stdio.h>

int reverse  (char *cumle);

int main ()
{
	char *giris;
	printf ("Cumlenizi giriniz: ");
	scanf ("%s",&giris[0]);
	
	reverse  (&giris[0]);
	
	return 0;
}

int reverse  (char *cumle)
{
	int i, ks;
	char *dizi;
	
	for (i=0; i<100; i++ )
	{
		*dizi = *cumle;
		
		if ( *cumle == ' ')
		{
			*dizi++;
			ks++;
		}
		
		else if ( *cumle == '\0')
		{
			break;
		}
		
		*cumle++;
		
	}
	
	for (i=0; i<ks; i++)
	{
		printf ("%p",*dizi);
		*dizi--;
	}
	

}

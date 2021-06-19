#include <stdio.h>

void reverse (const char dizi1[], char dizi2[]);

int main()
{
	char a[]="edanur";
	char b[100];
	reverse (a, b);
	printf ("%s",b);
}

void reverse (const char dizi1[], char dizi2[])
{
	int i, karaktersayisi;
	
	for (i=0; i<100; i++ )
	{
		if ( dizi1[i]=='\0')
		{
			karaktersayisi=i;
			break;
		}
	}

	for (i=0; i<karaktersayisi; i++)
	{
		dizi2[i] = dizi1[karaktersayisi-i-1];
	}
}

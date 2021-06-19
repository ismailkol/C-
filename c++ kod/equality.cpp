#include<stdio.h>
int Search(const char a[],const char b[]);
int main(){
	char x[]="osmanli";
	char y[]="osman";
	if(Search (x,y)==1){
		printf("bulundu");
	}
	else{
		printf("bulunmadi");
	}
}
int Search(const char a[],const char b[])
{
	int i, ks, say=0;
	
	for (i=0; i<100; i++)
	{
		if ( b[i]=='\0')
		{
			ks=i;
			break;
		}
	}
	
	for (i=0; i<ks; i++)
	{
		if ( a[i]== b[i] )
		{
			say++;
		}
	}
	
	if ( say==ks )
	{ 
		return 1;
	}
	
	else 
	{
		return 0;
	}
}

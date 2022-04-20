#include <stdio.h>
struct kodi
{
    int nr;
} k[1];

int main()
{	
    printf("Shkruani kodin e shtetit:\n");
	scanf("%d",&k[1].nr);
   
	if(k[1].nr==+355)
	{
	printf("Ky prefix i perket Shqiperis.");

	}
	
	

    return 0;
}

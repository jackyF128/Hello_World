#include <stdio.h>

int main()
{
    int i;
	char Name[50] ="jackyF128 haha";
	printf("Hello World!\n");
	printf("%d\n", 2+3);
	printf("%d\n", 1, 2+3,654);
	printf("%s\n", Name);
	printf("%c\n", Name[5]);
	printf("%s\n", Name+3);
	printf("%u\n", Name);
	for(i=0;i<50;++i)
	   {
		printf("%d :%c-%u\n",i, Name[i], Name[i]);
	}
	return 123;	
}

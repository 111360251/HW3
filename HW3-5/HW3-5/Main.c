#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str1[] = "Welcome", str2[60];
	int len;
	strcpy(str2, str1);
	printf("string2=%s\n", str2);

	len = strlen(str2);
	printf("¦r¦êªø«×¬°%d\n", len);
	system("pause");
	return 0;
}

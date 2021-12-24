#include <stdio.h>
#include <string.h>
//not done
int main(int argc, char **argv)
{
	int c = 0;
	char string[] = "abcabcabcabcabc";//argv[1];
	char substring[]= "abc";//argv[2];
	char * p = strstr(string, "abc");
	printf("%-20s", p);
	

    	while(string && c < 10)
	{
		c++;
		printf("%o ", c);
		string = strstr(string, substring); 
		printf("%-20s", string);
	}
	
	return 0;
}

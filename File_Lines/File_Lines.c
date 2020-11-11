#include <stdio.h>





int main(void)
{
	
	FILE *source_file;
	int count = 0;
	char *line = NULL;
  	size_t len = 0;
  	ssize_t nread;

	//open file
	source_file = fopen("poema.txt", "r");


	while ((nread = getline(&line, &len, source_file)) != -1) 
	{
    	count++;
    	
    }


    printf("Number of lines of the file is: %d\n", count);

	fclose(source_file);

	return 0;
}
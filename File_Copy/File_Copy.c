#include <stdio.h>


int main(void)
{

	//file pointers
	FILE *source_file;
	FILE *dest_file;

	char *line = NULL;
  size_t len = 0;
  ssize_t nread;

  //open files
  source_file = fopen("poema.txt","r");
  dest_file = fopen("copy.txt", "w");

  
    while ((nread = getline(&line, &len, source_file)) != -1) {
    
    	fwrite(line, nread, 1, dest_file);
    }


   	//close both files
	fclose(source_file);
	fclose(dest_file);

	return 0;
}
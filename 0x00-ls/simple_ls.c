#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR *dir;
	struct dirent *read;
	dir = opendir(argv[1]);

	while ((read = readdir(dir)) != NULL)
	{
		printf("%s\n", read->d_name);
	}

	closedir(dir);

	return(argc);
}

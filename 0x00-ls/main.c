#include "hls.h"
/**
 * main - lists the content of current directory
 *
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	DIR *dir;
	struct dirent *read;

	if (argc == 1)
		dir = opendir(".");
	else
		dir = opendir(argv[1]);

	while ((read = readdir(dir)) != NULL)
	{
		if (read->d_name[0] == '.')
			continue;
		printf("%s ", read->d_name);
	}
	printf("\n");

	closedir(dir);

	return (0);
}

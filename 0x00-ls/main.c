#include <stdio.h>
#include <dirent.h>
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
		printf("%s\n", read->d_name);
	}

	closedir(dir);

	return (0);
}

#include "main.h"

/**
 * clfile - close all the files
 * @fd: the file descriptor
 * @filename: the filename to be closed
 * @mode: variable to determine it's wr or rd
 *
 * Return: return -1 on failure
 */

int clfile(int fd, char *filename, int mode)
{
	int cl;

	if (fd == -1)
	{
		if (mode == 1)
		{
			printf("Error: Can't read from file %s\n", filename);
			exit(98);
		}
		else if (mode == 2)
		{
			printf("Error: Can't write to %s\n", filename);
			exit(99);
		}
		cl = close(fd);
		if (cl == -1)
		{
			printf("Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
	return (-1);
}

/**
 * clmain - close file descriptors
 * @fd: first file read
 * @fp: second file write
 *
 * Return: return 0  for success
 */

int clmain(int fd, int fp)
{
	int cl1, cl2;

	cl1 = close(fd);
	if (cl1 == -1)
	{
		printf("Error: Can't close fd %d\n", fd);
		exit(100);
	}

	cl2 = close(fp);
	if (cl2 == -1)
	{
		printf("Error: Can't close fd %d\n", fp);
		exit(100);
	}

	return (0);
}

/**
 * main - the main function to execute the whole program
 * @argc: the argument counts
 * @argv: argument list
 * Return: return with some exits
 */

int main(int argc, char *argv[])
{
	int fd, fp;
	char buffer[1024];
	ssize_t wr, rd;
	char *filefrom, *fileto;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);

	}

	filefrom = argv[1];
	fileto = argv[2];

	fd = open(filefrom, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	fp = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp == -1)
	{
		printf("Error: Can't read from file %s\n", fileto);
		exit(98);
	}

	rd = read(fd, buffer, 1024);
	clfile(rd, filefrom, 1);

	wr = write(fp, buffer, rd);
	clfile(wr, fileto, 2);

	clmain(fd, fp);
	return (0);
}

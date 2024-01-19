#include "monty.h"

/**
 * fetching_stream_fail - Handles the error when reading a file fails.
 * @fileName: The name of the file that failed to open.
 */

void fetching_stream_fail(char *fileName)
{
	dprintf(2, "Error: Can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * fetch_stream - gets the stream for reading from the specified file.
 * @fileName: Name of the file to open and set as the stream.
 */

void fetch_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		fetching_stream_fail(fileName);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		fetching_stream_fail(fileName);
	}
}

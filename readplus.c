#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt", "r+"); // does not create a file if it does not exist and can be used for writing as well
    // The content is written to the file where the pointer is pointing
    if (fp == NULL)
    {
        perror("Error opening the file.\n");
        return -1;
    }
    fputc('p', fp);

    fclose(fp);
    return 0;
}
#include <stdio.h>

int main()
{
    // functions in c programming
    // fopen(filename/filepath,mode of file)
    // mode of file r for read mode w for write mode a for append mode

    FILE *fp;
    fp = fopen("file.txt", "r");
    fclose(fp);
    return 0;
}
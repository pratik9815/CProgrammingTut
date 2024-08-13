#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "a");
    char str[100];
    printf("Enter the string you want to append to the file.\n");
    fgets(str, 100, stdin);
    fprintf(fp, str);

    // we can use fputs also and fputc with while loop
    fclose(fp);
    return 0;
}
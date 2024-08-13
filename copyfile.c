#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("abc.txt", "r");
    if (fp1 == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    fp2 = fopen("destinationfile.txt", "w");
    if (fp2 == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    printf("File copied successfully\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
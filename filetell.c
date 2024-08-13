#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");
    fseek(fp, 0, SEEK_END);                           // will point to the end of the file
    printf("The file is of character %d", ftell(fp)); // ftell =retns the current position of the file pointer
    fclose(fp);
    getch();
    return 0;
}
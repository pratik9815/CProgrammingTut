#include <stdio.h>
#include <conio.h>
int main()
{
    // fseek(FILE *stream, long offset, int origin)
    FILE *fp;
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file\n");
        return -1;
    }
    // cursor will point to the first character
    // after using fseek the cursor is pointed to the 8th character moves the pointer forward
    fseek(fp, 8, SEEK_SET);
    char ch;
    ch = fgetc(fp);
    printf("%c", ch);
    char str[100];
    fgets(str, 100, fp);
    printf("%s", str);
    fclose(fp);

    // moving pointer backward

    fseek(fp, -3, SEEK_CUR);

    ch = getc(fp);
    printf("\n%c", ch);

    fseek(fp, -3, SEEK_END); // moving pointer to the last location and moving forward the cursor to the third position from the last

    getch();
    return 0;
}
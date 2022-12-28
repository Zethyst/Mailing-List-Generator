// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    const char *list[] = {"21052646", "21052665", "Enter roll no here"};
    const char mail[] = "@kiit.ac.in";
    char list2[20][20];
    const int N = sizeof(list) / sizeof(*list);
    int k = 0;
    int T, i, j;
    for (i = 0; i < N; i++)
    {
        T = strlen(list[i]);
        for (j = 0; j < T; j++)
        {
            list2[i][j] = list[i][j];
        }
        for (int k = 0; mail[k] != '\0'; k++)
        {
            list2[i][j] = mail[k];
            j++;
        }
        list2[i][j] = '\0';
    }

    for (int a = 0; a < N; a++)
    {
        T = strlen(list2[a]);
        for (int b = 0; b < T; b++)
        {
            printf("%c", list2[a][b]);
        }
        printf("\n");
    }
    return 0;
}
// END OF LINE
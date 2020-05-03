#include <stdio.h>
#include <string.h>

int main()
{
    char name[30] = {}, n1[30] = {};
    printf("Enter name\n");
    scanf("%s", name);

    for (int i = 0, j = 0; i < strlen(name); i++)
    {
        if (name[i] == '_')
            continue;
        else
        {
            n1[j] = name[i];
            j++;
        }
    }
    printf("%s\n", n1);
}
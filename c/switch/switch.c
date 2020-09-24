#include <stdio.h>

int main()
{
    int choice;
    const int one = 1;
    const int two = 2;

    while (1)
    {
        printf("Enter choice\n");
        scanf("%d", &choice);

        switch (choice)
        {

        ///@note error case
        case one:
            printf("one\n");
            break;

        case 2:
            printf("two\n");
            break;

        case 1 + 2:
            printf("three\n");
            break;

        case 4:
        case 5:
            printf("five or four\n");
            break;

        default:
            printf("invalid choice\n");
            break;
        }
    }
}
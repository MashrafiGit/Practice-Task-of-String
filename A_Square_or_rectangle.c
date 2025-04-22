#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[2];

    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i < 2; i++)
        {
            scanf("%d", &a[i]);
        }

        if (a[0] == a[1])
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}
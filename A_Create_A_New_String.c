#include<stdio.h>
int main()
{
    char a[1001];
    scanf("%s", a);

    char b[1001];
    scanf("%s", b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s %s", a, b);

    return 0;
}
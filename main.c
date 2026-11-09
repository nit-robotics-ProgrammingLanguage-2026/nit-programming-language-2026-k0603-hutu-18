#include <stdio.h>

int main(void)
{
    int n;
    long long sum = 0;
    long long i;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG\n");
        return 0;
    }
    for (long long i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld\n", sum);
    return 0;
}

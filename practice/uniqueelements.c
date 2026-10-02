#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:\t");
    scanf("%d", &n);
    int num[n];

    printf("Enter the elements:\t");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                for (int e = j; e < n - 1; e++)
                {
                    num[e] = num[e + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("Number of unique elements: %d\n", n);

    return 0;
}

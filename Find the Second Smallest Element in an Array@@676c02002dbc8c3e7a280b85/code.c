#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n < 2) 
    {
        printf("-1");
        return 0;
    }

    int min1 = arr[0], min2 = 11002; 

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] > min1 && arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    if(min2 == 11002)
    {
        printf("-1");
    }
    else
    {
        printf("%d", min2);
    }

    return 0;
}

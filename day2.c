#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if (n <= 0) 
    {
        return 0;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);
    if (pos < 1 || pos > n) 
    {
        printf("Invalid position");
        free(arr);
        return 0;
    }
    for (int i = pos - 1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

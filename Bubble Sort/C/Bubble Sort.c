#include<stdio.h>
void BubbleSort(int n,int A[]);
void BubbleSort(int n, int A[])
{
    for (int i =0; i < n-1; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Size of the Array: ");
    scanf("%d",&n);

    int A[n];
    printf("Elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    BubbleSort(n,A);

    printf("The sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d " ,A[i]);
    }

    return 0;
}

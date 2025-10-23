# include <iostream>

void BubbleSort(int n, int A[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++ )
        {
            if(A[j] > A[j+1])
            {
                std::swap(A[j], A[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    std::cout << "n: ";
    std::cin >> n;

    int A[n];
    std::cout << "Array: ";
    for(int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }

    BubbleSort(n, A);
    std::cout << "The Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }

    return 0;
}

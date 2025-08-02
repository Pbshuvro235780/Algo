#include<iostream>
#include<algorithm>

void BinarySearch(int n, int A[], int item);

void BinarySearch(int n, int A[], int item)
{
    int low = 0;
    int high = n-1;
    bool found = false;
    while(low <= high)
    {
        int mid = (low + high) /2;

        if(A[mid] == item)
        {
            std::cout << "Item is found at " << mid <<" index " << mid+1 <<" position.";
            found = true;
            break;
        }

        else if(A[mid] > item)
        {
            high = mid + 1;
        }

        else
        {
            low = mid + 1;
        }

    }

    if(found==false)
    {
        std::cout << "Sorry, The item is not found in the array.";
    }
}

int main()
{
    int n;
    std::cout << "N: ";
    std::cin >> n;

    int A[n];
    std::cout << "A: ";
    for(int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }

    std::sort(A, A+n);

    int item;
    std::cout << "Item: ";
    std::cin >> item;

    BinarySearch(n,A,item);

    return 0;
}

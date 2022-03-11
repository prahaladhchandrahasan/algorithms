#include <bits/stdc++.h>

using namespace std;

void bubblesort(int arr[], int n)
{
    bool swapped = true;
    for (int i = 0; i < n - 1 && swapped == true; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++) // j goes till n-1-i as the unsorted array's size reduces after each pass
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {230, -34, 36, -76, 90, 1024, -2048};
    int n = 7; // size of the array usually given
    bubblesort(arr, n);
    return 0;
}

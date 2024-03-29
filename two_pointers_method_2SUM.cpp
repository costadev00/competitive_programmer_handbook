#include <iostream>
using namespace std;

int i, j;
// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
int isPairSum(int A[], int N, int X)
{
    // represents first pointer
    i = 0;

    // represents second pointer
    j = N - 1;

    while (i < j)
    {

        // If we find a pair
        if (A[i] + A[j] == X)
            return 1;

        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;

        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return 0;
}

// Driver code
int main()
{
    // array declaration
    int arr[] = {3, 5, 9, 2, 8, 10, 11};

    // value to search
    int val = 17;

    // size of the array
    int arrSize = *(&arr + 1) - arr;

    // Function call

    if (isPairSum(arr, arrSize, val))
        cout << "The sum is possible \n";
    cout << arr[i] << " + " << arr[j] << " = " << val;

    return 0;
}

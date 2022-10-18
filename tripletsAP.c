#include <stdio.h>
 
// Function to print all triplets that forms arithmetic progression
// in a given sorted array
void findAllTriplets(int A[], int n)
{
    for (int j = 1; j < n - 1; j++)
    {
       
        int i = j - 1, k = j + 1;
 
        // Find all `i` and `k` such that `(i, j, k)` form an AP triplet
        while (i >= 0 && k < n)
        {
            // if `(A[i], A[j], A[k])` forms a triplet
            if (A[i] + A[k] == 2 * A[j])
            {
                printf("%d %d %d\n", A[i], A[j], A[k]);
                k++, i--;
            }
            else if (A[i] + A[k] < 2 * A[j]) {
                k++;
            }
            else {
                i--;
            }
        }
    }
}
 
int main(void)
{
    int A[] = { 1, 3, 5, 6, 8, 9, 15 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findAllTriplets(A, n);
 
    return 0;
}

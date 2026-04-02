/* * Author: Akash Raval
 * Purpose: Optimized Bubble Sort Implementation in C
 * Date: April 2, 2026
 */

#include<stdio.h>
#include<conio.h>

// Function to perform Bubble Sort with optimization
void bubbleSort(int k[], int n) {
    int pass, i, last = n, exchs, t;

    // External loop for passes
    for(pass = 1; pass <= n - 1; pass++) {
        exchs = 0; // Reset exchange flag for each pass

        // Internal loop to compare adjacent elements
        for(i = 1; i <= last - 1; i++) {
            if(k[i] > k[i + 1]) {
                // Swapping elements
                t = k[i];
                k[i] = k[i + 1];
                k[i + 1] = t;
                exchs++; // Increment if a swap occurs
            }
        }

        // Optimization 1: If no swaps, array is already sorted
        if(exchs == 0) {
            return;
        } else {
            // Optimization 2: Reduce the range as the largest element is already at the end
            last--;
        }
    }
}

int main() {
    int a[10], n, i;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);

    // Taking array input from user
    for(i = 1; i <= n; i++) {
        printf("Enter the element[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Calling the sorting function
    bubbleSort(a, n);

    // Printing the sorted array
    printf("\nSorted Array List: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

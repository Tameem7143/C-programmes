#include <stdio.h>

int main() {
    int i, j, k;
    int size1, size2;
    
  
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    
    int arr1[size1], arr2[size2], merged[size1 + size2];
    
   
    printf("Enter %d elements for the first array in sorted order:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
   
    printf("Enter %d elements for the second array in sorted order:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
   
    i = 0;            // Index for arr1
    j = 0;           // Index for arr2
    k = 0;          // Index for merged array
    
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
                         // Copy remaining elements of arr1, if any
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    
                         // Copy remaining elements of arr2, if any
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
    
    // Printing the merged array
    printf("Merged array in sorted order:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
 int n,i, largest;
 int *arr;
 
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 
 arr = (int *)malloc(n * sizeof(int));
 printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
printf("The largest element is: %d\n", largest);
 free(arr);

    return 0;
}

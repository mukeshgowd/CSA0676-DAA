#include <stdio.h>
#include <string.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    
    
    for (i = 0; i < n-1; i++) {
        
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
       
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    getchar(); 
    char input[100]; 
    printf("Enter %d integers separated by commas:\n", n);
    fgets(input, 100, stdin);
    input[strlen(input)-1] = '\0'; 
    int arr[n];
    char *ptr = input; 
    for (i = 0; i < n; i++) {
        sscanf(ptr, "%d", &arr[i]); 
        ptr = strchr(ptr, ',') + 1; 
    }
    selection_sort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int k = 0;  
    
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  
            k++;
        }
    }
    
    return k;  
}

int main() {
    int nums[100], n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = removeElement(nums, n, val);

    printf("Number of elements not equal to %d: %d\n", val, k);

    printf("Modified array (first %d elements are valid):\n", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

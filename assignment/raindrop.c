#include <stdio.h>
int trap(int* height, int n) {
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max)
                left_max = height[left];
            else
                water += left_max - height[left];
            left++;
        } else {
            if (height[right] >= right_max)
                right_max = height[right];
            else
                water += right_max - height[right];
            right--;
        }
    }

    return water;
}


int main() {
    int height[] = {1,2,0,5,3,1,0,6,2,1,3};
    int n = sizeof(height) / sizeof(height[0]);

    int result = trap(height, n);
    printf("Total trapped water: %d\n", result);

    return 0;
}

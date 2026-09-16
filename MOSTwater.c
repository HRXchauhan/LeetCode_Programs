int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;

    while(left < right) {
        int tem;

        if(height[left] < height[right]) {
            tem = height[left];
        } else {
            tem = height[right];
        }

        int area = tem * (right - left);

        if(area > max) {
            max = area;
        }

        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max;
}
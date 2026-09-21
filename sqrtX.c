#include <stdio.h>

int mySqrt(int x) {
    int low = 0, high = x;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((long long)mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;//commit sorry
}

int main(){
    int x;
    printf("Enter the number to know sqr root:\n");
    scanf("%d",&x);
    int sqrt=mySqrt(x);

    printf("The result is:-> %d",sqrt);

    return 0;;
}

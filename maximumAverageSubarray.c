#include <stdio.h>

int main()
{
    int n;
    double k;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    printf("enter the target value\n");
    scanf("%lf",&k);
    printf("enter the array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    double avg = 0, sum = 0;
    for (int i = 0; i < k&&i<n; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / k;
    double ans = avg;
    int l=k;
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i];
        sum = sum - arr[i - l];
        avg = sum / k;
        if (avg > ans)
        {
            ans = avg;
        }
    }

    printf("%lf", ans);

    return 0;
}

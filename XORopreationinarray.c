 #include <stdio.h>
 #include <math.h>

int xorOperation(int n, int start) {
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
       arr[i] = start + 2 * i;
       
       sum=sum^arr[i];
        
    }
    return sum;
    
}

int main(){
    int n,start;

    printf("Enter the value of n and start respectivly:\n");
    scanf("%d %d",&n, &start);

    int xor=xorOperation(n, start);

    printf("The result is:-> %d",xor);
}
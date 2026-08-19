int maxProduct(int n) {
    int arr[10];
    int c=0;
    while(n!=0){
        arr[c]=n%10;
        n=n/10;
        c++;


    }
    //c--;
     for (int i = 0; i < c - 1; i++) {
        for (int j = 0; j < c - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int r;
    r=arr[c-2]*arr[c-1];
    return r;

    

    
}
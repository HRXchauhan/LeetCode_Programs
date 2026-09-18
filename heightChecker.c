
int heightChecker(int* heights, int heightsSize) {
    int expected[heightsSize];
    int temp=0,count=0;

    for(int a=0;a<heightsSize;a++){
        expected[a]=heights[a];
    }
    
    for(int i=0;i<heightsSize;i++){
        temp=heights[i];
        count=i;
        for(int j=i+1;j<heightsSize;j++){
            if(temp>heights[j]){
                temp=heights[j];
                count =j;
            }
            
        }
        heights[count]=heights[i];
        heights[i]=temp;        
    }
    count=0;
    for(int k=0;k<heightsSize;k++){
        if(heights[k]!=expected[k]){
        
            count++;
        }
    }
    return count;
}
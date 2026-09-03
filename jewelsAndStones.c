int numJewelsInStones(char* jewels, char* stones) {
    //int len = strlen(jewels);
    int hash[256]={0};
    int count=0;
    for(int j=0;jewels[j]!='\0';j++){
        hash[jewels[j]]++;
    }

    for(int i=0;stones[i]!='\0';i++){
        if(hash[stones[i]]!=0){
            count++;
        }
    }
    return count;
}
#include <cstdio>

int main(){

    FILE * inputFile = fopen("input.txt","r");
    int n(0), k(0); fscanf(inputFile, "%d %d", &n, &k);

    int total(0);
    while(n--){
        int quantity(0); fscanf(inputFile, "%d", &quantity);
        if(quantity < k){total += quantity;}
        else if(quantity <= 3 * k){total += quantity % k;}
        else{total += quantity - 3 * k;}
        printf("%d\n", total);
    }
    fclose(inputFile);

    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%d\n", total);
    fclose(outputFile);

    return 0;
}

#include <cstdio>

int main(){

    FILE * inputFile = fopen("input.txt","r");
    long n(0); fscanf(inputFile, "%ld", &n);
    long * positives = new long[n];
    long * negatives = new long[n];
    long posCounter(0), negCounter(0), temp(0);
    for(long k = 0; k < n; k++){
        fscanf(inputFile, "%ld", &temp);
        if(temp > 0){++posCounter;}
        else if(temp < 0){++negCounter;}
        positives[k] = posCounter;
        negatives[k] = negCounter;
    }
    fclose(inputFile);

    long currentMin(n);
    for(long k = 0; k < n - 1; k++){
        long changeBefore = k + 1 - negatives[k];
        long changeAfter = (n - 1 - k) - (positives[n - 1] - positives[k]);
        
        if(changeBefore + changeAfter < currentMin){currentMin = changeBefore + changeAfter;}
    }

    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%ld\n", currentMin);
    fclose(outputFile);

    return 0;
}

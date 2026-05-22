#include <cstdio>
#include <vector>

int main(){

    const int N = 5000;

    FILE * inputFile = fopen("input.txt","r");
    long n(0); fscanf(inputFile, "%ld\n", &n);
    long counts[N + 1] = {0};
    long temp(0);
    for(long k = 0; k < n; k++){fscanf(inputFile, "%ld", &temp); ++counts[temp];}
    fclose(inputFile);

    std::vector<long> cumCounts(N + 1,0);
    for(int k = 1; k <= N; k++){cumCounts[k] = cumCounts[k - 1] + counts[k];}

    long maxPresent(0);
    for(int k = 1; k <= N/2; k++){
        long currentPresent = cumCounts[2 * k] - cumCounts[k - 1];
        if(currentPresent > maxPresent){maxPresent = currentPresent;}
    }

    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%ld\n", n - maxPresent);
    fclose(outputFile);

    return 0;
}

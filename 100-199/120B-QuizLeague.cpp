#include <cstdio>

int main(){

    FILE * inputFile = fopen("input.txt","r");
    int n(0), k(0); fscanf(inputFile, "%d %d", &n, &k);

    bool noneSoFar(1); 
    int firstUnanswered(0);

    for(int p = 1; p <= n; p++){
        int temp(0); fscanf(inputFile, "%d", &temp);
        if(temp){
            if(p >= k){firstUnanswered = p; break;}
            else if(noneSoFar){firstUnanswered = p; noneSoFar = 0;}
        }
    }
    fclose(inputFile);

    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%d\n", firstUnanswered);
    fclose(outputFile);

    return 0;
}

#include <cstdio>

int main(){

    FILE *inputFile; FILE *outputFile;
    inputFile = fopen("input.txt", "r"); 
    outputFile = fopen("output.txt", "w"); 
    
    int numBoys(0), numGirls(0); fscanf(inputFile, "%d %d", &numBoys, &numGirls);
    int comm(0), diff(0);
    char minChar, maxChar;

    if(numBoys > numGirls){comm = numGirls; diff = numBoys - numGirls;maxChar = 'B'; minChar = 'G';}
    else{comm = numBoys, diff = numGirls - numBoys;maxChar = 'G'; minChar = 'B';}

    for(int k = 0; k < comm; k++){fprintf(outputFile, "%c%c", maxChar,minChar);}
    for(int k = 0; k < diff; k++){fprintf(outputFile, "%c", maxChar);}
    fprintf(outputFile, "\n");
    
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

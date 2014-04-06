#include <cstdio>
#include <iostream>

int main(){

    FILE *inputFile; FILE *outputFile;
    inputFile = fopen("input.txt", "r"); 
    outputFile = fopen("output.txt", "w");

    int n(0); fscanf(inputFile, "%d\n", &n);
    char *hands = new char[n + 1];
    for(int k = 1; k <= n; k++){fscanf(inputFile, "%c", hands + k);}

    for(int k = 1; k < n/2 - 1; k++){
        if(hands[k] == 'R' && hands[n - k + 1] == 'L'){fprintf(outputFile, "%d %d\n", n - k + 1, k);}
        else{fprintf(outputFile, "%d %d\n", k, n - k + 1);}
    }

    if(hands[n/2 - 1] == 'R' && hands[n/2 + 1] == 'L'){fprintf(outputFile, "%d %d\n", n/2 + 1, n/2 - 1);}
    else{fprintf(outputFile, "%d %d\n", n/2 - 1, n/2 + 1);}

    if(hands[n/2] == 'R' && hands[n/2 + 2] == 'L'){fprintf(outputFile, "%d %d\n", n/2 + 2, n/2);}
    else{fprintf(outputFile, "%d %d\n", n/2, n/2 + 2);}

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>

int main(){
    FILE * inputFile = fopen("input.txt","r");
    if(inputFile){
        const int RANGE = 5000;
        long array[RANGE + 1] = {0};

        long n(0); fscanf(inputFile, "%ld\n", &n);
        long *firstGroup  = new long[n];
        long *secondGroup = new long[n];

        long index(0);
        long temp(0);

        for(long k = 0; k < 2 * n; k++){
            fscanf(inputFile, "%ld", &temp);
            if(array[temp] == 0){array[temp] = 1 + k;}
            else{
                firstGroup[index]  = array[temp];
                secondGroup[index] = 1 + k;
                array[temp] = 0;
                ++index;
            }
        }

        fclose(inputFile);

        FILE * outputFile = fopen("output.txt","w");
        if(index == n){for(long k = 0; k < n ; k++){fprintf(outputFile, "%ld %ld\n", firstGroup[k], secondGroup[k]);}}
        else{fputs("-1",outputFile);}
        fclose(outputFile);
    }

    return 0;
}

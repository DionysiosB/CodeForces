#include <cstdio>

int main(){

    FILE * inputFile = fopen("input.txt","r");
    int ball(0); fscanf(inputFile, "%d\n", &ball);

    const int N = 3;

    for(int p = 0; p < N; p++){
        int first(0), second(0); fscanf(inputFile, "%d %d\n", &first, &second);
        if(first == ball){ball = second;}
        else if(second == ball){ball = first;}
    }
    fclose(inputFile);

    FILE * outputFile = fopen("output.txt","w");
    fprintf(outputFile, "%d\n", ball);
    fclose(outputFile);

    return 0;
}

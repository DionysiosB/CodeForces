#include <cstdio>

int main(){

    FILE * inputFile = fopen("input.txt","r");
    int n(0); fscanf(inputFile, "%d\n", &n);

    int lastSignal(-1), distance(-1);
    bool output(1);

    for(int p = 0; p < n; p++){
        char temp('0'); fscanf(inputFile, "%c", &temp);
        if(temp == '1'){
            if(lastSignal < 0){lastSignal = p;}
            else if(distance < 0){distance = p - lastSignal; lastSignal = p;}
            else if(p - lastSignal == distance){lastSignal = p;}
            else if(p - lastSignal != distance){output = 0; break;}

            printf("%d %d %d\n", p, lastSignal, distance);

        }
    }
    fclose(inputFile);

    FILE * outputFile = fopen("output.txt","w");
    if(output){fprintf(outputFile, "YES\n");}
    else{fprintf(outputFile, "NO\n");}
    fclose(outputFile);

    return 0;
}

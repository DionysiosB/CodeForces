#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

int main(){

    int nrows(0), ncols(0); scanf("%d %d\n", &nrows, &ncols);
    int ones(0), mixed(0), zeroOnes(0),oneZeros(0), zeros(0);

    for(int row = 0; row < nrows; row++){
        for(int col = 0; col < ncols; col++){
            char first('a'), second('a'); scanf("%c%c", &first, &second);
            if(first == '0' && second == '0'){++zeros;}
            else if(first == '1' && second == '1'){++ones;}
            else{++mixed;}

            if(col < ncols - 1){scanf(" ");}
            else{scanf("\n");}
        }
    }

    zeroOnes = mixed / 2; oneZeros = mixed - zeroOnes;
    
    std::vector<std::string> output(nrows * ncols, "aa");

    for(int k = 0; k < ones; k++){output[k] = "11";}
    for(int k = ones; k < ones + zeroOnes; k++){output[k] = "10";}
    for(int k = ones + zeroOnes; k < ones + zeroOnes + zeros; k++){output[k] = "00";}
    for(int k = ones + zeroOnes + zeros; k < output.size(); k++){output[k] = "01";}

    for(int k = 0; k < output.size(); k++){
        std::cout << output[k] << " ";
        if((k + 1) % ncols == 0){puts("");}
    }

    return 0;
}

#include <cstdio>
#include <vector>
#include <cmath>

int main(){

    int numRows, numCols; scanf("%d %d\n", &numRows, &numCols);
    const int primeGap(100);

    std::vector<std::vector<long> > numbers(numRows, std::vector<long>(numCols,0));

    long currentMax(0);
    for(int row = 0; row < numRows; row++){
        for(int col = 0; col < numCols; col++){
            scanf("%ld", &numbers[row][col]);
            if(numbers[row][col] > currentMax){currentMax = numbers[row][col];}
        }
    }

    long upperBound = currentMax + primeGap;
    bool * array = new bool[upperBound];
    array[0] = array[1] = 0; for(int k = 2; k < upperBound; k++){array[k] = 1;}
    for(long k = 0; k < sqrt(upperBound); k++){if(array[k]){for(int m = 2 * k; m < upperBound; m += k){array[m] = 0;}}}
    
    for(int row = 0; row < numRows; row++){
        for(int col = 0; col < numCols; col++){
            long diff(0);
            for(long num = numbers[row][col]; !array[num]; diff++, num++);
            numbers[row][col] = diff;
        }
    }


    long minMoves(numRows * numCols * primeGap);
    for(int row = 0; row < numRows; row++){
        long total(0);
        for(int col = 0; col < numCols; col++){total += numbers[row][col];}
        if(total < minMoves){minMoves = total;}
    }
    for(int col = 0; col < numCols; col++){
        long total(0);
        for(int row = 0; row < numRows; row++){total += numbers[row][col];}
        if(total < minMoves){minMoves = total;}
    }

    printf("%ld\n", minMoves);
    return 0;
}

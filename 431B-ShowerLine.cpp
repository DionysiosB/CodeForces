#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 5;

    std::vector<std::vector<long> >  happinessMatrix(N, std::vector<long>(N, 0));
    for(int row = 0; row < N; row++){for(int col = 0; col < N; col++){scanf("%ld", &happinessMatrix[row][col]);} scanf("\n");}
    //for(int row = 0; row < N; row++){for(int col = 0; col < N; col++){printf("%ld\t", happinessMatrix[row][col]);} printf("\n");}; puts("\n\n\n");

    std::vector<int> queue(N, 0); for(int k = 0; k < N; k++){queue[k] = k;}

    long currentMax(0);
    do{
        long result = happinessMatrix[queue[0]][queue[1]] + happinessMatrix[queue[1]][queue[0]];
        result += happinessMatrix[queue[1]][queue[2]] + happinessMatrix[queue[2]][queue[1]];
        result += 2 * (happinessMatrix[queue[2]][queue[3]] + happinessMatrix[queue[3]][queue[2]]);
        result += 2 * (happinessMatrix[queue[3]][queue[4]] + happinessMatrix[queue[4]][queue[3]]); 

        if(result > currentMax){currentMax = result;}
        //for(int k = 0; k < N; k++){printf("%d\t", queue[k]);}; printf("----> %ld\n", result);
    }while(std::next_permutation(queue.begin(), queue.end()));

    printf("%ld\n", currentMax);

    return 0;
}

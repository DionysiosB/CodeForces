#include <cstdio>
using namespace std;

int main(){
    const int dim = 3;
    long firstRow[3]; scanf("%ld %ld %ld",firstRow,  firstRow  + 1, firstRow  + 2);
    long secondRow[3];scanf("%ld %ld %ld",secondRow, secondRow + 1, secondRow + 2);
    long thirdRow[3]; scanf("%ld %ld %ld",thirdRow,  thirdRow  + 1, thirdRow  + 2);
    long firstSum  = firstRow[1]  + firstRow[2];
    long secondSum = secondRow[0] + secondRow[2];
    long thirdSum  = thirdRow[0]  + thirdRow[1];
    long total =  (firstSum + secondSum + thirdSum)/2;
    printf("%ld %ld %ld\n", total - firstSum, firstRow[1], firstRow[2]);
    printf("%ld %ld %ld\n", secondRow[0], total - secondSum, secondRow[2]);
    printf("%ld %ld %ld\n", thirdRow[0], thirdRow[1], total - thirdSum);
    return 0;
}

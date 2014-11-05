#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);

    long numSevens(-1), numFours(-1), minDigits(1e6);

    for(long testSevens = n / 7; testSevens >= 0; testSevens--){
        if((n - 7 * testSevens) % 4 != 0){continue;}
        long testFours = (n - 7 * testSevens) / 4;
        numSevens = testSevens; numFours = testFours; 
        minDigits = numSevens + numFours;
        break;
    }


    if(numSevens >= 0 && numFours >= 0){
        for(int k = 0; k < numFours; k++){printf("4");}
        for(int k = 0; k < numSevens; k++){printf("7");}
    }
    else{printf("-1");}
    puts("");

    return 0;
}

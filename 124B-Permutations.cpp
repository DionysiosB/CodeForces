#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n, k; scanf("%d %d\n", &n, &k);

    std::vector<int> perm(k); for(int p = 0; p < k; p++){perm[p] = p;}
    std::vector<std::vector<int> > numbers(n, std::vector<int>(k, 0));
    for(int p = 0; p < n; p++){
        for(int q = 0; q < k; q++){char temp; scanf("%c", &temp); numbers[p][q] = temp - '0';}
        scanf("\n");
    }

    long minDiff(1e10);

    do{
        long minNum(1e10), maxNum(0);

        for(int p = 0; p < n; p++){
            long current = 0;
            for(int q = 0; q < k; q++){current = 10 * current + numbers[p][perm[q]];}
            if(current < minNum){minNum = current;}
            if(current > maxNum){maxNum = current;}
        }

        long diff = maxNum - minNum;
        if(diff < minDiff){minDiff = diff;} 

    }while(next_permutation(perm.begin(), perm.end()));

    printf("%ld\n", minDiff);


    return 0;
}

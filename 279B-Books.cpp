#include <cstdio>

int main(){

    int n; long t; scanf("%d %ld", &n, &t);
    long *minutes = new long[n];
    long totalTime = 0;
    for(int k = 0; k < n; k++){scanf("%ld", minutes + k); totalTime += minutes[k];}

    long start(0), finish(0), currentSum(0), output(0);

    while(finish < n){
        currentSum += minutes[finish++];
        while(currentSum > t){currentSum -= minutes[start++];}
        if(output < finish - start){output = finish - start;}
    }

    printf("%ld\n", output);
    
    delete[] minutes;
    return 0;
}

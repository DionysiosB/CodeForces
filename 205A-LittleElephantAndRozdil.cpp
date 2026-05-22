#include <cstdio>

int main(){
    long n; scanf("%ld", &n);
    long *array = new long[n];
    for(long k = 0; k < n; k++){scanf("%ld", array + k);}

    long currentMin = 1000000001, minPos = -1;
    for(long k = 0; k < n; k++){
        if(array[k] < currentMin){currentMin = array[k]; minPos = k + 1;}
        else if(array[k] == currentMin){minPos = -1;}
    }
    if(minPos == -1){printf("Still Rozdil\n");}
    else{printf("%ld\n", minPos);}

    return 0;
}

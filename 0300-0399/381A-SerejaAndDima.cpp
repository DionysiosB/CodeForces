#include <cstdio>
#include <vector>

int main(){

    int n(0); scanf("%d", &n);
    int * array = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", array + k);}

    int left(0), right(n - 1);
    long score[2] = {0};

    for(int k = 0; k < n; k++){
        if(array[left] < array[right]){score[k % 2] += array[right--];}
        else{score[k % 2] += array[left++];}
    }

    printf("%ld %ld\n", score[0], score[1]);

    delete[] array;
    return 0;
}

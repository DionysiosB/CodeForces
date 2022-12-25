#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);

    long *first = new long[n];
    long *second = new long[n];

    long indexA(0), indexB(0);
    for(int k = 0; k < n; k++){
        scanf("%ld %ld", first + k, second + k);

        if(first[indexA] < second[indexB]){++indexA;}
        else if(first[indexA] > second[indexB]){++indexB;}
    }

    if(indexA < n/2){indexA = n/2;}
    else if(indexB < n/2){indexB = n/2;}

    for(int k = 0; k < indexA; k++){printf("1");}
    for(int k = indexA; k < n; k++){printf("0");}
    printf("\n");
    for(int k = 0; k < indexB; k++){printf("1");}
    for(int k = indexB; k < n; k++){printf("0");}

    delete[] first;
    delete[] second;
    return 0;
}

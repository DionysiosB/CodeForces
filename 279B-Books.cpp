#include <cstdio>

int main(){

    int n; long  t; scanf("%d %ld", &n, &t);
    long *minutes = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", minutes + k);}

    long totalTime(0); int totalBooks(0), maxTotalBooks(0);

    for(int start = 0; start < n; start++){
        totalTime = 0; totalBooks = 0;
        for(int k = start; k < n; k++){
            totalTime += minutes[k];
            if(totalTime > t){break;}
            ++totalBooks;
        }
        if(totalBooks > maxTotalBooks){maxTotalBooks = totalBooks;}
    }

    printf("%d\n", maxTotalBooks);
    return 0;
}

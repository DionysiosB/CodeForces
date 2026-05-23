#include <cstdio>

int main(){

    const int MAX = 5;
    const int MEMBERS = 3;
    int n, k; scanf("%d %d", &n, &k);
    int allowed = MAX - k;

    int count(0);
    for(int p = 0; p < n; p++){
        int temp; scanf("%d", &temp);
        count += (temp <= allowed);
    }

    printf("%d\n", count / MEMBERS);

    return 0;
}

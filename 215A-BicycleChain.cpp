#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    int *a = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", a + k);}

    int m; scanf("%d", &m);
    int *b = new int[m];
    for(int k = 0; k < m; k++){scanf("%d", b + k);}

    int ratio = 0, maxRatio = -1, output = 0, stopQ = n - 1;
    for(int p = m - 1; p >=0; p--){
        for(int q = 0; q <= stopQ; q++){
            if(b[p] % a[q] == 0){
                ratio = b[p] / a[q];
                if(ratio > maxRatio){maxRatio = ratio; output = 1;}
                else if(ratio == maxRatio){output++;}
                stopQ = q;
                break;
            }
        }
    }
    printf("%d\n", output);
    return 0;
}

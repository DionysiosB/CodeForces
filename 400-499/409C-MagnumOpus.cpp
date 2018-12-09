#include <cstdio>

int main(){

    const int N = 5;
    const int prop[N] = {1,1,2,7,4};

    int output(100);
    for(int k = 0; k < N; k++){
        int temp;
        scanf("%d ", &temp);
        if(output > temp / prop[k]){output = temp / prop[k];}
    }

    printf("%d\n", output);

    return 0;
}

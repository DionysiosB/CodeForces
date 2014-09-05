#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);

    bool output(1);

    if(n == 5){
        output = 0;

        int array[5] = {0};
        for(int k = 0; k < n; k++){
            int a(0), b(0); scanf("%d %d", &a, &b);
            ++array[a - 1]; ++ array[b - 1];
        }
        for(int k = 0; k < 5; k++){if(array[k] != 2){output = 1; break;}}
    }

    if(output){puts("WIN");} else{puts("FAIL");}

    return 0;
}

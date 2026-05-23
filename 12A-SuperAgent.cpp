#include <cstdio>

int main(){

    const int N = 3 * 3;
    bool buttons[N] = {0};
    
    int k(0);
    while(k < N){
        char temp; scanf("%c", &temp);
        if(temp == 'X'){buttons[k++] = 1;}
        else if (temp == '.'){buttons[k++] = 0;}
    }

    bool symmetric(1);
    for(int k = 0; k < N; k++){if(buttons[k] != buttons[N - 1 - k]){symmetric = 0; break;}}
    if(symmetric){puts("YES");} else{puts("NO");}
    return 0;
}

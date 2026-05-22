#include <cstdio>

int main(){

    int n(0); scanf("%d\n", &n);
    int top(0); scanf("%d\n", &top);

    bool possible(1);
    int first(0), second(0);
    for(int k = 0; k < n; k++){
        scanf("%d %d\n", &first, &second);
        if(first == top || first + top == 7 || second == top || second + top == 7){possible = 0; break;}
    }

    if(possible){puts("YES");} else{puts("NO");}
    return 0;
}

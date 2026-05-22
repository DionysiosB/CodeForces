#include <cstdio>
#include <cstdlib>

int main(){
    const int dim = 5; int input = 0, count = -1;
    while(!input){scanf("%d", &input);count++;};
    int row = count / dim, col = count % dim;
    printf("%d\n", abs(row - 2) + abs(col - 2));
    return 0;
}

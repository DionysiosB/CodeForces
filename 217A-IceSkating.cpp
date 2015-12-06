#include <cstdio>
#include <vector>

struct drift{int x, y; bool v; drift(int a, int b): x(a), y(b), v(0) {};};
std::vector<drift> array;


void search(int start, int L){
    if(array[start].v == 1){return;}
    array[start].v = 1;
    for(int p = 0; p < L; p++){
        if(array[p].x == array[start].x || array[p].y == array[start].y){search(p, L);}
    }
}



int main(){

    int n; scanf("%d", &n);
    for(int p = 0; p < n; p++){int f, g; scanf("%d %d",&f,&g); array.push_back(drift(f,g));}

    int components = 0;
    for(int p = 0; p < n; p++){
        if(array[p].v > 0){continue;}
        ++components;
        search(p, n);
    }

    printf("%d\n", components - 1);

    return 0;
}

#include <cstdio>
#include <algorithm>
#include <vector>

int main(){

    int n(0); scanf("%d", &n);
    int *array = new int[n];
    for(int k = 0; k < n; k++){scanf("%d", array + k);}

    bool done(0);
    std::vector<int> output;


    for(int a = 0; a < n - 2; a++){
        if(done){break;}
        for(int b = a + 1; b < n - 1; b++){
            if(done){break;}
            for(int c = b + 1; c < n; c++){
                if(array[c] == array[a] + array[b]){output.push_back(c); output.push_back(a); output.push_back(b); done = 1; break;}
                else if(array[b] == array[a] + array[c]){output.push_back(b); output.push_back(a); output.push_back(c); done = 1; break;}
                else if(array[a] == array[b] + array[c]){output.push_back(a); output.push_back(b); output.push_back(c); done = 1; break;}
            }
        }
    }

    if(done){printf("%d %d %d", 1 + output[0], 1 + output[1], 1 + output[2]);}
    else{puts("-1");}

    return 0;
}

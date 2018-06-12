#include <cstdio>
#include <vector>

int main(){
    
    int n(0); scanf("%d", &n);

    int temp(0), current(0), counter(0);
    std::vector<int> output;

    while(n--){

        scanf("%d", &temp);
        if(temp < 0){++counter;}

        if(counter >= 3){counter = 1; output.push_back(current); current = 1;}
        else{++current;}
    }
    output.push_back(current);

    printf("%ld\n", output.size());
    for(int k = 0; k < output.size(); k++){printf("%d ", output[k]);}
    puts("");

    return 0;
}

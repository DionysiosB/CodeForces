#include <cstdio>
#include <map>

int main(){
    int n; scanf("%d", &n);
    std::map<int, int> ids; 
    int temp = 0, output = 0;
    for(int k = 0; k < n; k++){
        scanf("%d", &temp);
        if(!temp){continue;}
        if(ids.find(temp) == ids.end()){ids[temp] = 1;}
        else{ids[temp]++;output++; if(ids[temp] > 2){output = -1;break;}}
    }
    printf("%d\n", output);
    return 0;
}

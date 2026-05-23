#include <cstdio>

int main(){
    int n; scanf("%d", &n);
    
    int temp[3] = {0};
    for(int k = 0; k < 3; k++){scanf("%d", temp + k );temp[k] %= 2;}

    int target = 0, index = 0;
    bool done = 0; 
    if(temp[0] == temp[1]){
        target = 1 - temp[0];
        if(temp[2] == target){index = 2; done = 1;} 
    }
    else{
        done = 1;
        if(temp[2] == temp[0]){index = 1;}
        else{index = 0;}
    }

    
    int current = 0;
    for(int k = 3; k < n && !done ; k++){
        scanf("%d", &current);
        if(current % 2 == target){index = k; break;}
    }

    printf("%d\n", index + 1);

    return 0;
}

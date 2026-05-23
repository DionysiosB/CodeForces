#include <cstdio>

int main(){

    int n(0); scanf("%d", &n);
    long *left  = new long[n - 1];
    long *right = new long[n - 1];
    long lastPoint(0), currentPoint(0);
    bool intersect(0);
    
    scanf("%ld", &lastPoint);
    for(int k = 0; k < n - 1; k++){
        scanf("%ld", &currentPoint);
        if(currentPoint < lastPoint){left[k] = currentPoint; right[k] = lastPoint;}
        else{left[k] = lastPoint; right[k] = currentPoint;}
        lastPoint = currentPoint;
    }

    for(long first = 0; first < n - 1; first++){
        if(intersect){break;}
        for(long second = 0; second < n - 1; second++){
            if(second == first){continue;}
            if(intersect){break;}
            if(left[first] < left[second] && left[second] < right[first] && right[first] < right[second]){intersect = 1; break;}
        }
    }

    if(intersect){puts("yes");}
    else{puts("no");}
    return 0;
}

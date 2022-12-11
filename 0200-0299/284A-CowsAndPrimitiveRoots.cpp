#include <cstdio>

int main(){

    int p(0); scanf("%d", &p);

    int primitiveRootCount(0);
    
    for(int x = 1; x < p; x++){
        bool isPrimitiveRoot(1);

        long polynomial = 1;
        for(int k = 1; k <= p - 2; k++){
            polynomial *= x; polynomial %= p;
            if(polynomial == 1){isPrimitiveRoot = 0; break;} 
        }

        if(isPrimitiveRoot){
            polynomial *= x; polynomial %= p;
            isPrimitiveRoot = (polynomial == 1);
        }

        if(isPrimitiveRoot){++primitiveRootCount;}

    }
    printf("%d\n", primitiveRootCount);
    return 0;
}

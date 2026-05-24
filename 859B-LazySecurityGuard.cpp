#include <cstdio>
#include <cmath>

int main(){
    
    long x; scanf("%ld", &x);
    long a = sqrt(x);
    long perimeter(0);
    
    if(a * a >= x){perimeter = 4 * a;}
    else if(a * (a + 1) >= x){perimeter = 4 * a + 2;}
    else if((a + 1) * (a + 1) >= x){perimeter = 4 * a + 4;}
    
    printf("%ld\n", perimeter);
    
    return 0;
}

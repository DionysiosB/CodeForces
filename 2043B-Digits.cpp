#include <cstdio>
#include <vector>
 
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; int d; scanf("%ld %d", &n, &d);
        std::vector<int> v(1, 1);
        if(d == 3 || d == 6 || d == 9 || n >= 3){v.push_back(3);}
        if(d == 5){v.push_back(5);}
        if(d == 7 || n >= 3){v.push_back(7);}
        if(d == 9 || (d == 3 && n >= 3) || (d == 6 && n >= 3)  || (n >= 6)){v.push_back(9);}
        for(int d: v){printf("%ld ", d);}
        puts("");
    }
    
}

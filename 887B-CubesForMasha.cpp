#include <cstdio>
#include <set>

int main(){
    
    const int S = 6;
    int n; scanf("%d", &n);
    std::set<int> a, b, c;
    for(long p = 0; p < S; p++){int x; scanf("%d", &x); a.insert(x);}
    if(n > 1){for(long p = 0; p < S; p++){int x; scanf("%d", &x); b.insert(x);}}
    if(n > 2){for(long p = 0; p < S; p++){int x; scanf("%d", &x); c.insert(x);}}
    
    int last(0);
    for(long p = 1; p < 1000; p++){
        
        if(p < 10){
            if(a.count(p) || b.count(p) || c.count(p)){last = p;}
            else{break;}
        }
        else if(p < 100){
            if(
                (a.count(p / 10) && b.count(p % 10)) || 
                (b.count(p / 10) && a.count(p % 10)) ||
                (a.count(p / 10) && c.count(p % 10)) || 
                (c.count(p / 10) && a.count(p % 10)) ||
                (b.count(p / 10) && c.count(p % 10)) || 
                (c.count(p / 10) && b.count(p % 10))
            ){last = p;}
            else{break;}
        }
        else{
            int d0 = p % 10;
            int d1 = (p / 10) % 10;
            int d2 = (p / 100);
            if(
                (a.count(d0) && b.count(d1) && c.count(d2)) || 
                (a.count(d0) && b.count(d2) && c.count(d1)) || 
                (a.count(d1) && b.count(d0) && c.count(d2)) || 
                (a.count(d1) && b.count(d2) && c.count(d0)) || 
                (a.count(d2) && b.count(d0) && c.count(d1)) || 
                (a.count(d2) && b.count(d1) && c.count(d0))
            ){last = p;}
            else{break;}
        }
    }
    
    printf("%d\n", last);
    
    return 0;
}

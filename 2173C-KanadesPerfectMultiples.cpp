#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
       long n, k; scanf("%ld %ld", &n, &k);
       std::set<long> s, w;
       for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
       std::vector<long> b;
       bool possible(true);
       while(possible && !s.empty()){
           long x = *s.begin();
           w.insert(x); b.push_back(x);
           for(long u = x; possible && u <= k; u += x){
               if(s.count(u)){s.erase(u); w.insert(u);}
               else if(!w.count(u)){possible = false;}
           }
       }
       
       if(possible){
           printf("%ld\n", b.size());
           for(long x : b){printf("%ld ", x);}
           puts("");
       }
       else{puts("-1");}
    }
    
}

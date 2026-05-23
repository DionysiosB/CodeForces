#include <cstdio>
#include <cstdio>
#include <vector>
#include <set>

int main(){
    
   long n, a, b; scanf("%ld %ld %ld", &n, &a, &b); 
   std::vector<long> v(n);
   std::set<long> s, A, B;
   for(long p = 0; p < n; p++){scanf("%ld", &v[p]); s.insert(v[p]);}
   
   bool possible(true);
   for(long p = 0; p < n; p++){
       if(s.count(v[p]) <= 0){continue;}
       s.erase(v[p]);
       if(s.count(a - v[p])){A.insert(v[p]); A.insert(a - v[p]); s.erase(a - v[p]);}
       else if(s.count(b - v[p])){B.insert(v[p]); B.insert(b - v[p]); s.erase(b - v[p]);}
       else if(v[p] == a - v[p]){A.insert(v[p]);}
       else if(v[p] == b - v[p]){B.insert(v[p]);}
       else{possible = false; break;}
   }
   
   if(possible){
       puts("YES");
       for(long p = 0; p < n; p++){printf("%d ", A.count(v[p]) ? 0 : 1);}
       puts("");
   }
   else{puts("NO");}
   
   return 0;
}

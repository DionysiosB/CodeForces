#include <cstdio>
#include <set>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
       long n; scanf("%ld", &n);
       std::set<long> s;
       for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
       //The answer is the smallest integer larger than s.size()
       //If the s.size() number is not in the set, we will keep increasing s.size() until we hit one of the elements
       //It is not possible to have more elements than the largest number
       long ans(0);
       for(long x : s){if(x >= s.size()){ans = x; break;}}
       printf("%ld\n", ans);
    }
    
}

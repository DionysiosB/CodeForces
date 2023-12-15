#include <cstdio>
#include <set>
 
int main(){
 
	long t; scanf("%ld", &t);
	while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long xk, yk; scanf("%ld %ld", &xk,&yk);
        long xq, yq; scanf("%ld %ld", &xq,&yq);

        std::set<std::pair<long, long> > s,t;
        s.insert(std::make_pair(xk + a, yk + b));
        s.insert(std::make_pair(xk - a, yk + b));
        s.insert(std::make_pair(xk + a, yk - b));
        s.insert(std::make_pair(xk - a, yk - b));
        s.insert(std::make_pair(xk + b, yk + a));
        s.insert(std::make_pair(xk - b, yk + a));
        s.insert(std::make_pair(xk + b, yk - a));
        s.insert(std::make_pair(xk - b, yk - a));

        t.insert(std::make_pair(xq + a, yq + b));
        t.insert(std::make_pair(xq - a, yq + b));
        t.insert(std::make_pair(xq + a, yq - b));
        t.insert(std::make_pair(xq - a, yq - b));
        t.insert(std::make_pair(xq + b, yq + a));
        t.insert(std::make_pair(xq - b, yq + a));
        t.insert(std::make_pair(xq + b, yq - a));
        t.insert(std::make_pair(xq - b, yq - a));


        long cnt(0);
        for(std::set<std::pair<long, long> >::iterator it = s.begin(); it != s.end(); it++){cnt += t.count(*it);}
        printf("%ld\n", cnt);
	}
 
}

#include<cstdio>
#include<set>
#include<map>
#include<algorithm>

int main(){

    long w, h, n; scanf("%ld %ld %ld\n", &w, &h, &n);
    std::map<int64_t, int64_t, std::greater<int64_t> > col, row; col[w] = 1; row[h] = 1; 
    std::set<int64_t> pc, pr; pc.insert(0); pc.insert(w); pr.insert(0); pr.insert(h);

    for(long p = 0; p < n; p++){
        char orientation; long cut; scanf("%c %ld\n", &orientation, &cut);
        if(orientation == 'V'){
            pc.insert(cut);
            std::set<int64_t>::iterator setIter = pc.find(cut);
            int64_t t2 = *(++setIter);
            int64_t t1 = *(--(--setIter));
            int64_t length = t2 - t1;
            --col[length]; if(col[length] <= 0){col.erase(length);}
            ++col[t2 - cut]; ++col[cut - t1];
        }
        else{
            pr.insert(cut);
            std::set<int64_t>::iterator setIter = pr.find(cut);
            int64_t t2 = *(++setIter);
            int64_t t1 = *(--(--setIter));
            int64_t length = t2 - t1;
            --row[length]; if(row[length] <= 0){row.erase(length);}
            ++row[t2 - cut]; ++row[cut - t1];
        }

        printf("%lld\n", (row.begin()->first)*(col.begin()->first));
    }

    return 0;
}

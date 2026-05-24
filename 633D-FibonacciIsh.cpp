#include <cstdio>
#include <vector>
#include <map>
#include <set>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n);
    std::map<ll, ll> ctm;
    std::set<ll> vs;
    ll zeros(0);

    for(ll p = 0; p < n; p++){
        scanf("%lld", &a[p]); 
        ++ctm[a[p]];
        vs.insert(a[p]);
        zeros += (a[p] == 0);
    }

    ll maxLength(zeros);
    for(std::set<ll>::iterator itx = vs.begin(); itx != vs.end(); itx++){
        for(std::set<ll>::iterator ity = vs.begin(); ity != vs.end(); ity++){
            ll left = *itx; ll right = *ity;
            if(left == 0 && right == 0){continue;}
            if(left == right && ctm[left] < 2){continue;}
            ll length(2); std::map<ll, ll> cur;
            --ctm[left]; --ctm[right]; ++cur[left]; ++cur[right];
            ll next = left + right;
            while(ctm.count(next) && ctm[next] > 0){--ctm[next]; ++cur[next]; ++length; left = right; right = next; next = left + right;}
            maxLength = (maxLength > length) ? maxLength : length;
            for(std::map<ll, ll>::iterator it = cur.begin(); it != cur.end(); it++){ctm[it->first] += it->second;}
        }
    }

    printf("%lld\n", maxLength);

    return 0;
}

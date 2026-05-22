#include <cstdio>
#include <stack>

int main() {
    
    long n; scanf("%ld", &n);
    
    std::stack<long> st;
    long ans(0);
    
    while (n--) {
        long x; scanf("%ld", &x);
        while (!st.empty()) {
            long cand = st.top() ^ x;
            ans = (ans > cand) ? ans : cand;
            if(st.top() > x){break;}
            st.pop();
        }

        st.push(x);
    }

    printf("%ld\n", ans);
    
    return 0;
}

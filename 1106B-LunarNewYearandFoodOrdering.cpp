    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    struct dish {
        int ind;
        int av;
        int cost;
    } d[100001];
     
    int links[100001];
     
    bool comp (dish A, dish B) {
        if (A.cost == B.cost) {
            if (A.ind == B.ind)
                return A.av < B.av;
            else return A.ind < B.ind;
        } else
            return A.cost < B.cost;
    }
     
    int main () {
        //freopen("in", "r", stdin);
        int n, q;
        scanf("%d %d", &n, &q);
     
        for (int i = 1; i <= n; i++) {
            scanf("%d", &d[i].av);
            d[i].ind = i;
        }
     
        for (int i = 1; i <= n; i++) {
            scanf("%d", &d[i].cost);
        }
     
        sort (d + 1, d + n + 1, comp);
     
        for (int i = 1; i <= n; i++) {
            links[d[i].ind] = i;
        }
     
        int chpind = 1;
        for (int i = 0; i < q; i++) {
            int typ, cnt;
            long long cst = 0;
            scanf("%d %d", &typ, &cnt);
            int dsh = links[typ];
     
            //cout << "I WANT " << d[dsh].av << " " << d[dsh].cost << '\n';
            if (d[dsh].av <= cnt) {
                cnt -= d[dsh].av;
                cst += ((long long) d[dsh].av) * d[dsh].cost;
                d[dsh].av = 0;
     
                while (cnt > 0 && chpind <= n) {
                    //cout << chpind << ": " << d[chpind].av << " " << d[chpind].cost << '\n';
                    if (d[chpind].av == 0)
                        chpind++;
                    else {
                        if (d[chpind].av <= cnt) {
                            cnt -= d[chpind].av;
                            cst += ((long long) d[chpind].cost) * d[chpind].av;
                            d[chpind].av = 0;
                            chpind++;
                        } else {
                            cst += ((long long) d[chpind].cost) * cnt;
                            d[chpind].av -= cnt;
                            cnt = 0;
                        }
                    }
                }
     
                if (cnt > 0)
                    cst = 0;
            } else {
                d[dsh].av -= cnt;
                cst = ((long long) cnt) * d[dsh].cost;
            }
     
            printf ("%I64d\n", cst);
        }
    }

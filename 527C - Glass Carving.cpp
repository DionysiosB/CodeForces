#include<set>
#include<cstdio>
using namespace std;
int main(void)
{
    int h,w,q;
    scanf("%d %d %d",&w,&h,&q);
    set<int> y;
    set<int> x;
    multiset<int> len_x;
    multiset<int> len_y;
    x.insert(0);
    x.insert(w);
    y.insert(0);
    y.insert(h);
    len_x.insert(w);
    len_y.insert(h);
    char s[2];
    int l;
    while(q--)
    {
        scanf("%s %d",s,&l);
        if(s[0]=='H')
        {
            y.insert(l);
            set<int>::iterator it=y.find(l);
            int l1=*(++it);
            --it;
            l1-=*it;
            int l2=*(--it);
            ++it;
            l2=*it-l2;
            len_y.insert(l1);
            len_y.insert(l2);
            multiset<int>::iterator itm=len_y.find(l1+l2);
            len_y.erase(itm);
        }
        else
        {
            x.insert(l);
            set<int>::iterator it=x.find(l);
            int l1=*(++it);
            --it;
            l1-=*it;
            int l2=*(--it);
            ++it;
            l2=*it-l2;
            len_x.insert(l1);
            len_x.insert(l2);
            multiset<int>::iterator itm=len_x.find(l1+l2);
            len_x.erase(itm);
        }
        long long int a=*len_x.rbegin();
        long long int b=*len_y.rbegin();
        printf("%I64d\n",a*b);
    }

    len_x.clear();
    len_y.clear();
    x.clear();
    y.clear();
    return 0;
}
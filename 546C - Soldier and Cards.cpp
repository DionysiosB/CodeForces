#include<queue>
#include<cstdio>
using namespace std;
queue<int> a,b;
int main(void)
{
    int n;
    scanf("%d",&n);
    int n1;
    scanf("%d",&n1);
    int temp;
    while(n1--)
    {
        scanf("%d",&temp);
        a.push(temp);
    }
    int n2;
    scanf("%d",&n2);
    while(n2--)
    {
        scanf("%d",&temp);
        b.push(temp);
    }
    int ans=1000000;
    int kaka=0;
    while(kaka<ans)
    {
        if(a.empty()==true)
        {
            printf("%d 2",kaka);
            return 0;
        }
        if(b.empty()==true)
        {
            printf("%d 1",kaka);
            return 0;
        }
        int aa=a.front();
        int bb=b.front();
        a.pop();
        b.pop();
        if(aa>bb)
        {
            a.push(bb);
            a.push(aa);
        }
        else
        {
            b.push(aa);
            b.push(bb);
        }
        ++kaka;
    }
    puts("-1");
    return 0;
}
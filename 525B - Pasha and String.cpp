#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;
int kaka[500002]={0};
char s[300002];
char temp[500002];
set<int> arr;
set<int>::iterator it;
int main(void)
{
    int i,j,n,len;
    scanf("%s",s+1);
    len=strlen(s+1);
    scanf("%d",&n); 
    for(i=0;i<n;++i)
    {
        scanf("%d",&j);
        kaka[j]++;
        arr.insert(j);
    }   
    
    for(i=1;i<*arr.begin();++i)
        temp[i]=s[i];

    for(i=len-*arr.begin()+2;i<=len;++i)
        temp[i]=s[i];
        
    it=arr.begin();

    int lala=0;
    while(it!=arr.end())
    {
        ++it;
        if(it==arr.end())
        {
            --it;
            if((kaka[*it]+lala)%2==0)
            {
                for(i=*it;i<=len-*it+1;++i)
                    temp[i]=s[i];
            }
            else
            {
                j=*it;
                for(i=len-*it+1;i>=*it;--i)
                    temp[j++]=s[i];
            }               
            break;
        }
        int next=*it;
        --it;
        if((kaka[*it]+lala)%2==0)
        {
            for(i=*it;i<next;++i)
                temp[i]=s[i];
            for(i=len-next+2;i<=len-*it+1;++i)
                temp[i]=s[i];
        }   
        else
        {
            j=*it;
            for(i=len-*it+1;i>len-next+1;--i)
                temp[j++]=s[i];
            j=len-next+2;
            for(i=next-1;i>=*it;--i)
                temp[j++]=s[i];
        }
        lala+=kaka[*it];
        ++it;
    }
    temp[len+1]='\0';
    puts(temp+1);
    arr.clear();
    return 0;
}
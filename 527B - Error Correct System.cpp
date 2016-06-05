#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
char t[200001],s[200001];
vector<int> arr[26][26];
int main(void)
{
    int n,i1,i2;
    scanf("%d",&n);
    scanf("%s %s",s,t);
    int flag=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]==t[i])
            continue;
        else
        {
            ++flag;
            if(flag==1)
                i1=i;
            if(flag==2)
                i2=i;
            arr[s[i]-'a'][t[i]-'a'].push_back(i);
        }   
    }
    free(s);
    free(t);
    if(flag==0)
    {
        printf("0\n-1 -1");
        return 0;
    }
    if(flag==1)
    {
        printf("1\n-1 -1\n");
        return 0;
    }

    int kaka=0;
    for(int i=0;i<26;++i)
    {
        for(int j=0;j<26;++j)
        {
            if(i==j)
                continue;
            if(arr[i][j].size()>0)
            {
                if(arr[j][i].size()>0)
                {
                    kaka=1;
                    i1=arr[i][j][0];
                    i2=arr[j][i][0];
                    break;
                }
                for(int k=0;k<26;++k)
                {
                    if(arr[j][k].size()>0)
                    {
                        i1=arr[j][k][0];
                        i2=arr[i][j][0];                        
                        kaka=2;
                        break;
                    }
                }
            }           
        }
        if(kaka==1)
            break;
    }
    if(kaka==1)
    {
        printf("%d\n",flag-2);
        printf("%d %d",i1+1,i2+1);      
    }
    else if(kaka==2)
    {
        printf("%d\n",flag-1);
        printf("%d %d",i1+1,i2+1);
    }
    else
    {
        printf("%d\n",flag);
        printf("%d %d\n",i1+1,i2+1);
    }
    
    return 0;
}
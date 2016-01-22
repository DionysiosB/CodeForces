#include <string.h>
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>  
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime> 
#include <assert.h>
#define pi 3.14159
#define mod 1000000007
using namespace std;
long long int a[500000];
int main() 
{
	long long int n = 0,m = 0,a = 0,need_m = 0,need_n = 0,total_need = 0;
	cin>>n>>m>>a;
	if(n%a==0)
	{
		need_n = need_n + (n/a);
	}
	else
	{
		need_n = need_n + ((n/a)+1);
	}
	if(m%a == 0)
	{
		need_m = need_m + (m/a);
	}
	else
	{
		need_m = need_m + ((m/a)+1);
	}
	total_need = (need_n * need_m);
	cout<<total_need;
	/*if(a>=n && a>=m)
	{
		need = 1;
		cout<<need;
	}
	else if(a>=n && a<m)
	{
		if(m%a==0)
		{
			need = need + ((m/a)-1);
		}
		else
		{
			need = need + (m/a);
		}
		cout<<need;
	}
	else if(a<n && a>=m)
	{
		need++;
		if(n%a==0)
		{
			need = need + ((n/a)-1);
		}
		else
		{
			need = need + (n/a);
		}
		cout<<need;
	}
	else
	{
		if(n%a == 0)
		{
			need = need + (n/a);
		}
		else
		{
			need = need + ((n/a)+1);
		}

		if(m%a == 0)
		{
			need = need + (m/a);
		}
		else
		{
			need = need + ((m/a)+1);
		}
		cout<<need;
	}*/
	return 0;
}

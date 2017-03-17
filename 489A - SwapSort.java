//http://codeforces.com/contest/489/problem/A
import java.util.Scanner;
public class codeforces
{
    public static void main(String arg[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;++i)
            arr[i]=s.nextInt();
        int ans[][]=new int[n][2];
        int len=0;
        for(int i=0;i<n-1;++i)
        {
            int idx=i+1;
            int min=arr[i+1];
            
            for(int j=i+2;j<n;++j)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    idx=j;
                }
            }
            if(arr[i]<=min)
                continue;
            ans[len][0]=i;
            ans[len][1]=idx;
            ++len;
            arr[idx]^=arr[i];
            arr[i]^=arr[idx];
            arr[idx]^=arr[i];
        }
        System.out.println(len);
        for(int i=0;i<len;++i)
            System.out.println(ans[i][0]+" "+ans[i][1]);
    }
}
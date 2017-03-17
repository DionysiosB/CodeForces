import java.util.Scanner;
public class solution
{
	public static void main(String arg[])
	{
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int arr[]=new int[n+1];
		for(int i=0;i<n;++i)
		{
			int temp=s.nextInt();
			arr[temp]=i+1;
		}
		int ans=1,temp=1;
		for(int i=2;i<=n;++i)
		{
			if(arr[i]>arr[i-1])
				temp++;
			else
			{
				ans=Math.max(temp,ans);
				temp=1;
			}
		}
		ans=Math.max(temp,ans);
		System.out.println(n-ans);
	}
}
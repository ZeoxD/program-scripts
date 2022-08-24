#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define sc3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define pf(x) printf("%d",x)
#define pf2(x,y) printf("%d %d",x,y)
#define pf3(x,y,z) printf("%d %d %d",x,y,z)
#define fr(i,x,n) for(int i=x;i<n;i++)
#define fre(i,x,n) for(int i=x;i<=n;i++)
#define fb(i,x,n) for(int i=n-1;i>=x;i--)
#define fbe(i,x,n) for(int i=n;i>=x;i--)
#define pfn() printf("\n")
#define pfs() printf(" ")
#define pb push_back
#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)
#define mod 1000000007
long long cnt(long long int x)
{
	return x*(x-1)/2;
}
int dp[21][21][21][21][4];
int solve(int a,int b,int c,int d,int prev)
{
	if(dp[a][b][c][d][prev]!=-1)
		return dp[a][b][c][d][prev];
	else if(a==0&&b==0&&c==0&&d==0)
	{
		dp[a][b][c][d][prev]=1;
		return dp[a][b][c][d][prev];
	}
	long long ans = 0;
	if(prev==0)
	{
		if(b!=0)
		ans = (ans+ solve(a,b-1,c,d,1))%mod;
		if(c!=0)
		ans = (ans+ solve(a,b,c-1,d,2))%mod;
		if(d!=0)
		ans = (ans+ solve(a,b,c,d-1,3))%mod;
	}
	else if(prev==1)
	{
		if(a!=0)
		ans = (ans+ solve(a-1,b,c,d,0))%mod;
		if(c!=0)
		ans = (ans+ solve(a,b,c-1,d,2))%mod;
		if(d!=0)
		ans = (ans+ solve(a,b,c,d-1,3))%mod;
	}
	else if(prev==2)
	{
		if(a!=0)
		ans = (ans+ solve(a-1,b,c,d,0))%mod;
		if(b!=0)
		ans = (ans+ solve(a,b-1,c,d,1))%mod;
		if(d!=0)
		ans = (ans+ solve(a,b,c,d-1,3))%mod;
	}
	else
	{
		if(a!=0)
		ans = (ans+ solve(a-1,b,c,d,0))%mod;
		if(b!=0)
		ans = (ans+ solve(a,b-1,c,d,1))%mod;
		if(c!=0)
		ans = (ans+ solve(a,b,c-1,d,2))%mod;	
	}
	dp[a][b][c][d][prev]=ans;
	return ans;
}
void solve(string input,string output)
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	memset(dp,-1,sizeof(dp));
	long long ans = 0;
	if(a!=0)
		ans = (ans+ solve(a-1,b,c,d,0))%mod;
	if(b!=0)
		ans = (ans+ solve(a,b-1,c,d,1))%mod;
	if(c!=0)
		ans = (ans+ solve(a,b,c-1,d,2))%mod;
	if(d!=0)
		ans = (ans+ solve(a,b,c,d-1,3))%mod;
	cout<<ans;
}
int main()
{
	solve("in00.txt","out00.txt");
 
	return 0;
}
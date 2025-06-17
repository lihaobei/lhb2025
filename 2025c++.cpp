#include <bits/stdc++.h>
#define LOCAL
#define int long long
#define ld long double
#define ull unsigned long long

#define mk make_pair
#define vi vector<int>
#define PI pair<int,int>
#define dg priority_queue<int,vector<int> >
#define xg priority_queue<int,vector<int>,greater<int> >

#define co const
#define ff  first
#define ss  second
#define il inline
#define re register
#define ls(p) p<<1
#define rs(p) p<<1|1
#define pb push_back
#define ch(i) (i-'a')
#define bit(x) (x&-x)
#define md(x,y) (x+y)>>1
#define all(x) x.begin(),x.end()
#define swap(a,b) a^=b,b^=a,a^=b
#define sort_(a,n) sort(a+1,a+n+1)
#define m(a,x) memset(a,x,sizeof a)
#define abs(x) ((x^(x>>63))-(x>>63))
#define keep(n) fixed<<setprecision(n)
#define dop(i,a,n) for(int (i)=(n); (i)>=(a); (i)--)
#define rep(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define cios cin.tie(0),cout.tie(0),ios::sync_with_stdio(false)
#define fre(k) freopen(k".in","r",stdin),freopen(k".out","w",stdout)

#define ps puts("")
#define kg cout<<" "
#define db(x) cout<<#x<<'='<<x<<"\n"
#define pes {puts("Yes"); return 0;}
#define pno {puts("No"); return 0;}
#define pfu {puts("-1"); return 0;}
#define dbgg cout<<"-------------------------\n"
#define debug(x,n) for(int i=1; i<=(n); i++) cout<<x[i]<<" "

using namespace std;
namespace ly{
    namespace IO{
        #ifndef LOCAL
            coexpr auto maxn=1<<20;
            char in[maxn],out[maxn],*p1=in,*p2=in,*p3=out;
            #define getchar() (p1==p2&&(p2=(p1=in)+fread(in,1,maxn,stdin),p1==p2)?EOF:*p1++)
            #define flush() (fwrite(out,1,p3-out,stdout))
            #define putchar(x) (p3==out+maxn&&(flush(),p3=out),*p3++=(x))
            class Flush{public:~Flush(){flush();}}_;
        #endif
        namespace usr{
            template<typename type>
            il type read(type &x){
                x=0;bool flag(0);char ch=getchar();
                while(!isdigit(ch)) flag^=ch=='-',ch=getchar();
                while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^48),ch=getchar();
                return flag?x=-x:x;
            }
            template<typename type>
            il void write(type x){
                x<0?x=-x,putchar('-'):0;
                static short Stack[50],top(0);
                do Stack[++top]=x%10,x/=10;while(x);
                while(top) putchar(Stack[top--]|48);
            }
            il char read(char &x){do x=getchar();while(isspace(x));return x;}
            il char write(co char &x){return putchar(x);}
            il void read(char *x){static char ch;read(ch);do *(x++)=ch;while(!isspace(ch=getchar())&&~ch);}
            template<typename type>il void write(type *x){while(*x)putchar(*(x++));}
            il void read(string &x){static char ch;read(ch),x.clear();do x+=ch;while(!isspace(ch=getchar())&&~ch);}
            il void write(co string &x){for(int i=0,len=x.length();i<len;++i)putchar(x[i]);}
            template<typename type,typename...T>il void read(type &x,T&...y){read(x),read(y...);}
            template<typename type,typename...T>
            il void write(co type &x,co T&...y){write(x),putchar(' '),write(y...),sizeof...(y)^1?0:putchar('\n');}
            template<typename type>
            il void put(co type &x,bool flag=1){write(x),flag?putchar('\n'):putchar(' ');}
        }
        #ifndef LOCAL
            #undef getchar
            #undef flush
            #undef putchar
        #endif
    }using namespace IO::usr;
}using namespace ly::IO::usr;
const int N=1e5+10;
const int P=998244353;
const int INF=0x3f3f3f3f3f3f3f3f;
const int eps=1e-6;
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;}
int gcd(int x,int y){return y?gcd(y,x%y):x;}
int lcm(int x,int y){return x/gcd(x, y)*y;}
int ksm(int a,int b){int ans=1;for(;b;a=(a*a)%P,b>>=1)if(b&1)ans=(ans*a)%P;return ans;}
int n;
signed main(){
    
    return 0;
}
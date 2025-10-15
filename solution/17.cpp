#include<cstdio>
#include<cmath>
typedef unsigned long long ull;
typedef unsigned uint;
const uint M=1e6+5;
ull N;const uint ANS[11]={0,0,0,1,1,2,2,3,3,6,8};
uint B,n4,top,pri[M],F0[M],F1[M],G0[M],G1[M],SF[M],SG[M];
inline ull Div(const ull&n,const ull&m){
	return double(n)/m;
}
inline ull min(const ull&a,const ull&b){
	return a>b?b:a;
}
inline uint DFS(const ull&n,uint k,const ull&phi){
    const ull&T=Div(N,n);
    const uint&g=int(n*1./phi),&R=min(Div((g+1)*phi,(g+1)*phi-n),min(ull(B),T));
	uint ans=0;
	if(k>top)ans=T<=B?0:g*phi*(SF[n]-SG[B]);
	else if(pri[k]>T)ans=0;
	else if(pri[k]<=R)ans=g*phi*((n<=B?SF[n]:SG[T])-SG[R])+(g+1)*phi*(SG[R]-SG[pri[k-1]]);
	else ans=g*phi*((n<=B?SF[n]:SG[T])-SG[pri[k-1]]);
	for(;k<=top;++k){
		const uint&p=pri[k],&w=p<=R?g+1:g;if(1ull*p*p>T)break;
		for(ull x=n,tp=phi*(p-1);x*p<=N;tp*=p)ans+=DFS(x*=p,k+1,tp)+w*tp;
		ans-=w*phi*(p-1);
	}
	return ans;
}
signed main(){
	scanf("%llu",&N);
	if(N<=10)return!printf("%d",ANS[N]);B=sqrt(N);n4=sqrt(B);
	for(uint i=1;i<=B;++i){
		const ull&w=Div(N,i);
		F0[i]=w-1;F1[i]=w*(w+1)/2-1;
		G0[i]=i-1;G1[i]=i*(i+1ull)/2-1;
	}
	for(uint p=2;p<=n4;++p)if(G0[p]!=G0[p-1]){
		const uint&lim=Div(B,p),&S0=G0[p-1],&S1=G1[p-1];pri[++top]=p;
		for(uint k=1;k<=lim;++k){
			F0[k]-=F0[k*p]-S0;F1[k]-=p*(F1[k*p]-S1);
		}
		for(uint k=lim+1;k<=B;++k){
			const uint&x=Div(N,k*p);F0[k]-=G0[x]-S0;F1[k]-=p*(G1[x]-S1);
		}
		for(uint k=B,e=lim;e>=p;--e)for(uint x=e*p,V0=G0[e]-S0,V1=p*(G1[e]-S1);k>=x;--k){
			G0[k]-=V0;G1[k]-=V1;
		}
	}
	for(uint p=n4+1;p<=B;++p)if(G0[p]!=G0[p-1]){
		const uint&lim=Div(B,p),&T=Div(N,1ll*p*p),&S0=G0[p-1],&S1=G1[p-1];pri[++top]=p;
		for(uint k=1;k<=lim;++k){
			F0[k]-=F0[k*p]-S0;F1[k]-=p*(F1[k*p]-S1);
		}
		for(uint k=lim+1;k<=T;++k){
			const uint&x=Div(N,k*p);F0[k]-=G0[x]-S0;F1[k]-=p*(G1[x]-S1);
		}
	}
	for(uint i=1;i<=B;++i)SF[i]=F1[i]-F0[i],SG[i]=G1[i]-G0[i];
	printf("%u",N*(N+1)/2-1-DFS(1,1,1));
}

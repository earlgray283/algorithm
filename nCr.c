#define MOD 1000000007
long long modpow(long long a,long long n){
    long long res=1;
    while(n>0){
        if(n&1){res*=a;res%=MOD;}
        a*=a;a%=MOD;
        n>>=1;
    }
    return res;
}   
long long nCr(long long n,long long r){
    long long res,x,y;
    res=x=y=1;
    for(int i=n;i>n-r;i--){x*=i;x%=MOD;}
    for(int i=r;i>0;i--){y*=i;y%=MOD;}
    return x*modpow(y,MOD-2)%MOD;
}
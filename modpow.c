#define MOD (int)1e9+7
typedef long long ll;
ll modpow(ll a,ll n){
    ll res=1;
    while(n>0){
        if(n&1){res*=a;res%=MOD;}
        a*=a;a%=MOD;
        n>>=1;
    }
    return res;
}   

/*  ---------説明---------  */
/*
    名称：二分累乗法(繰り返し二乗法)　～Modular Exponentiaton～
    4:if(n&1)
        nの0ビット目に1が立っているかどうかを判定している。
        ビットが立っていればresに掛け算をしても許される(詳細はノート)
    5:a=a*a%mod
        2^4=2^2^2、2^8=2^4^2、2^16=2^8^2を利用している。(詳細はノート)
    6:n=n>>1
        nを右に1シフトしている。>>は右シフトで<<は左シフト
        こうすることによって、4行目が実現できる。
*/

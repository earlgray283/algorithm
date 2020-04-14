#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#define max(x,y) (x)>(y)?(x):(y)
#define min(x,y) (x)<(y)?(x):(y)
#define rep(i,n) for((i)=0;(i)<(n);(i)++)
#define reps(i,n,k) for((i)=0;(i)<(n);(i)+=(k));
#define MOD ((int)1e9+7)
#define INF INFINITY
typedef long long ll;
typedef unsigned long long ull;
typedef struct pair_{int x,y;}pair_t;
void swap(int *x, int *y){int t=*x;*x=*y;*y=t;}
void debug(char *f, ...){va_list a;va_start(a,f);vfprintf(stderr,f,a);va_end(a);}
int asc_cmp(const void *x, const void *y){int X=*((int*)x),Y=*((int*)y);if(X<Y)return -1;else if(X>Y)return 1;else return 0;}
int desc_cmp(const void *x, const void *y){int X=*((int*)x),Y=*((int*)y);if(X<Y)return 1;else if(X>Y)return -1;else return 0;}

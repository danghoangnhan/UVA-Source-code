#include <cstdio>  
#include <cstring>  
#include <iostream>  
#include <algorithm>  
  
using namespace std;  
  
const int size = 25;  
int n;  
int a[size], b[size];  

int main() {  
    int test; 
	freopen("1594.in","r",stdin);
	freopen("1594.out","w",stdout); 
    scanf("%d", &test);  
    while( test -- ) {  
        scanf("%d", &n);  
        for(int i=0; i<n;i++)  
            scanf("%d", &a[i]);    
  
        int fg = 1;  
        for ( int cnt = 0; ; cnt ++) {  
            if( cnt >= 1000)  { fg = 0; break; }  
            for ( int i = 1; i < n; i++ ) {  
                b[i-1] = abs(a[i]-a[i-1]);  
            }  
            b[n-1] = abs(a[n-1]-a[0]);  
  
            bool zero = 1;  
            for ( int i = 0; i < n; i++ ) {  
                if(b[i] != 0) zero = 0;   
                a[i] = b[i];  
            }  
            if(zero) break;  
        }  
        if( fg ) puts("ZERO");  
        else puts("LOOP");  
    }  
  
    return 0;  
}  


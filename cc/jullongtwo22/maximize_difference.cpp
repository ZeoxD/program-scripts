#include<stdio.h>
#include<stdlib.h>

int main() {
    int tt;
    scanf("%d", &tt);
    while(tt--) {
        int n, m;
        scanf("%d%d",&n, &m);
        int a, b, maxv = 0;
        int vala, valb;
        
        if(m<2*n) {
            printf("%d %d\n", m, m);
            continue;
        }

        for(int i = n; i<= 2*n; i++) {
            a = i;
            b = m-(m%i);
            if(maxv <= abs(a-b)) {
                maxv = abs(a-b);
                vala = a;
                valb = b;
            }
        }
        
        printf("%d %d\n", vala, valb);
        
    }
    
	return 0;
}

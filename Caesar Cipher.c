#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    int n;
    char s[101];
    int k;
    scanf("%d %s %d", &n, s, &k);
    k %= 26;
    for (i=0; i<n; i++) {
        if ((s[i] >= 'A') && (s[i] <= 'Z')) {
            if ((s[i]+k >= 'A') && (s[i]+k <= 'Z'))
                printf("%c", s[i]+k);
            else
                printf("%c", 'A'+(((s[i])+k)-'Z')-1);
        }
        else {
            if ((s[i] >= 'a') && (s[i] <= 'z'))
                if (((s[i])+k >= 'a') && ((s[i])+k <= 'z'))
                    printf("%c", (s[i])+k);
                else
                    printf("%c", 'a'+(((s[i])+k)-'z')-1);
            else
                printf("%c", s[i]);
        }
    }
    return 0;
}

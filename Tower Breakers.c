#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int testcase = 0; testcase < n; testcase++) {
        int num_towers;
        int height;
        scanf("%d %d", &num_towers, &height);
        
        if(height == 1 || num_towers % 2 == 0)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}

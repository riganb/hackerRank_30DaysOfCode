#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    int j;
    double e;
    char string[100];
    
    scanf("%d %lf %[^\n]s", &j, &e, string);
    printf("%d\n%.1lf\n%s%s", (i+j), (d+e), s, string);
    
    return 0;
}
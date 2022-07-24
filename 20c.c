#include <stdio.h>

int main() {
    int a,b;
    double c, s;
    scanf("%d %d %lf", &a, &b, &c);
    printf("%.2lf", (b-a)*c); 
    return 0;
}
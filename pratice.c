#include <stdio.h>
int main(){
    int x,y,z;
    x=1;
    y=1;
    z=1;
    z = ++x||++y && ++z;
    printf("x=%d, y=%d, z=%d",x,y,z);
    printf("%d" ,sizeof(x));
    return 0;
}
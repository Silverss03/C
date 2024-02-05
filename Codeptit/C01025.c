#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4 ;
    scanf("%d%d%d%d\n%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) ;
    int length, width, length_max, length_min, width_max, width_min ;
    if (x2 >= x4) length_max = x2 ;
    else length_max = x4 ;
    if (x1 <= x3) length_min = x1 ;
    else length_min = x3 ;
    if (y2 >= y4) width_max = y2 ;
    else width_max = y4 ;
    if (y1 <= y3) width_min = y1 ;
    else width_min = y3 ;
    length = length_max - length_min ;
    width = width_max - width_min ;
    if(length > width) printf("%d", length * length) ;
    else printf("%d", width * width) ;
}
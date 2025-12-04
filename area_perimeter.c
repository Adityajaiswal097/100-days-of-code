#include <stdio.h>
int main(){
    int length,breath,perimeter,area;
    printf("enter the length of rectangle");
    scanf("%d",&length);
    printf("enter the breath of rectangle");
    scanf("%d",&breath);
    perimeter=2*(length+breath);
    area=length*breath;
    printf("the perimeter of rectangle is :%d\n",perimeter);
    printf("the area of rectangle is :%d\n",area);
return 0;
}

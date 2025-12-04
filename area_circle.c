#include <stdio.h>
int main(){
    int radius,circumference,area;
    

    printf("enter the radius of circle");
    scanf("%d",&radius);
    float pi=3.14;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("the circumfermnce of circle is:%d\n",circumference);
    printf("the area of circle is :%d\n",area);



return 0;
}

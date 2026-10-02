 #include <stdio.h>
int main()
{ 
    int r;
    float pi=3.14;
    float area;
    printf("Enter the radius :");
    scanf("%d",&r);
     area=pi*r*r;
    printf("Area of the circle of radius %d is %f",r,area);
    return 0;
}

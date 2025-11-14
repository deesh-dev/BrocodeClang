#include <stdio.h>
#include <math.h>

int main(void){
    printf("Enter the radius: ");
    double radius;
    scanf("%lf", &radius);

    double area = M_PI * pow(radius, 2);
    double volume =  4 / 3.0 * M_PI * pow(radius, 3);
    double surfaceArea = 4 * M_PI * pow(radius, 2);

    printf("Area of circle having radius %.2lf : %.2lf\n",radius, area);
    printf("Surface area of a sphere having radius %.2lf: %.2lf\n",radius,surfaceArea);
    printf("Volume of sphere having radius %.2lf : %.2lf\n", radius, volume);

    return 0;
}
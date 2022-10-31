#include <stdio.h>
int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: \n");
    scanf("%f", &radius);

  
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("Diameter of circle = %f \nCircumference of circle = %f \nArea of circle = %f ", diameter,circumference,area);
    
    // This can be solved by import Math lib (#include <Math.h>) then (M_PI) 

    
}

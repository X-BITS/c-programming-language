#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    
    if(a == 0 && b == 0 && c == 0)
    {
        printf("Wrong configuration no root to search for 0 = 0\n");
        return 0;
    }
    else if(a == 0 && b == 0)
    {

        printf("Wrong configuration %d <> 0\n");
        return 0;

    }else if(a == 0)
    {
        root1 = -c/b;
        printf("The root of bX + C = 0: %.2f\n", root1);
        return 0;
    }else
    {
        discriminant = (b * b) - (4 * a * c);
    
        if(discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);

            printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
        }
        else if(discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
        }
        else if(discriminant < 0)
        {   
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
        }
}

    

    return 0;
}
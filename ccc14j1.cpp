#include <cstdio>

int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    if(x + y + z == 180)
    {
        if(x == y && y == z)
        {
            printf("Equilateral");
        }
        else if(x == y || y == z || x == z)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Error");
    }
    
}
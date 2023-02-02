#include <stdio.h>

// ---------declarar funcion-------

int areaTriangulo(int base, int altura);

int main()
{
    int base, altura, area, area2;
    printf("\nIngrese la base : ");
    scanf("%d", &base);
    printf("\nIngrese la altura : ");
    scanf("%d", u & altura);
    area = areaRectangulo(base, altura);
    area2 = areaTriangulo(3, 4);
    printf("\nEl área del triangulo ingresado es  :%d", area);
    printf("\nEl área del triangulo interno es es  :%d", area2);

    return 0;
}

// --- funcionamiento fn ----
int areaRectangulo(int base, int altura)
{
    int area;
    area = base * altura;
    return area;
};

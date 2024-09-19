#include <stdio.h>
#include <math.h>

int main(){
	printf("Hello, World!\n");
	double side_a, side_b, side_c, triangle, circle, trapezoid, square, rectangle;

	printf("Insert the side A:\n");
	scanf("%lf", &side_a);

	printf("Insert the side B:\n");
	scanf("%lf", &side_b);

	printf("Insert the side C:\n");
	scanf("%lf", &side_c);

	triangle = side_a * side_c * 0.5;
	circle = 3.14159 * pow(side_c, 2);
	trapezoid = (side_a + side_b) / 2 * side_c;
	square = pow(side_b, 2);
	rectangle = side_a * side_b;

	printf("TRIANGULO: %.3lf\n", triangle);
	printf("CIRCULO: %.3lf\n", circle);
	printf("TRAPEZIO: %.3lf\n", trapezoid);
	printf("QUADRADO: %.3lf\n", square);
	printf("RETANGULO: %.3lf\n", rectangle);

	return 0;
}
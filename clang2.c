 #include <stdio.h>


void calculate(float circumference);

int main() {
    float circumference = 154.0;

    
    calculate(circumference);

    return 0;
}


void calculate(float circumference) {
    float pi = 22.0 / 7;  // Correct float division
    float radius = circumference / (2 * pi);
    float area = pi * radius * radius;

    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
}

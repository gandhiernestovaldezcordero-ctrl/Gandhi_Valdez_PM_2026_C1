int main(void) {
    double salario;
    double incremento;
    double nuevo_salario;

    printf("Ingrese el salario del profesor: ");
    if (scanf("%lf", &salario) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (salario < 18000.0) {
        incremento = 0.12;
    } else if (salario <= 30000.0) {
        incremento = 0.08;
    } else if (salario <= 50000.0) {
        incremento = 0.07;
    } else {
        incremento = 0.06;
    }

    nuevo_salario = salario * (1.0 + incremento);

    printf("El nuevo salario del profesor es: %.2f\n", nuevo_salario);

    return 0;
}

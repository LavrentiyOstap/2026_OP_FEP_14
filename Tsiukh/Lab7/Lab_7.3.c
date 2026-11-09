#include <stdio.h>
#include <math.h>

double f(double x, double N, double A) {
    return N * x + A;
}

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double N, A;

    printf("Введіть ваш порядковий номер у журналі (N): ");
    scanf_s("%lf", &N);
    printf("Введіть ваш вік (A): ");
    scanf_s("%lf", &A);

    double left = -100.0;
    double right = 100.0;
    double eps = 1e-6;
    double mid;

    
    if (f(left, N, A) * f(right, N, A) > 0) {
        printf("На відрізку [-100, 100] корінь не знайдено або рівняння має кілька коренів.\n");
        return 1;
    }


    while ((right - left) / 2.0 > eps) {
        mid = (left + right) / 2.0;

        if (fabs(f(mid, N, A)) <= eps) {
            break;
        }

       
        if (f(left, N, A) * f(mid, N, A) < 0) {
            right = mid;
        }
        else {
            left = mid;
        }
    }

    mid = (left + right) / 2.0;
    printf("Розв'язок рівняння %.2lfx + %.2lf = 0 на [-100, 100]: x = %.6lf\n", N, A, mid);

    return 0;
}
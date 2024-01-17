オンデマンド
課題１

#include <stdio.h>
#include <math.h>

int main(void) {

    float a, b, c, d;

    /* 標準入力から変数の値を指定する */
    printf("a * x * x + b * x + c = 0\n");
    printf("a = ");
    scanf_s("%f", &a);
    printf("b = ");
    scanf_s("%f", &b);
    printf("c = ");
    scanf_s("%f", &c);
    printf("-------------------------\n");

    /* 係数aの値が0の場合はエラーとする */
    if (a == 0.0) {
        printf("aには０以外を入力。 \n");
    }
    else {
        d = b * b - 4 * a * c;  /* 判別式の計算 */
        if (d > 0) {
            float x1 = (-b + sqrt(d)) / (2 * a);
            float x2 = (-b - sqrt(d)) / (2 * a);
            printf("x = %.2f, %.2f\n", x1, x2);
        }
        else if (d == 0) {
            float x = -b / (2 * a);
            printf("x = %.2f\n", x);
        }
        else {
            float r = -b / (2 * a);
            float i = sqrt(-d) / (2 * a);
            printf("x = %.2f + %.2fi, %.2f - %.2fi\n", r, i, r, i);
        }
    }
    return 0;
}


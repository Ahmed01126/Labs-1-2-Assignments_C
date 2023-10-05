#include <stdio.h>
#include <math.h>

void Lab1() {
    printf("Enter number of Assignment: ");
    fflush(stdout);
    int cases;
    scanf("%d", &cases);
    switch (cases) {
        case 1: {
            int u, a, t;
            printf("Please enter the initial velocity: ");
            fflush(stdout);
            scanf("%d", &u);
            printf("Please enter the acceleration: ");
            fflush(stdout);
            scanf("%d", &a);
            printf("Please enter the time that has elapsed: ");
            fflush(stdout);
            scanf("%d", &t);
            int v = u + a * t;
            printf("The final velocity equals %d ", v);
            fflush(stdout);
            float s = u * t + 0.5 * a * t * t;
            printf("The distance traversed equals %f ", s);
            fflush(stdout);
            break;
        }
        case 2: {
            int num1, num2, num3;
            printf("Please enter three different integers: ");
            fflush(stdout);
            scanf("%d%d%d", &num1, &num2, &num3);

            int sum = num1 + num2 + num3;
            printf("Sum is %d", sum);
            fflush(stdout);

            float Average = sum / 3.0;
            printf("Average is %f", Average);
            fflush(stdout);

            int Product = num1 * num2 * num3;
            printf("Product is %d", Product);
            fflush(stdout);

            int Smallest = (num1 <= num2 && num1 <= num3) ? num1 : ((num2 <= num1 && num2 <= num3) ? num2 : num3);
            printf("Smallest is %d", Smallest);
            fflush(stdout);

            int largest = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);
            printf("largest is %d", largest);
            fflush(stdout);
            break;
        }
        case 3: {
            int t;
            printf("Please enter the total time elapsed in seconds: ");
            fflush(stdout);
            scanf("%d", &t);

            int hours = (t - (t % (60 * 60))) / (60 * 60);
            t = t % (60 * 60);
            int minutes = (t - (t % 60)) / 60;
            t = t % 60;

            char space1 = (hours > 9) ? ' ' : '0', space2 = (minutes > 9) ? ' ' : '0', space3 = (t > 9) ? ' ' : '0';
            printf("%c%d:%c%d:%c%d", space1, hours, space2, minutes, space3, t);
            fflush(stdout);
            break;
        }

    }

}

void Lab2() {
    printf("Enter number of Assignment: ");
    fflush(stdout);
    int cases;
    scanf("%d", &cases);
    switch (cases) {
        case 1: {
            unsigned char x;
            int n, o;

            printf("Enter an 8-bit number x: ");
            scanf("%u", &x);
            fflush(stdin);

            printf("Enter the number of rotate cycles n: ");
            scanf("%d", &n);
            fflush(stdin);

            printf("Enter the rotate option o (0 for left, 1 for right): ");
            scanf("%d", &o);
            fflush(stdin);

            unsigned char rotated_value = (o == 0) ? ((x << n) | (x >> (8 - n))) : ((x >> n) | (x << (8 - n)));

            printf("The rotated value of %d, %d times is: %u\n", x, n, rotated_value);
            fflush(stdout);

            break;
        }
        case 2: {
            int inc = 0;
            int i,j;
            for (i = 0; i < 10; ++i) {
                for (j = 0; j < 10; ++j) {
                    (j > 5 - inc && j < 5 + inc) ? printf("*") : printf(" ");
                    fflush(stdout);
                }
                (i < 5) ? ++inc : --inc;
                printf("\n");
                fflush(stdout);
            }
            fflush(stdout);
            break;
        }
        case 3: {
            printf("Enter size of series: ");
            fflush(stdout);
            int idx;
            scanf("%d", &idx);
            int n0 = 0, n1 = 1, n2;
            for (int i = 0; i < idx; ++i) {
                if (i == 0) printf("%d ", n0);
                else if (i == 1)printf("%d ", n1);
                else {
                    n2 = n0 + n1;
                    printf("%d ", n2);
                    n0 = n1;
                    n1 = n2;
                }
                fflush(stdout);
            }
            break;
        }
        case 4: {
            double x, result = 1;
            int n, i, factorial = 1;

            printf("Enter the exponent: ");
            fflush(stdout);
            scanf("%lf", &x);

            printf("Enter the number of iterations: ");
            fflush(stdout);
            scanf("%d", &n);

            for (i = 1; i <= n; i++) {
                factorial *= i;
                result += (pow(x, i) / factorial);
            }

            printf("The exponential result is: %lf", result);
            fflush(stdout);
            break;
        }

    }
}

int main() {
    printf("Enter number of Lab: ");
    fflush(stdout);
    char c;
    scanf("%c", &c);
    (c == '1') ? Lab1() : Lab2();
    return 0;
}

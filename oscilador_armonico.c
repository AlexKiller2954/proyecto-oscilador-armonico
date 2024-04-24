#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <getopt.h>

#define hbar 1.0
#define m 1.0

double V(double x) {
    return 0.5 * m * pow(x, 2);
}

void solve_schrodinger(double *y, double *x, double E, int n, double dx) {
    double g[n];
    y[0] = 0;
    y[1] = dx;
    
    for (int i = 0; i < n; i++) {
        x[i] = i * dx;
        g[i] = 2 * m * (V(x[i]) - E) / pow(hbar, 2);
    }

    for (int i = 1; i < n - 1; i++) {
        y[i+1] = ((2 - (10.0/12) * g[i] * pow(dx, 2)) * y[i] - (1 + (1.0/12) * g[i-1] * pow(dx, 2)) * y[i-1]) / (1 + (1.0/12) * g[i+1] * pow(dx, 2));
    }
}

int main(int argc, char *argv[]) {
    int n = 1000;
    double dx = 0.01;
    int states = 5;

    static struct option long_options[] = {
        {"n", required_argument, 0, 'a'},
        {"dx", required_argument, 0, 'b'},
        {"states", required_argument, 0, 'c'},
        {0, 0, 0, 0}
    };

    int option_index = 0;
    int c;

    while ((c = getopt_long(argc, argv, "a:b:c:", long_options, &option_index)) != -1) {
        switch (c) {
            case 'a':
                n = atoi(optarg);
                break;
            case 'b':
                dx = atof(optarg);
                break;
            case 'c':
                states = atoi(optarg);
                break;
        }
    }

    double y[n];
    double x[n];
    double E;
    
    for (int j = 0; j < states; j++) {
        E = (j + 0.5);
        solve_schrodinger(y, x, E, n, dx);

        char filename[20];
        sprintf(filename, "onda_%d.txt", j+1);

        FILE *fp = fopen(filename, "w");

        for (int i = 0; i < n; i++) {
            fprintf(fp, "%lf %lf\n", x[i], y[i]);
        }

        fclose(fp);
    }

    return 0;
}


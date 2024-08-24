#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide at least one number as an argument.\n");
        return 1;
    }

    double max_number = atof(argv[1]);

    for (int i = 2; i < argc; i++) {
        double num = atof(argv[i]);
        if (num > max_number) {
            max_number = num;
        }
    }
    printf("The maximum number is: %.2f\n", max_number);

    return 0;
}

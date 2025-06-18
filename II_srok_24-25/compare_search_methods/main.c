#include <stdio.h>
#include <time.h>

int binSearch(int a[], int x, int l, int r) {
    if (l > r) {
        return 0;
    }

    int k = (l + r) / 2;

    if (x == a[k]) {
        return 1;
    } else if (x > a[k]) {
        return binSearch(a, x, k + 1, r);
    } else {
        return binSearch(a, x, l, k - 1);
    }
}

void orderSearch(int a[], int elements, int x) {
    for (int i = 0; i < elements; i++) {
        if (a[i] == x) {
            printf("Yes...\n");
            return;
        } else if (a[i] > x) {
            break;
        }
    }
}

void unorderSearch(int a[], int elements, int x) {
    for (int i = 0; i < elements; i++) {
        if (a[i] == x) {
            printf("Yes...\n");
            return;
        }
    }
}

void timeTest(int a[], int length, int step) {
    int v = 0;
    for (int i = 0; i < length; i++) {
        v += step;
        if (v < 0) {
            v += length;
        } else if (v >= length) {
            v %= length;
        }
        a[i] = v;
    }
}

int main() {
    int length, step, x;
    int a[100000];

    do {
        printf("Enter the length (max 100000): ");
        scanf("%d", &length);
    } while (length < 1 || length > 100000);

    printf("Enter the step: ");
    scanf("%d", &step);

    printf("Enter a number to search: ");
    scanf("%d", &x);

    int r = length - 1;
    clock_t start, end;
    double time_taken;

    timeTest(a, length, step);

    start = clock();
    int found = binSearch(a, x, 0, r);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of binarySearch: %f seconds\n", time_taken);
    if (found) {
        printf("Yes...\n");
    } else {
        printf("No...\n");
    }

    start = clock();
    unorderSearch(a, length, x);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of unorderedSearch: %f seconds\n", time_taken);

    start = clock();
    orderSearch(a, length, x);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of orderedSearch: %f seconds\n", time_taken);

    return 0;
}

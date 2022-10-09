int main(void) {
    
    clock_t start_t, stop_t;
    double diff_t;

    start_t=clock();
    int num[10] = {0, 1, 2, 4, 5, 6, 7, 8, 9, 12};
    for (int i = 0; i <= 10000; i++) {
        binsearch(0, num, 10);
    }

        double end_t = clock();

    stop_t=clock();
    diff_t = difftime(end_t, start_t);

    printf("Time: %f\n", diff_t);
    return 0;
}


int binsearch(int x, int v[], int n) {
    int low, mid = 0, high;

    low = 0;
    high = n - 1;
    while ( low <= high && x != v[mid] ) {
        mid = (low+high) / 2;
        if ( x < v[mid] )
            high = mid - 1;
        else
            low = mid + 1;
    }

    return mid;
    //return -1;
}

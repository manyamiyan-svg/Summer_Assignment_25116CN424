int main() {
    int n, i;
    // Using long long to handle larger Fibonacci numbers safely
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%lld ", t1);
        
        // Calculate the next term
        nextTerm = t1 + t2;
        // Update terms for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}

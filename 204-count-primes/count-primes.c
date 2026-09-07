int countPrimes(int n) {
    if (n <= 2)
        return 0;

    // Only track odd numbers.
    // index i represents the number i.
    char isPrime[n];

    for (int i = 0; i < n; i++)
        isPrime[i] = 1;

    isPrime[0] = 0;
    isPrime[1] = 0;

    // 2 is prime; mark only odd composite numbers
    for (int i = 3; i * i < n; i += 2) {
        if (isPrime[i]) {
            // Start from i*i
            // Skip even multiples
            for (int j = i * i; j < n; j += 2 * i) {
                isPrime[j] = 0;
            }
        }
    }

    int count = 1;  // Count 2

    // Count odd primes
    for (int i = 3; i < n; i += 2) {
        if (isPrime[i])
            count++;
    }

    return count;
}

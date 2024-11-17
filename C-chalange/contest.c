#include <stdio.h>

int main() {
    int n, m;
    
    // Read the dimensions of the grid
    scanf("%d %d", &n, &m);

    // Create the grid and read its values
    int grid[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Variable to store the count of mountain peaks
    int peak_count = 0;

    // Iterate over each cell of the grid to check for mountain peaks
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int is_peak = 1;

            // Check the top neighbor
            if (i > 0 && grid[i][j] <= grid[i-1][j]) {
                is_peak = 0;
            }
            // Check the bottom neighbor
            if (i < n-1 && grid[i][j] <= grid[i+1][j]) {
                is_peak = 0;
            }
            // Check the left neighbor
            if (j > 0 && grid[i][j] <= grid[i][j-1]) {
                is_peak = 0;
            }
            // Check the right neighbor
            if (j < m-1 && grid[i][j] <= grid[i][j+1]) {
                is_peak = 0;
            }

            // If it's a peak, print its position
            if (is_peak) {
                peak_count++;
                printf("%d %d\n", i+1, j+1);
            }
        }
    }

    // If no peaks are found, print 0
    if (peak_count == 0) {
        printf("0\n");
    }

    return 0;
}

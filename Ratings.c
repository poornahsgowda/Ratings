#include <stdio.h>

int main() {
    int n, i, j, mostFrequentRating, maxCount = 0;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    int ratings[n];
      // Input ratings for each product
    printf("Enter the ratings for each product:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&ratings[i]);
    }

    // Find the rating that appears most frequently
    for(i=0;i<n;i++) {
        int count=1;
        for(j=i+1;j<n;j++) {
            if(ratings[i] == ratings[j]) {
                count++;
            }
        }
        if(count>maxCount) {
            maxCount = count;
            mostFrequentRating = ratings[i];
        }
    }
    printf("The most frequent rating is %d.\n", mostFrequentRating);

    return 0;
}
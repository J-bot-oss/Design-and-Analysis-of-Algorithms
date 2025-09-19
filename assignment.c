#include <stdio.h> // standard input output header

int main() {
    int n, i;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements:");
    scanf("%d", &n);

    // Declare an array of size n to hold the elements
    int arr[n];
 
    //Prompt the user to enter n elements
    printf("Enter %d elments:\n",n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Assume the first element is the maximum initially
    int max = arr[0];

    // Traverse the array starting from the 2nd element
    for(i=1; i<n; i++){
        
        // Update max if a larger element is found
        if(arr[i] > max) {
            max =arr[i];
        }
    }
     // Print the maximum element found in the array
    printf("The maximum element is: %d\n", max);
    return 0; // Indicate that the program ended successfully
}

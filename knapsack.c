#include<stdio.h> 

// A utility function that returns maximum of two integers 
int max(int a, int b) { 

  return (a > b)? a : b; 
} 
  
// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 

  
   // Base Case 
   if (n == 0 || W == 0) 
       return 0; 
  
   // If weight of the nth item is more than Knapsack capacity W, then 
   // this item cannot be included in the optimal solution 
   if (wt[n-1] > W) 
       return knapSack(W, wt, val, n-1); 
  
   // Return the maximum of two cases:  
   // (1) nth item included  
   // (2) not included 
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
                    knapSack(W, wt, val, n-1) 
                  ); 
} 
  
// Driver program to test above function 
int main() 
{ 

    int n, val[10], wt[10], W,i;

    printf("Enter the number of weights:\n");
    scanf("%d",&n);

    printf("Enter the weights\n");
    for(i=0;i<n;i++)
      scanf("%d",&wt[i]);

    printf("Enter the values\n");
    for(i=0;i<n;i++)
      scanf("%d",&val[i]);

    printf("Enter the weight of the knapsack\n");
    scanf("%d",&W);

    printf("%d\n", knapSack(W, wt, val, n)); 
    return 0; 
} 
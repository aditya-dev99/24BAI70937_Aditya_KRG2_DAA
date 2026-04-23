# Minimum Sum Partition Algorithm

1. Start

2. Input n (number of elements)

3. Input array arr of size n

4. Compute totalSum = sum of all elements in array

5. Create a DP array dp of size (totalSum + 1)
   Initialize all values as false

6. Set dp[0] = true (subset with sum 0 is always possible)

7. For each element in array:
   For j from totalSum down to arr[i]:
       dp[j] = dp[j] OR dp[j - arr[i]]

8. Initialize minimum difference = infinity

9. Loop from s1 = 0 to totalSum/2:
   If dp[s1] is true:
       s2 = totalSum - s1
       difference = abs(s2 - s1)
       update minimum difference

10. Return minimum difference

11. End

# Distinct Subsequences Algorithm

1. Start

2. Input strings s and t

3. Let n = length of s, m = length of t

4. Create a 2D DP array dp[n+1][m+1]

5. Initialize:
   dp[i][0] = 1 for all i (empty t can be formed in 1 way)

6. For i from 1 to n:
      For j from 1 to m:
         If s[i-1] == t[j-1]:
             dp[i][j] = dp[i-1][j-1] + dp[i-1][j]
         Else:
             dp[i][j] = dp[i-1][j]

7. Return dp[n][m]

8. End

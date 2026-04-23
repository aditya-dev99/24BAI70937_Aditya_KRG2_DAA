# Dry Run

Input:
s = "rabbbit"
t = "rabbit"

Goal: Count ways to form "rabbit" from "rabbbit"

Key idea:
Extra 'b' hai → choose kaun sa remove kare

Ways:
1. Remove 1st extra 'b'
2. Remove 2nd extra 'b'
3. Remove 3rd extra 'b'

Total ways = 3

DP builds this step-by-step:

When characters match:
Take + Skip

When not match:
Skip

Final Answer:
dp[n][m] = 3

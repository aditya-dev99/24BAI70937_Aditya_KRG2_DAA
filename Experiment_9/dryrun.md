# Dry Run

Input:
n = 4
arr = [1, 6, 11, 5]

Step 1:
totalSum = 1 + 6 + 11 + 5 = 23

Step 2:
We try to find subset sum closest to totalSum/2 = 11

Possible subset sums:
{1} = 1
{6} = 6
{11} = 11
{5} = 5
{1,6} = 7
{1,5} = 6
{6,5} = 11
{1,6,5} = 12

Closest to 11 → 11

Step 3:
s1 = 11
s2 = 23 - 11 = 12

Difference = |12 - 11| = 1

Output = 1

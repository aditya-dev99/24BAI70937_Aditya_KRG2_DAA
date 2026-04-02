# Cheapest Flights Within K Stops

## Problem Statement

You are given **n cities** connected by flights. Each flight is represented as:

flights[i] = [from, to, price]

This means there is a flight from city `from` to city `to` with cost `price`.

### 🔹 Given:
- `src` → Source city  
- `dst` → Destination city  
- `k` → Maximum number of stops  

---

## Objective

Find the **minimum cost** to travel from `src` to `dst` with **at most k stops**.  

If no such route exists, return **-1**.

---

## Approach: Modified Bellman-Ford Algorithm

### Key Insight

- Each iteration represents **one edge traversal**
- Maximum edges allowed = **k + 1**
- So, we relax all edges **k + 1 times**

---

##  Algorithm

1. Initialize distance array  
   - Set all values to ∞  
   - Set `dist[src] = 0`

2. Repeat for (k + 1) iterations  
   - Create a temporary copy of `dist`  
   - Traverse all flights  
   - Relax edges using previous iteration values  

3. Return result  
   - If `dist[dst] == ∞` → return `-1`  
   - Else → return `dist[dst]`  

---

##  Code (C++)

```cpp
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        for (int i = 0; i <= k; i++) {
            vector<int> temp = dist;

            for (auto &f : flights) {
                int u = f[0];
                int v = f[1];
                int cost = f[2];

                if (dist[u] == INT_MAX) continue;

                if (dist[u] + cost < temp[v]) {
                    temp[v] = dist[u] + cost;
                }
            }

            dist = temp;
        }

        return (dist[dst] == INT_MAX) ? -1 : dist[dst];
    }
};

Approach:1
The idea is to calculate how many tickets each person can buy before the person at position k finishes.
People before or at k buy up to the same number of tickets as k, while those after k buy one less.
Adding all these values gives the total time required for person k to finish buying tickets.

Approach:2  
We can make this efficient using a stack to track items that are still waiting for their discount.
A stack works like a container where you can put and remove elements in Last-In-First-Out (LIFO) order.
Here, the stack will store the indices of items for which we haven’t yet found a smaller or equal price to the right.

<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/"><h1>188. Best Time to Buy and Sell Stock IV</h1></a>

- <h3>Question</h3>
    You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.

    Find the maximum profit you can achieve. You may complete at most k transactions.

    Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: k = 2, prices = [2,4,1]<br>
    Output: 2 <br>
    Explanation: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: k = 2, prices = [3,2,6,5,0,3]<br>
    Output: 7 <br>
    Explanation: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 0 <= k <= 100
    
    → 0 <= prices.length <= 1000
    
    → 0 <= prices[i] <= 1000
<hr>


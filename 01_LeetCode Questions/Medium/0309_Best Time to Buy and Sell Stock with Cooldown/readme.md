<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/"><h1>309. Best Time to Buy and Sell Stock with Cooldown</h1></a>

- <h3>Question</h3>
    You are given an array prices where prices[i] is the price of a given stock on the ith day.

    Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:

    After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).

    Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: prices = [1,2,3,0,2]<br>
    Output: 3 <br>
    Explanation: transactions = [buy, sell, cooldown, buy, sell]
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: prices = [1]<br>
    Output: 0 <br>
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= prices.length <= 5000<br>
    → 0 <= prices[i] <= 1000 <br>
<hr>

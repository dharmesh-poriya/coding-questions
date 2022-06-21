<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/"><h1>123. Best Time to Buy and Sell Stock III</h1></a>

- <h3>Question</h3>
    You are given an array prices where prices[i] is the price of a given stock on the ith day.

    Find the maximum profit you can achieve. You may complete at most two transactions.

    Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: prices = [3,3,5,0,0,3,1,4]<br>
    Output: 6 <br>
    Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.

    Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: prices = [1,2,3,4,5]<br>
    Output: 4 <br>
    Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.

    Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are engaging multiple transactions at the same time. You must sell before buying again.
    </div>
    <br>
    <div>
    <b>Example 3:</b>

    Input: prices = [7,6,4,3,1]<br>
    Output: 0 <br>
    Explanation: In this case, no transaction is done, i.e. max profit = 0.
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= prices.length <= 10⁵<br>
    → 0 <= prices[i] <= 10⁵ <br>
<hr>


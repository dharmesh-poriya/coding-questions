<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/"><h1>714. Best Time to Buy and Sell Stock with Transaction Fee</h1></a>

- <h3>Question</h3>
    You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.

    Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

    Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: prices = [1,3,2,8,4,9], fee = 2<br>
    Output: 8<br>
    Explanation: The maximum profit can be achieved by:<br>
                - Buying at prices[0] = 1<br>
                - Selling at prices[3] = 8<br>
                - Buying at prices[4] = 4<br>
                - Selling at prices[5] = 9<br>
                The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: prices = [1,3,7,5,10,3], fee = 3<br>
    Output: 6
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= prices.length <= 5 * 10⁴<br>
    → 1 <= prices[i] < 5 * 10⁴<br>
    → 0 <= fee < 5 * 10⁴ <br>
<hr>


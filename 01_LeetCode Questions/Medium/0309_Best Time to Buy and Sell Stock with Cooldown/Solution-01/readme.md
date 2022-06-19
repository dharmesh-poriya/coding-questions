- <h3>Approach (Linear Solution)</h3>
    <div>
    <p>
    → For any day, the first state will be the maximum profit we can make if there is one stock left to be sold. This state does not necessarily require you to buy the stock at the current day. It just requires that there is one stock extra, i.e. the number of stocks bought should be one more than the number of stocks sold so far. Also, we need to keep in mind that before buying any stock, we have to maintain a cooldown of 1 day with the day when the last stock was sold.

    → The second state will be the maximum profit we can make if we have no stock available to sell. This state does not necessarily require you to sell the stock at the current day. It just requires that the number of stocks bought should be equal to the number of stocks sold so far. We need not account for the cooldown period of the last stock bought in this state, as we will maintain a 3rd state for cooldown.
    
    → The third state will be the maximum profit we can make if we have no stock available to sell. This state will be similar to the second state, but there is one extra requirement, that we must have completed the cooldown (of 1 day) after the selling of the last stock.
    
    → Let us name the first state as bsp (bought state profit), the second state as ssp (sold state profit) and third state as csp (cooldown state profit). We will create three arrays, one for each state, of size equal to the number of days.
    
    → Can you derive a relation for the states at day i, using the values of bsp state, ssp state and csp state at day i-1?

    → BSP State: If it is necessary to have one stock extra in our hand, then we have two options:

    → We can use the csp state of previous day and buy the stock at current day, i.e. take the maximum profit upto previous day (with cooldown period completed) and buy the stock at current day.
    
        Q) Why we cannot take the maximum profit upto previous day from bsp state?
    
        R) This is because if we consider the previous day, which already has one stock extra, then buying on the current day will make two stocks extra. But we are not allowed such transactions, as we must sell stock before buying it again.
    
        Q) Why we cannot take the maximum profit upto previous day from ssp state?

        R) This is because if we consider the ssp state, then we have not completed the cooldown after the last stock sold. Buying the stock at current day without completing the cooldown is not allowed.
    
    → We do not buy on the current day, but instead use the previous bsp state, i.e. we can take the maximum profit with one stock left upto previous day only. This will make us left with one stock extra only, as we are not buying or selling today.
    
    → We will consider that option whichever gives us more profit (or less loss).

    → SSP State: If it is necessary to have to equal number of stocks bought and sold, then we have two options:

    → We take the bsp state of the previous day and sell that extra stock which was left in the previous day's state today. Hence, now, we will be left with no extra stocks in our hand, i.e. the number of stocks bought and sold will become extra.
    
        Q) Why can't we take the ssp state (or csp state) of the previous day and sell a stock today?
        
        R) Since ssp state (or csp state) means we do not have any extra stock in our hand, we cannot sell a stock without even buying it first. A state like "SB" is not possible.
    
    → We take the ssp state of the previous day as it is, and do not buy or sell stock today. Hence, ssp state of previous day, which gives the maximum profit with no stocks left upto previous day will become the maximum profit with no stock left upto the current day.
    
    → We will consider that option whichever gives us more profit (or less loss).

    → CSP State: If it is necessary to have to equal number of stocks bought and sold, and we have completed a cooldown of 1 day, then we have two options:

    → We take the ssp state of the previous day and rest today, i.e. let today be the cooldown period. Hence, now, we will have equal stocks bought and sold, and we would have completed the cooldown period.
    
        Q) Why can't we take the bsp state of the previous day and cooldown today?
    
        R) We need to cooldown only after a complete transaction, i.e. after selling a stock and before buying a new stock. Hence, taking into account the bsp state of the previous day does not make sense, as we need not cooldown between buying a stock and selling that same stock.
    
    → We take the csp state of the previous day as it is, and do not buy or sell stock or cooldown today. Hence, csp state of previous day, which gives the maximum profit with no stocks left upto previous day (with cooldown completed) will become the maximum profit with no stock left upto the current day (with cooldown completed).
    
    → We will consider that option whichever gives us more profit (or less loss).
    </p>

    ![example-1](images/buy_sell_stock_cooldown_1.png)<br>

    <p>
    → The only task left is to analyze the corner case.

    → It is the first day, when we will not have any previous day.
    
    → In this case, for the bsp state, we must have to buy the stock at the current day as option 2 is not available.
    
    → For the ssp state, we do not have any option to sell stock, hence the maximum profit will be 0 (no stocks bought, no stocks sold).
    
    → For the csp state, we do not have any previous ssp state, and since there is no complete transaction, we have nothing to cooldown. Thus, maximum profit will be 0 in this case also (no stocks bought, no stocks sold and no cooldown completed).
    
    → Note: Please note that there can be negative value in any state, which represents we are at a loss. (Profit of -x is equivalent to loss of x).

    → At last, we will return the value of ssp state of the last day as our result, since it will contain the maximum profit with no extra stock left in our hand (no incomplete transaction) and it has taken into account all the n days.

        Q) Why cannot we consider the bsp state of the last day as our result?

        R)The bsp state of the last day cannot be considered as our result, because it has one incomplete transaction, because there is one stock extra in our hand, which is still left to be sold.

        Q) Why cannot we consider the csp state of the last day as our result?

        R) Please note that we need to cooldown only between selling a stock which we bought previously and buying a new stock. Thus, we need not cooldown after the last stock sold. Did you get the point of "Why to unnecessarily add one day of cooldown"?
    </p>
    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ Since, we are running a loop on a 1d array of size n, hence time complexity is O(n).
    </p>
    <h5>Space Complexity:</h5>
    <p>→ We are not using any extra space, but just a few integer variables, hence O(1) auxiliary space required.
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](#) -->
- <h3>Approach (Linearly Traversing Array)</h3>
    <div>
    <p>
    To maximize the profit, we need to find a pair so that we can buy the stock at the least possible price and sell it on a future day at the maximum price possible.
    But we cannot make a pair of the minimum element of array with the maximum element of array, because it may be possible that minimum element occurs after maximum, i.e. index of minimum element is greater than index of maximum element. Thus, the condition of a valid complete transaction will be violated.
    Hence, everyday can be a potential answer as a selling point or a buying point. We will apply our dynamic programming approach and try to solve this problem, by Travel & Solve Methodology.</p>
    <p>So, what we can do is consider each day as our potential selling point. After considering a given day as a potential selling day, we will have to find a day with least price in the left part (index smaller than the selling point), which will act as the buying point.
    Thus the profit we can make with the necessary condition that today is the selling day can be calculated as arr[selling point] - arr[buying point].
    We will consider these profits for each day and find the maximum profit among them.
    </p>
    <p>
    What can be the smallest problem?
    I think the first day (0 index) is the smallest problem, where it has no buying point before it. Hence, the maximum profit will be 0 considering this day as a potential selling point.
    We will keep the current maximum profit = 0. Now, we will traverse the array from left to right, and will keep on updating the maximum profit, if we find a greater profit for the current day.
    </p>
    </p>
    But, how to find the buying point pair?
    One idea is to store the minimum element encountered so far (from days on the left). On each day, if the price is less than the msf (Minimum So Far), we will update its value. Thus, while travelling from left to right, we are able to find the buying point pair.
    </p>

    ![example-1](images/img1.png)<br>
    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ Since, we are running a loop on a 1d array of size n, and calculating the minimum so far(which is constant work), hence time complexity is O(n).
    </p>
    <h5>Space Complexity:</h5>
    <p>→ We are not using any extra space, but just a few integer variables, hence O(1) auxiliary space required.
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](https://youtu.be/uoFrIIrp5_g) -->

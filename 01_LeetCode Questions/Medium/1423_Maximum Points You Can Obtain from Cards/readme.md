<a href="https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/"><h1> 1423. Maximum Points You Can Obtain from Cards </h1></a>

- <h3>Question</h3>
    There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

    In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

    Your score is the sum of the points of the cards you have taken.

    Given the integer array cardPoints and the integer k, return the maximum score you can obtain.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: cardPoints = [1,2,3,4,5,6,1], k = 3<br>
    Output: 12 <br>
    Explanation: After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: cardPoints = [2,2,2], k = 2<br>
    Output: 4 <br>
    Explanation: Regardless of which two cards you take, your score will always be 4.
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= cardPoints.length <= 10⁵
    
    → 1 <= cardPoints[i] <= 10⁴
    
    → 1 <= k <= cardPoints.length
<hr>


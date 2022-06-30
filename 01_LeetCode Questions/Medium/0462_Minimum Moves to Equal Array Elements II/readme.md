<a href="https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/" target="_blank"><h1>462. Minimum Moves to Equal Array Elements II</h1></a>

- <h3>Question</h3>
    Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

    In one move, you can increment or decrement an element of the array by 1.

    Test cases are designed so that the answer will fit in a 32-bit integer.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: nums = [1,2,3]<br>
    Output: 2 <br>
    Explanation: 
    
        Only two moves are needed (remember each move increments or decrements one element):
        
        [1,2,3]  =>  [2,2,3]  =>  [2,2,2]
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: nums = [1,10,2,9]<br>
    Output: 16 <br>
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → n == nums.length
    
    → 1 <= nums.length <= 10⁵
    
    → -10⁹ <= nums[i] <= 10⁹
<hr>

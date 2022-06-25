<a href="https://leetcode.com/problems/non-decreasing-array/"><h1> 665. Non-decreasing Array </h1></a>

- <h3>Question</h3>
    Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element.

    We define an array is non-decreasing if nums[i] <= nums[i + 1] holds for every i (0-based) such that (0 <= i <= n - 2).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: nums = [4,2,3]<br>
    Output: true <br>
    Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: nums = [4,2,1]<br>
    Output: false <br>
    Explanation: You can't get a non-decreasing array by modify at most one element.
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → n == nums.length
    
    → 1 <= n <= 104
    
    → -105 <= nums[i] <= 105
<hr>


<a href="https://practice.geeksforgeeks.org/problems/longest-possible-route-in-a-matrix-with-hurdles/1#"><h1>Longest Possible Route in a Matrix with Hurdles</h1></a>

- <h3>Question</h3>
    Given an N x M matrix, with a few hurdles(denoted by 0) arbitrarily placed, calculate the length of the longest possible route possible from source(xs,ys) to a destination(xd,yd) within the matrix. We are allowed to move to only adjacent cells which are not hurdles. The route cannot contain any diagonal moves and a location once visited in a particular path cannot be visited again.If it is impossible to reach the destination from the source return -1.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input:<br>
    {xs,ys} = {0,0}<br>
    {xd,yd} = {1,8}<br>
    matrix = 1 1 1 1 1 1 1 1 1 1<br>
             1 1 0 1 1 0 1 1 0 1<br>
             1 1 1 1 1 1 1 1 1 1<br>
    Output: 24
    Explanation:<br>
    ![example-1](images/ex1.png)<br>
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input:<br>
    {xs,ys} = {0,3}
    {xd,yd} = {2,2}
    matrix = 1 0 0 1 0
             0 0 0 1 0
             0 1 1 0 0
    Output: -1
    Explanation: We can see that it is impossible to reach the cell (2,2) from (0,3).
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= N,M <= 10 <br>
<hr>

- <h3>Approach (Backtracking)</h3>
    <div>
    <p>
    The idea is to use Backtracking. We start from the source cell of the matrix, move forward in all four allowed directions, and recursively checks if they lead to the solution or not. If the destination is found, we update the value of the longest path else if none of the above solutions work we return false from our function.
    </p>

    <!-- ![example-1](images/img1.png)<br> -->
    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(2ⁿ*ᵐ)
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(n*m)
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](https://youtu.be/uoFrIIrp5_g) -->

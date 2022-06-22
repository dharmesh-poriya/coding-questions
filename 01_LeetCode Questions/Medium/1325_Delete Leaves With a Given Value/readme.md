<a href="https://leetcode.com/problems/delete-leaves-with-a-given-value/"><h1> 1325. Delete Leaves With a Given Value </h1></a>

- <h3>Question</h3>
    Given a binary tree root and an integer target, delete all the leaf nodes with value target.

    Note that once you delete a leaf node with value target, if its parent node becomes a leaf node and has the value target, it should also be deleted (you need to continue doing that until you cannot).
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    ![example-1](images/sample_1_1684.png)

    Input: root = [1,2,3,2,null,2,4], target = 2<br>
    Output: [1,null,3,null,4] <br>
    Explanation: Leaf nodes in green with value (target = 2) are removed (Picture in left). 
    
    After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    ![example-1](images/sample_2_1684.png)

    Input: root = [1,3,3,3,2], target = 3<br>
    Output: [1,3,null,null,2] <br>
    </div>
    <br>
    <div>
    <b>Example 3:</b>

    ![example-1](images/sample_3_1684.png)

    Input: root = [1,2,null,2,null,2], target = 2<br>
    Output: [1] <br>
    </div>
    <br>
    <div>
<hr>

- <h3>Constraints</h3>
    → The number of nodes in the tree is in the range [1, 3000].
    
    → 1 <= Node.val, target <= 1000
<hr>


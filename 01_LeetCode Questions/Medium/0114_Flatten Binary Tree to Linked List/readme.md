<a href="https://leetcode.com/problems/flatten-binary-tree-to-linked-list/"><h1> 114. Flatten Binary Tree to Linked List </h1></a>

- <h3>Question</h3>
    Given the root of a binary tree, flatten the tree into a "linked list":

        The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
        
        The "linked list" should be in the same order as a pre-order traversal of the binary tree.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    ![example-1](images/flaten.jpg)

    Input: root = [1,2,5,3,4,null,6]<br>
    Output: [1,null,2,null,3,null,4,null,5,null,6] <br>
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: []<br>
    Output: [] <br>
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → The number of nodes in the tree is in the range [0, 2000].
    
    → -100 <= Node.val <= 100
<hr>


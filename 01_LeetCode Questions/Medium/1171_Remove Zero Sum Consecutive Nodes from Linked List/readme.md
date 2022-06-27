<a href="https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/"><h1> 1171. Remove Zero Sum Consecutive Nodes from Linked List </h1></a>

- <h3>Question</h3>
    Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.

    After doing so, return the head of the final linked list.  You may return any such answer.

    (Note that in the examples below, all sequences are serializations of ListNode objects.)
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: 
    
        head = [1,2,-3,3,1]
        
    Output: 
        
        [3,1]
    Note:- The answer [1,2,1] would also be accepted.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: 
    
        head = [4,-3,-3,-3,5,-1,-3,1,1,-1,5]

    Output: 
        
        [-1,-3,1,5]
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → The given linked list will contain between 1 and 1000 nodes.
    
    → Each node in the linked list has -1000 <= node.val <= 1000.
<hr>


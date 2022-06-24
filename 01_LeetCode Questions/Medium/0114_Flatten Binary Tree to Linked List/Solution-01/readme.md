- <h3>Approach (Iterative Solution)</h3>
    <div>
    <p>
    → The approach is called the Morris traversal. At its heart, it takes advantage of the basic nature of ordered traversals to iterate through and unwind the tree. In a pre-order traversal of a binary tree, each vertex is processed in (node, left, right) order. This means that the entire left subtree could be placed between the node and its right subtree.

    → To do this, however, we'll first have to locate the last node in the left subtree. This is easy enough, since we know that the last node of a pre-order tree can be found by moving right as many times as possible from its root.

    → So we should be able to move through the binary tree, keeping track of the curent node (curr). Whenever we find a left subtree, we can dispatch a runner to find its last node, then stitch together both ends of the left subtree into the right path of curr, taking heed to sever the left connection at curr.

    → Once that's done, we can continue to move curr to the right, looking for the next left subtree. When curr can no longer move right, the tree will be successfully flattened.

    </p>

    <!-- ![example-1](images/img1.png)<br> -->
    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(n) where n is total nodes in binary tree
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(h) where h is height of binary tree
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](Link) -->
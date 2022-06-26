- <h3>Approach (Sliding window and prefix sum)</h3>
    <div>
    <p>
    → Let the sum of all points be total_pts. You need to remove a sub-array from cardPoints with length n - k.

    → Keep a window of size n - k over the array. The answer is max(answer, total_pts - sumOfCurrentWindow)
    </p>

    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(n)
    </p>
    <h5>Space Complexity:</h5>
    <p>→ We are not using any extra space, but just a few integer variables, hence O(1) auxiliary space required.
    </p>
    </div>
<hr>

- <h3>Reference</h3>
1. [Window Sliding Technique](https://www.geeksforgeeks.org/window-sliding-technique/)
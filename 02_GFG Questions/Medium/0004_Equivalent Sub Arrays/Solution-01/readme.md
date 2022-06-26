- <h3>Approach (Sliding window)</h3>
    <div>
    <p>
    → Find the number of distinct elements in the entire array. Let this number be k <= N. Initialize Left = 0, Right = 0 and window = 0.
    
    → Increment right until the number of distinct elements in range [Left=0, Right] equal to k(or window size would not equal to k), let this right be R1. Now since the sub-array [Left = 0, R1] has k distinct elements, so all the sub-arrays starting at Left = 0 and ending after R1 will also have k distinct elements. Thus add N-R1+1 to the answer because [Left.. R1], [Left.. R1+1], [Left.. R1+2] … [Left.. N-1] contains all the distinct numbers.
    
    → Now keeping R1 same, increment left. Decrease the frequency of the previous element i.e., arr[0], and if its frequency becomes 0, decrease the window size. Now, the sub-array is [Left = 1, Right = R1].
    
    → Repeat the same process from step 2 for other values of Left and Right till Left < N.
    </p>

    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(N)
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(N)
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [ClickHere](Link) -->
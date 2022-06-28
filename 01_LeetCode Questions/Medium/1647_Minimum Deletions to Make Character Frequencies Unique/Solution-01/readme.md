- <h3>Approach (using Hashmap)</h3>
    <div>
    <p>
    → As we can only delete characters, if we have multiple characters having the same frequency, we must decrease all the frequencies of them, except one.

    → Sort the alphabet characters by their frequencies non-increasingly.

    → Iterate on the alphabet characters, keep decreasing the frequency of the current character until it reaches a value that has not appeared before.
    </p>

    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(n)
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(1)
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [ClickHere](Link) -->
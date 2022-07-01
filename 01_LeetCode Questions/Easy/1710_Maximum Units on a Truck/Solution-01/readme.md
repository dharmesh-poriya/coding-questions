- <h3>Approach (Sort)</h3>
    <div>
    <p>
    → If we have space for at least one box, it's always optimal to put the box with the most units.

    → Sort the box types with the number of units per box non-increasingly.

    → Iterate on the box types and take from each type as many as you can.
    </p>

    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ Since, we are running a loop on a 1d array of size n, hence time complexity is O(n).
    </p>
    <h5>Space Complexity:</h5>
    <p>→ We are not using any extra space, but just a few integer variables, hence O(1) auxiliary space required.
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [ClickHere](Link) -->
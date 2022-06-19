- <h3>Approach (Hashmap Solution)</h3>
    <div>
    <p>
    → in this approach we are just finding all possible prefix of each products and storing in to unordered map or map and as value of key we are storing all string of given prefix string in ordered set so that all strings of prefix are lexicographically ordered.
    </p>
    <p>
    → for finding search word we are generating all prefix of given search word and finding set of string related to that prefix and adding at most three products from set in to the solution.
    </p>
    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>
    → let's take products.length as 'm' and products[i].length as 'n'<br>
    → we are generating all possible prefix for each products[i] and storing that products[i] in to set that is also take log(n) time to insert so overall time complexity is O(m*(n*log(n)));

    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(m*n)
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](https://youtu.be/uoFrIIrp5_g) -->
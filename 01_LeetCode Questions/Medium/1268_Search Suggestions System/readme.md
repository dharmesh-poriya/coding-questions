<a href="https://leetcode.com/problems/search-suggestions-system/"><h1>1268. Search Suggestions System</h1></a>

- <h3>Question</h3>
    You are given an array of strings products and a string searchWord.

    Design a system that suggests at most three product names from products after each character of searchWord is typed. Suggested products should have common prefix with searchWord. If there are more than three products with a common prefix return the three lexicographically minimums products.

    Return a list of lists of the suggested products after each character of searchWord is typed.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input:<br>
    products = ["mobile","mouse","moneypot","monitor","mousepad"]<br>
    searchWord = "mouse"<br>
    Output:<br>
    [
        ["mobile","moneypot","monitor"],
        ["mobile","moneypot","monitor"],
        ["mouse","mousepad"],
        ["mouse","mousepad"],
        ["mouse","mousepad"]
    ]
    Explanation: <br>
    products sorted lexicographically = ["mobile","moneypot","monitor","mouse","mousepad"]
    After typing m and mo all products match and we show user ["mobile","moneypot","monitor"]
    After typing mou, mous and mouse the system suggests ["mouse","mousepad"]
    </div>
    <br>

    <div>
    <b>Example 2:</b>

    Input:<br>
    products = ["havana"],<br>
    searchWord = "havana"<br>
    Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]
    </div>
    <br>

    <div>
    <b>Example 3:</b>

    Input:<br>
    products = ["bags","baggage","banner","box","cloths"],<br>
    searchWord = "bags"<br>
    Output: [["baggage","bags","banner"],["baggage","bags","banner"],["baggage","bags"],["bags"]]
    </div>
    <br>

<hr>

- <h3>Constraints</h3>
    → 1 <= products.length <= 1000<br>
    → 1 <= products[i].length <= 3000<br>
    → 1 <= sum(products[i].length) <= 2 * 104<br>
    → All the strings of products are unique.<br>
    → products[i] consists of lowercase English letters.<br>
    → 1 <= searchWord.length <= 1000<br>
    → searchWord consists of lowercase English letters.<br>
<hr>


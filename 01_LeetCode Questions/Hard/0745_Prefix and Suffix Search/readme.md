<a href="https://leetcode.com/problems/prefix-and-suffix-search/"><h1>745. Prefix and Suffix Search</h1></a>

- <h3>Question</h3>
    Design a special dictionary with some words that searches the words in it by a prefix and a suffix.<br>
    Implement the WordFilter class:<br>
        → WordFilter(string[] words) Initializes the object with the words in the dictionary.<br>
        → f(string prefix, string suffix) Returns the index of the word in the dictionary, which has the prefix prefix and the suffix suffix. If there is more than one valid index, return the largest of them. If there is no such word in the dictionary, return -1.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input:<br>
    ["WordFilter", "f"]<br>
    [[["apple"]], ["a", "e"]]<br>
    Output: [null, 0]
    Explanation: 
    WordFilter wordFilter = new WordFilter(["apple"]);
    wordFilter.f("a", "e"); // return 0, because the word at index 0 has prefix = "a" and suffix = 'e".
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= words.length <= 15000<br>
    → 1 <= words[i].length <= 10<br>
    → 1 <= prefix.length, suffix.length <= 10<br>
    → words[i], prefix and suffix consist of lower-case English letters only.<br>
    → At most 15000 calls will be made to the function f.
<hr>

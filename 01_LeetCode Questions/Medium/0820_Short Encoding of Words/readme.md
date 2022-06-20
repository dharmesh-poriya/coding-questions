<a href="https://leetcode.com/problems/short-encoding-of-words/"><h1>820. Short Encoding of Words</h1></a>

- <h3>Question</h3>
    A valid encoding of an array of words is any reference string s and array of indices indices such that:

        - words.length == indices.length

        - The reference string s ends with the '#' character.

        - For each index indices[i], the substring of s starting from indices[i] and up to (but not including) the next '#' character is equal to words[i].

    Given an array of words, return the length of the shortest reference string s possible of any valid encoding of words.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    Input: words = ["time", "me", "bell"]<br>
    Output: 10 <br>
    Explanation: A valid encoding would be s = "time#bell#" and indices = [0, 2, 5].

    words[0] = "time", the substring of s starting from indices[0] = 0 to the next '#' is underlined in "time#bell#" 
    
    words[1] = "me", the substring of s starting from indices[1] = 2 to the next '#' is underlined in "time#bell#"
    
    words[2] = "bell", the substring of s starting from indices[2] = 5 to the next '#' is underlined in "time#bell#"

    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: words = ["t"]<br>
    Output: 2 <br>
    Explanation: A valid encoding would be s = "t#" and indices = [0].
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= words.length <= 2000

    → 1 <= words[i].length <= 7

    → words[i] consists of only lowercase letters.
<hr>


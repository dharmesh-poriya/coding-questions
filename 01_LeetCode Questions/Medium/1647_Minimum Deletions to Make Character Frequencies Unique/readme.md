<a href="https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/"><h1> 1647. Minimum Deletions to Make Character Frequencies Unique </h1></a>

- <h3>Question</h3>
    A string s is called good if there are no two different characters in s that have the same frequency.

    Given a string s, return the minimum number of characters you need to delete to make s good.

    The frequency of a character in a string is the number of times it appears in the string. For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.

<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: s = "aab"<br>
    Output: 0 <br>
    Explanation: s is already good.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: s = "aaabbbcc"<br>
    Output: 2 <br>
    Explanation:
    
        You can delete two 'b's resulting in the good string "aaabcc".
        
        Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= s.length <= 10⁵
    
    → s contains only lowercase English letters.
<hr>


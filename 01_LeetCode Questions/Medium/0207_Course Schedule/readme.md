<a href="https://leetcode.com/problems/course-schedule/"><h1> 207. Course Schedule </h1></a>

- <h3>Question</h3>
    There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

        - For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
    
    Return true if you can finish all courses. Otherwise, return false.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: numCourses = 2, prerequisites = [[1,0]]<br>
    Output: true <br>
    Explanation: 
        
        There are a total of 2 courses to take.
        
        To take course 1 you should have finished course 0. So it is possible.
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: numCourses = 2, prerequisites = [[1,0],[0,1]]<br>
    Output: false <br>
    Explanation: 
    
        There are a total of 2 courses to take. 
    
        To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= numCourses <= 2000
    
    → 0 <= prerequisites.length <= 5000
    
    → prerequisites[i].length == 2
    
    → 0 <= ai, bi < numCourses
    
    → All the pairs prerequisites[i] are unique.
<hr>


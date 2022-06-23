<a href="https://leetcode.com/problems/course-schedule-ii/"><h1> 210. Course Schedule II </h1></a>

- <h3>Question</h3>
    There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

        For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
    
    Return the ordering of courses you should take to finish all courses. If there are many valid answers, return any of them. If it is impossible to finish all courses, return an empty array.
<hr>

- <h3>Examples</h3>
    <div>
    <b>Example 1:</b>

    <!-- ![example-1](images/) -->

    Input: numCourses = 2, prerequisites = [[1,0]]<br>
    Output: [0,1] <br>
    Explanation: 
        
        There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1].
    </div>
    <br>
    <div>
    <b>Example 2:</b>

    Input: numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]<br>
    Output: [0,2,1,3] <br>
    Explanation: 
        
        There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0.
        
        So one correct course order is [0,1,2,3]. Another correct ordering is [0,2,1,3].
    </div>
    <br>
<hr>

- <h3>Constraints</h3>
    → 1 <= numCourses <= 2000
    
    → 0 <= prerequisites.length <= numCourses * (numCourses - 1)
    
    → prerequisites[i].length == 2
    
    → 0 <= ai, bi < numCourses
    
    → ai != bi
    
    → All the pairs [ai, bi] are distinct.
<hr>


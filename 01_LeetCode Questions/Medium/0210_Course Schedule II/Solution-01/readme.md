- <h3>Approach (Topological sort)</h3>
    <div>
    <p>
    → first we needs to make graph according to prerequisite.

    → we know that if want to take ai course then we must needs to complete bi course so, ai is depend on bi according to that we are making our graph and then we just needs to check whether the graph contain cycle or not.

    → if graph contain cycle then we can't complete all courses. so we are returning empty array as solution.

    → if graph doesn't contain cycle then we are running above algorithm second time and pushing ordered solution in our answer.
    </p>
    </div>
    <div>

    <h5>Time Complexity: </h5>
    <p>→ we are running algorithm of topological sort so time complexity of topological sort is O(numCourses + prerequisite.size())
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(numCourses + prerequisite.size())
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](Link) -->
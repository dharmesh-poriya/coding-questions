- <h3>Approach</h3>
    <div>
    <p>
    → The main concept is we can use ladder for any height. So suppose you are moving from the first building. Use bricks first upto as much you can go. When bricks are finished if height is more than maximum bricks used in a step use ladder or take the bricks from the biggest step and replace that with ladder. Now continue till ladders are finished and bricks are not sufficient.

    → So we can take a priority queue for storing the bricks used in each step and so that we can take out the maximum bricks used till a building. We add brick count to the queue whenever we use bricks and take out the max brick whenever we use ladder.

    → To reduce complexity of code we can provide brick at each step and if the brick count becomes negative then add a ladder at the biggest step (In this way we no need to compare the current step with the max brick used before, priority queue will handle the situation).

    → Similarly give ladder to a step when needed. If ladder count becomes negative then we cant go to next building and return the index of present building.
    </p>

    </div>
    <div>
    <h5>Time Complexity: </h5>
    <p>→ O(n*log(n))
    </p>
    <h5>Space Complexity:</h5>
    <p>→ O(n)
    </p>
    </div>
<hr>

- <h3>Reference</h3>
<!-- 1. [Click Here](Link) -->
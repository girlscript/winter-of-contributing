
# Finding roots by Newton's Method

Isaac Newton created this iterative method in the year 1664. However, because Raphson devised the identical technique a few years after Newton, but his work was published much earlier, this approach is sometimes sometimes referred to as the Raphson method.
Given the following equation: f(x) = 0, 
We need to solve the equation by finding its root on the interval [a,b], f(x) is assumed to be continuous and differentiable.

## Algorithm

The method's input parameters include not only the function f(x), but also a starting approximation - some x0 - with which the procedure begins.
If we already know xi, we may compute xi+1 in the following way. Find the location on the x-axis where the tangent to the graph of the function f(x) intersects. The x-coordinate of the discovered location is set to xi+1, and we start over.
The formula obtained is, 

# Vector Networks and Pen Tool

Vector networks are one of the most unique features in Figma. Most pen tools draw paths in a loop with a defined direction, always wanting to reconnect to their original point. Vector networks do not have a direction and can fork off in different directions without requiring a separate path object to be created. Complex objects can then be created within the same object and with the same properties much faster than they could be drawn using traditional vector path tools.
We will start off with the core concepts behind the pen tool, and from there we will move onto Figma’s Vector Networks.

## Pen Tool
The Pen tool allows you to create new vector points or to edit existing points. You can hold click while creating a new vector point to curve your vector lines.
![Pentool](https://miro.medium.com/max/1400/1*hnP3XGHVLIJpYRxtxikehg.png)

The pen comes with the initial shape, i.e., Straight Line.
Click and extend it in any direction. You can see it is a straight line. To terminate it click again at any point if you want to exit that particular SVG, press ESC.
![Line](https://miro.medium.com/max/323/1*57SFnJVwrvET2ozfaWGDWQ.png)

Now you will see this in the taskbar.
![Taskbar](https://miro.medium.com/max/364/1*1gzxt0RImdBMB-cfE_-y1g.png)
The curved symbol means we can curve it from ends. You can also do this by clicking on the small circle at the end.

## Paths
The pen tool is used to create and manipulate paths.
Paths are a series of lines and curves that may or may not form a loop. The main characteristic of paths is that they form a single continuous unbroken chain. This means that each node can only be connected to one or two other nodes.
![Paths](https://miro.medium.com/max/875/1*e_wN3hEylGfOYN8vNqiPiQ.png)

A path is made up of two things, points and lines. The points are known as **nodes** (or vertices) and the lines are called **edges**. Edges fall into two categories, straight and curvy.

### Editing a path:
If you select a path and hit ENTER, you’ll enter Vector Edit mode, in which you can select, adjust, or change properties of individual points, lines, or entire shapes. You can also use the Edit Object button from the Toolbar to enter Vector Edit. To exit, just hit ENTER again or press DONE in the toolbar.

## Bezier curves
Curvy edges are bezier curves. Bezier curves are a special type of curve defined by four points. The positions of the two nodes in our edge make up the start and end points of the curve. Each of the two nodes has a *control point*.
![Beziercurves](https://miro.medium.com/max/875/1*yEmwXuE_s2RnjWgB3fvGcg.png)

Vectors are composed of points, which can be curved using the Bezier Curve. At any point, you can select a vector point and edit the Bezier Curve by clicking on the endpoints/ Control points.

To access a point’s Bézier handles, enter Edit mode. If it is a curve, the handles will already be showing. If it is a corner with no handles, hold ⌘ and click the point to show the handles and create a mirrored curve.

### Rounded Corners
Any intermediate point on a path can be rounded via the Corner Radius property in the Inspector. If you select the entire path, it rounds all corners to the same degree. If you go into Edit mode, you can select individual points and round them separately.
![Roundedcorners1](https://images.ctfassets.net/ooa29xqb8tix/6gcYbF8GoMVicx1Y3GUZuh/c33fe40bbc77d93a40bb4efb82642b98/3.jpg)
Terminal points on an open path can only be rounded via End Caps.
![Roundedcorners2](https://images.ctfassets.net/ooa29xqb8tix/4oikGGVZ4oZPMY78c9M7Yd/7469949c9b2b4a43a22dde8890108646/4.png)

# VECTOR NETWORKS
A vector network is an improvement upon vector paths. It allows you to join any two points unlike vector paths which require forming a single chain that can't be broken. Vector networks make it very easy to create complex shapes which is especially useful while designing icons.
*A vector network improves on the path model by allowing lines and curves between any two points instead of requiring that they all join up to form a single chain.*

### An example for working with vector networks:
Create a rectangle 24x24 and rotate 45 degrees. Press enter to edit and select the Pen tool. Create a new vector point from the bottom point, and click at the nearest pixel. Press Shift and down arrow twice to move by 20 downwards. Repeat the same steps for the other 2 points. Then, close the bottom points from each side. Voila, you have a 3D-like cube.
You can customize the perspective by moving the top point down by 5, and the bottom point upwards by 5.
![cube](https://images.ctfassets.net/ooa29xqb8tix/29t9mlRAeMkkeMoEku6ISy/4a039da57f5d8b6cbad61ff23a52e348/DraggedImage.jpeg)



Image Credits: https://medium.com/ & https://designcode.io/


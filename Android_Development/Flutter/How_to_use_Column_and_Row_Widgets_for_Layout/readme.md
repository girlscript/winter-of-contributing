# How to use Column and Row Widgets for Layout

It's all very well and good using a container to layout a single widget, such as a piece of text or an image. And we can define its padding, its margin, its size, its background colour etc... But what if you had lots of different things that you want to lay out? 

In that case, you need something that can take lots of child, and not just a single one. And the easiest way to do this is using columns and rows so that we can lay out our widgets in a vertical direction or a horizontal direction, and determine how they should be sized.  **_Rows go horizontal, columns will go vertical_**. 

Let's go ahead and create a column of our own. 

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

So here's 3 Containers. Now a column doesn't have a child. It has `children` because we can put lots of things inside our column. And it's got this square brackets `[]`. We can put lots of widgets in between these `[]`. So now we have three containers all 100 by 100. All with different colours, and it's being laid out in a vertical direction. This is because we have all the containers inside a column. Now our columns will automatically try and take up as much of the vertical space as possible. So if we go into Flutter Inspector and we check out what the column looks like, you can see a box. It's trying to take up all of the space that is available vertically. But horizontally, it's limiting itself to the size of its children.

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/01/Screenshot_1633255092.png" alt="1" width="360" height="640" />
  </p>

We can change this. We can change its `mainAxisSize`, and the main axis for a column is of course vertical. So let's change this to the minimum size `mainAxisSize: MainAxisSize.min`. And you can see how the column shrinks to be the size that's only required to fit my three containers, all of its children.

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/02/Screenshot_1633255235.png" alt="2" width="360" height="640" />
  </p>

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisSize: MainAxisSize.min,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

Currently, our column is laying out its children from top to bottom, so Now what if we wanted to go the other direction instead? We can change its vertical direction. We can either change it to go up `verticalDirection: VerticalDirection.up`, which means it goes from the bottom to the top.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            verticalDirection: VerticalDirection.up,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/03/Screenshot_1633255337.png" alt="3" width="360" height="640" />
  </p>

Or we can change it as down `verticalDirection: VerticalDirection.down`, which is the default, where it goes from top to bottom.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            verticalDirection: VerticalDirection.down,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/04/Screenshot_1633255392.png" alt="4" width="360" height="640" />
</p>

Now what if you didn't want to change the direction of it, but instead you wanted to change the spacing between our containers. Well then you would use something called `mainAxisAlignment`, and by default, all of our containers are aligned to the start. So it's `MainAxisAlignment.start`. And this will try and place the children as close to the start of the main axis as possible.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.start,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/01/Screenshot_1633255092.png" alt="2" width="360" height="640" />
  </p>

However, we can also change it to an end. So if we had `MainAxisAlignment.end` then our containers will all be bunched down here, towards the end of our main axis. 

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.end,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/05/Screenshot_1633255471.png" alt="5" width="360" height="640" />
  </p>

Now you can also move it all to the centre `MainAxisAlignment.center`. And you can use a variety of these to determine how you want your screen to be laid out.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/06/Screenshot_1633255540.png" alt="6" width="360" height="640" />
  </p>

Now, what if we didn't want all of our children to be bunched together like this, at the centre at the start or the end. What if we wanted them to be spread out a bit. Well we can use something that's called **'spaceEvenly'** And this will calculate the amount of free space that the column has, and it'll space all of our children evenly throughout the column.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

But what if we wanted something to be at the start and something to be at the bottom, and then another one in the centre? Well, we would then use **'spaceBetween'** instead.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/08/Screenshot_1633255675.png" alt="8" width="360" height="640" />
  </p>

Now, what if I wanted to change the way that my containers are aligned on the horizontal axis? Well in this case, instead of using the main axis alignment property, I would be using something called the `CrossAxisAlignment`. And this is **_perpendicular to the main axis_**. So for columns, they'll be the horizontal. Now here, I also have access to the start `CrossAxisAlignment.start`, and also end `CrossAxisAlignment.end`. But you'll notice that if when I just go ahead and put `crossAxisAlignment: CrossAxisAlignment.end` in, and hit save to hot reload, nothing happens on the horizontal axis. And the reason for this is that my axis alignment is trying to align with my children. So that means say, if I had a much wider child, let's say `width:300`, then all of the children will align themselves to the right edge of each other. But if they're all the same size, then they're already aligned on the end, so they won't pop over to the right side.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.end,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:300.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/10/Screenshot_1633255845.png" alt="10" width="360" height="640" />
  </p>

Now if you wanted all your three containers to go over to the right, one way of doing this might be creating simply an invisible container, where you give it a width of infinity, and to give it a width of infinity, we write `width:double.infinity` And what this will do is it will create a container down here. It has no height. So it's just got a width, and it's as wide as the screen will allow it to be.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.end,
             children: [
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               ),
               Container (
                 width: double.infinity,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/11/Screenshot_1633255936.png" alt="11" width="360" height="640" />
  </p>


In this case, it's just the last bit. It doesn't have a colour. So it's completely invisible but it pushes all of the children to the right because we're now all aligning to the end of our column on the horizontal axis and one of our containers is as wide as the screen allows. Now, What if instead of doing this, you wanted actually to stretch all your containers, so that they fill the entire width? Now you could provide width for each of the containers, to be `double.infinity`.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.end,
             children: [
               Container(
                 height: 100.0,
                 width:double.infinity,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 width:double.infinity,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 width:double.infinity,
                 child: Text("Container 3"),
                   color: Colors.green,
               ),
               Container (
                 width: double.infinity,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

So now, all of the containers will stretch to the entire width that's possible.

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/12/Screenshot_1633256041.png" alt="12" width="360" height="640" />
  </p>

But there's a much easier way of doing this actually, by using a property that comes with the column. And instead of using `CrossAxisAlignment.end`, we can use `CrossAxisAlignment.stretch`. And this will stretch the children so that they can stretch across the screen. I no longer need to provide a width property for my containers because it's being stretched by its parent, the column.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
             children: [
               Container(
                 height: 100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               Container(
                 height: 100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               ),
               Container (
                 width: double.infinity,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/13/Screenshot_1633256126.png" alt="13" width="360" height="640" />
  </p>

Now what if you wanted a little bit of spacing between your containers. Because at the moment, they're all right next to each other with no space in between. If you know exactly how much space you want to have between your containers, you can use a `SizedBox`. And a `SizedBox` can have a height and width of course. But in the case of where it's being put inside a column, which is aligned vertically, then we only need to provide a height. So we can give it a `height:20`, and leave its width property as zero. And you can see, this goes in here between container 1 and container 2, and gives us a little bit of spacing between those two things. And it helps us when we want a little bit of space between our children. 

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
             children: [
               Container(
                 height: 100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               SizedBox(
                 height: 20.0,
               ),
               Container(
                 height: 100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 height: 100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               ),
               Container (
                 width: double.infinity,
               )
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/14/Screenshot_1633256235.png" alt="14" width="360" height="640" />
  </p>

Now, everything that I've written about columns also applies to rows. So in fact, I can straight up just change our column to a row, and you'll see it does the same thing on the horizontal axis. So in this case though, the main axis of row is of course horizontal but the cross axis alignment is vertical. The vertical alignment has to be stretched so all our containers are stretched vertically. And for all the children, they each have a height which doesn't get taken into account anymore because it's being stretched, but we can give it a width for example. So let's say we give it a width of 30 for the first one. You can see that gets affected because the containers are being aligned on the horizontal axis. Now you can see that the sized box disappeared because I'm giving it a height but that doesn't matter when it doesn't have a width. So in a row, to give it space, we're gonna be using a sized box with a width to give it a little bit of spacing.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white70,
        body: SafeArea(
          child: Row(
            crossAxisAlignment: CrossAxisAlignment.stretch,
             children: [
               Container(
                 width: 100.0,
                 child: Text("Container 1"),
                 color: Colors.orange,
               ),
               SizedBox(
                 width: 30.0,
               ),
               Container(
                 width: 100.0,
                 child: Text("Container 2"),
                 color: Colors.white,
               ),
               Container(
                 width: 100.0,
                 child: Text("Container 3"),
                   color: Colors.green,
               ),
             ],
          )
        ),
      ),
    );
  }
}
```

<p align="center">
<img src="https://github.com/iamayushkr/winter-of-contributing/blob/Android_Development_With_Flutter/Android_Development/Flutter/How_to_use_Column_and_Row_Widgets_for_Layout/Assets/15/Screenshot_1633256497.png" alt="15" width="360" height="640" />
  </p>

The best way of getting to know columns and rows and containers is really to try it out for yourself. 

Now while you're playing around with this. It's usually easier for us to see what something will do before actually writing out the code. So I recommend pulling up this [Flutter layout cheat sheet that's created by Tomek](https://medium.com/flutter-community/flutter-layout-cheat-sheet-5363348d037e).

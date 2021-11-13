# <div align="center">📱 Introduction to Animations ✨</div>

![image](https://user-images.githubusercontent.com/78701779/135496982-0b577d2a-3d9c-4714-8e19-8b5bbf87c7cb.png)


Animations are an essential part of making the UI of a mobile application feel natural and smooth to the user. Smooth transitions and interactive elements make an app pleasant to use. On the other hand, badly made animations can make the app look clumsy or worse, break the application altogether. For this reason, learning the fundamentals of animations in any framework is an essential step towards delivering a superior user experience.

Well-designed animations make a UI feel more intuitive, contribute to the slick look and feel of a polished app, and improve the user experience. Flutter's animation support makes it easy to implement a variety of animation types. Many widgets, especially [Material widgets](https://flutter.dev/docs/development/ui/widgets/material), come with the standard motion effects defined in their design spec, but it's also possible to customize these effects.


Flutter animations are a powerful aspect of the framework. In this documentation, we will look at the fundamentals of creating a flutter animation. The great thing about going through these fundamentals is that the structure stays the same even across most complex animations and learning this structure will give us a pathway to creating amazing user interfaces.

## **Choosing an Approach-:**

There are different approaches you can take when creating animations in Flutter. The following decision tree helps you decide what approach to use when implementing a Flutter animation:

<p align=center><img src="https://flutter.dev/assets/images/docs/ui/animations/animation-decision-tree.png" alt="decesion-tree" height=570px width=720px></p>

Now we will try to understand about each animation one by one-

- ### **Implicit Animations**-:

Flutter includes a series of widgets that are animated versions of existing widgets that you probably already used in your app, such as the [AnimatedContainer](https://api.flutter.dev/flutter/widgets/AnimatedContainer-class.html) version of the [Container](https://api.flutter.dev/flutter/widgets/Container-class.html) widget and the [AnimatedPositioned](https://api.flutter.dev/flutter/widgets/AnimatedPositioned-class.html) version of the [Positioned](https://api.flutter.dev/flutter/widgets/Positioned-class.html) widget.

These widgets automatically animate changes to their properties. When you rebuild the widget with new property values, such as with a [StatefulWidget](https://api.flutter.dev/flutter/widgets/StatefulWidget-class.html)'s `setState`, the widget handles driving the animation from the previous value to the new value.

<p align=center><img src="https://miro.medium.com/max/60/0*8lW_z0nxESDIBO9R?q=20" alt="A screen recording where the code for an app is modified and the application animates the size of a star widget.
"></p>


These widgets are called [Implicitly Animated Widgets](https://api.flutter.dev/flutter/widgets/ImplicitlyAnimatedWidget-class.html). They are typically the first thing you reach for when you need to add animations to your app. They provide a way to add animations without adding additional complexity.


- ### **Explicit Animations**

Now implicit Animations works perfectly for many animation goals, but sometimes that ever-forward arrow of time leaves us feeling temporally locked. So, as we pause and contemplate the laws of thermodynamics and the inevitable heat death of the universe, wouldn't it be nice if we could reverse time, and do it all again?

Enter our first foray into Flutter's explicit animations! We won't be building any time machines today, but we will be learning how to gain a bit more control over your animations using Transition widgets.

Transition widgets are a set of Flutter widgets whose names all end in --- you guessed it ---Transition. [`ScaleTransition`](https://api.flutter.dev/flutter/widgets/ScaleTransition-class.html), [`DecoratedBoxTransition`](https://api.flutter.dev/flutter/widgets/DecoratedBoxTransition-class.html), [`SizeTransition`](https://api.flutter.dev/flutter/widgets/SizeTransition-class.html), and more. They look and feel a lot like our `AnimatedBlah` widgets. [`PositionedTransition`](https://api.flutter.dev/flutter/widgets/PositionedTransition-class.html), for example, animates a widget's transition between different positions. This is much like [`AnimatedPositioned`](https://api.flutter.dev/flutter/widgets/AnimatedPositioned-class.html), but there is one major difference: these Transition widgets are extensions of [`AnimatedWidget`](https://api.flutter.dev/flutter/widgets/AnimatedWidget-class.htmlhttps://api.flutter.dev/flutter/widgets/AnimatedWidget-class.html). This makes them *explicit animations*.

## **Type of Animations-:**

Generally, animations are either tween- or physics-based. The following sections explain what these terms mean, and point you to resources where you can learn more.

- ### Tween animation

Short for *in-betweening*. In a tween animation, the beginning and ending points are defined, as well as a timeline, and a curve that defines the timing and speed of the transition. The framework calculates how to transition from the beginning point to the end point.

The documents listed above, such as the [Animations tutorial](https://flutter.dev/docs/development/ui/animations/tutorial), are not specifically about tweening, but they use tweens in their examples.

- ### Physics-based animation

In physics-based animation, motion is modeled to resemble real-world behavior. When you toss a ball, for example, where and when it lands depends on how fast it was tossed and how far it was from the ground. Similarly, dropping a ball attached to a spring falls (and bounces) differently than dropping a ball attached to a string.

  *   [Animate a widget using a physics simulation](https://flutter.dev/docs/cookbook/animation/physics-simulation)\
    A recipe in the animations section of the Flutter cookbook.

  *   [Flutter Gallery](https://github.com/flutter/gallery)\
    Under Material Components, the [`Grid`](https://github.com/flutter/gallery/blob/master/lib/demos/material/grid_list_demo.dart) example demonstrates a fling animation. Select one of the images from the grid and zoom in. You can pan the image with flinging or dragging gestures.

  *   Also see the API documentation for [`AnimationController.animateWith`](https://api.flutter.dev/flutter/animation/AnimationController/animateWith.html) and [`SpringSimulation`](https://api.flutter.dev/flutter/physics/SpringSimulation-class.html).

## **Pre-canned animations**

If you are using Material widgets, you might check out the [animations package](https://pub.dev/packages/animations) available on pub.dev. This package contains pre-built animations for the following commonly used patterns: `Container` transforms, shared axis transitions, fade through transitions, and fade transitions.

## **Common animation patterns**

Most UX or motion designers find that certain animation patterns are used repeatedly when designing a UI. This section lists some of the commonly used animation patterns, and tells you where to learn more.

### Animated list or grid

This pattern involves animating the addition or removal of elements from a list or grid.

-   [`AnimatedList` example](https://flutter.github.io/samples/animations.html)\
    This demo, from the [Sample app catalog](https://flutter.github.io/samples), shows how to animate adding an element to a list, or removing a selected element. The internal Dart list is synced as the user modifies the list using the plus (+) and minus (-) buttons.

### [](https://flutter.dev/docs/development/ui/animations#shared-element-transition)Shared element transition

In this pattern, the user selects an element---often an image---from the page, and the UI animates the selected element to a new page with more detail. In Flutter, you can easily implement shared element transitions between routes (pages) using the `Hero` widget.

-   [Hero animations](https://flutter.dev/docs/development/ui/animations/hero-animations) How to create two styles of Hero animations:
    -   The hero flies from one page to another while changing position and size.
    -   The hero's boundary changes shape, from a circle to a square, as its flies from one page to another.
-   [Flutter Gallery](https://github.com/flutter/gallery)\
    You can build the Gallery app yourself, or download it from the Play Store. The [Shrine](https://github.com/flutter/gallery/tree/master/lib/studies/shrine) demo includes an example of a hero animation.

-   Also see the API documentation for the [`Hero`](https://api.flutter.dev/flutter/widgets/Hero-class.html), [`Navigator`](https://api.flutter.dev/flutter/widgets/Navigator-class.html), and [`PageRoute`](https://api.flutter.dev/flutter/widgets/PageRoute-class.html) classes.

### Staggered animation

Animations that are broken into smaller motions, where some of the motion is delayed. The smaller animations might be sequential, or might partially or completely overlap.

-   [Staggered Animations](https://flutter.dev/docs/development/ui/animations/staggered-animations)


## **Description of Animations-:**

### 1. **Tween Animations-:**

```dart
// Tween Animation Example. Replace main.dart in a flutter project // with this code
import 'package:flutter/material.dart';
import 'package:flutter/animation.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  _MyApp createState() => _MyApp();
}

class _MyApp extends State<MyApp> with SingleTickerProviderStateMixin {
  Animation<double> animation;
  AnimationController controller;

  @override
  void initState() {
    super.initState();

    controller =
        AnimationController(vsync: this, duration: Duration(seconds: 2));
    animation = Tween<double>(begin: 0, end: 300).animate(controller)
      ..addListener(() {
        setState(() {});
      })
      ..addStatusListener((status) {
        if (status == AnimationStatus.completed) {
          controller.reverse();
        } else if (status == AnimationStatus.dismissed) {
          controller.forward();
        }
      });

    controller.forward();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Center(
        child: Container(
          color: Colors.white,
          height: animation.value,
          width: animation.value,
        ),
      ),
    );
  }

  @override
  void dispose() {
    controller.dispose();
    super.dispose();
  }
}
```
Above dart code builds a scaling up-down white container animation loop as seen below.

<p align=center><img src="https://miro.medium.com/max/200/1*V9zfWuhLeekTwC7B_NbyaQ.gif" alt="gif"></p>

Now the major components of the code can be explained by,
**`SingleTickerProviderStateMixin:`** This mixin allow us to use ONE animation controller in a state. If you need multiple controllers in a state we can use TickerProviderStateMixin.

**`AnimationController:`** This class will help us to control our animation with methods like reverse, forward, animateTo, animateBack. And some useful properties like isAnimating, isCompleted, isDismissed…

**`Tween:`** Tween returns an Animatable typed object but we use animate method on tween and it returns an animation typed object and with double-dot syntax we can assign it to animation variable. As you see tween has a start and end value.

**`vsync:`** This animation controller’s parameter is type of TickerProvider. We passed “this” as vsync because our SingleTickerProviderStateMixin implements TickerProvider class.

**`addListener:`** This listener fires every time the value of tween changes between min and max values. We pass setState function to listener so whenever tween value changes our widget updates itself.

**`addStatusListener:`** This listener fires when status of animation changes. With this listener we were able to loop our animation. AnimationStatus.dismissed means animation reversed and reached where it started first.


### 2. **Physics-based animation-:**

```dart
import 'package:flutter/material.dart';
import 'package:flutter/animation.dart';
import 'package:flutter/physics.dart';
 
void main() => runApp(PhysicsAnimation());
 
class PhysicsAnimation extends StatefulWidget {
  _PhysicsAnimation createState() => _PhysicsAnimation();
}
 
class _PhysicsAnimation extends State<PhysicsAnimation>
    with SingleTickerProviderStateMixin{
  
  AnimationController controller;
  GravitySimulation simulation;
  
  @override
  void initState() {
    super.initState();
 
    simulation = GravitySimulation(
      100.0, // acceleration
      0.0, // starting point
      500.0, // end point
      0.0, // starting velocity
    );
 
    controller =
        AnimationController(vsync: this, upperBound: 500)
          ..addListener(() {
            setState(() {});
          });
 
    controller.animateWith(simulation);
  }
 
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Stack(
        children: [
          Positioned(
            left: 50,
            top: controller.value,
            height: 10,
            width: 10,
            child: Container(
              color: Colors.redAccent,
            ),
          ),
        ]
      ),
    );
  }
 
  @override
  void dispose() {
    controller.dispose();
    super.dispose();
  }
}
```
Some part of this code is already explained in the tween animations now the extra part can be explained as-:

**`GravitySimulation:`** A class for simulating gravity initialized with acceleration, starting point, ending point and starting velocity. In this example we provide 100 units for acceleration and our destination is zero to 500 with zero initial velocity.

**`upperBound:`** This may be a bug or it is just me. End position in simulation will not work as expected because AnimationController class value has a max and min limit. Default value for upperBound is 1. When you use simulation and your controller.value stucks at 1 you should change upperBound value accordingly. There is lowerBound property too which is default 0. We don’t need it in this example but it would be useful if we wanted to set our starting point to a negative value.

**`controller.animateWith:`** We tell our controller to use the simulation we initialized. You may notice that we didn’t set any duration in our controller because controller will calculate duration of animation with parameters we set in our simulation.

After all these we use controller.value in the Positioned widget wrapped with a Stack widget. And we have this;

<p align=center><img src="https://miro.medium.com/max/480/1*3XP-8HAjSuvjN8q_7t6mVA.gif" alt="gif" height=580px width=300px></p>

Next is SpringSimulation.

```dart
import 'package:flutter/material.dart';
import 'package:flutter/animation.dart';
import 'package:flutter/physics.dart';

void main() => runApp(PhysicsAnimation());

class PhysicsAnimation extends StatefulWidget {
  _PhysicsAnimation createState() => _PhysicsAnimation();
}

class _PhysicsAnimation extends State<PhysicsAnimation>
    with SingleTickerProviderStateMixin{
  AnimationController controller;

  SpringSimulation simulation;

  @override
  void initState() {
    super.initState();

    simulation = SpringSimulation(
      SpringDescription(
        mass: 1,
        stiffness: 100,
        damping: 1,
      ),
      0.0, // starting point
      300.0, // ending point
      10, // velocity
    );

    controller =
    AnimationController(vsync: this, upperBound: 500, )
      ..addListener(() {
        print(controller.value);
        setState(() {});
      });

    controller.animateWith(simulation);
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Stack(
          children: [
            Positioned(
              left: 50,
              top: controller.value,
              height: 10,
              width: 10,
              child: Container(
                color: Colors.redAccent,
              ),
            ),
          ]
      ),
    );
  }

  @override
  void dispose() {
    controller.dispose();
    super.dispose();
  }
}
```

Most is same with previous example. We’ve just used another simulation class. Notice upperBound value is bigger than ending point in simulation parameters because of spring’s oscillation.
Check out these GIFs to see how SpringDescription’s parameters affect the animation.

- #### mass:1 stiffness:100 damping: varies

<p align=center><img src="https://miro.medium.com/max/480/1*uc6G1YXvtTwBN6rA39esEA.gif" alt="gif" height=580px width=300px></p>

- #### mass:1 damping:1 stiffness: varies

<p align=center><img src="https://miro.medium.com/max/480/1*_oDYHPkZFWgXOOwywuxTfA.gif" alt="gif" height=580px width=300px></p>

<hr>
So that’s all that you need to know to get started with Animations in Flutter. Hope you found it helpful.If you have any doubts you can definetly visit the official documentation of [Flutter](https://flutter.dev/docs/development/ui/animations/tutorial).

## HAPPY LEARNING 🙌✨

### REFERENCES

- For preparing these documents official documentation of [flutter](hhttps://flutter.dev/docs/development/ui/animations/tutorial). was referred for maintaining the authenticity of the code and also for making the topics more informative some external sources like blogs were referred.
- The links of blog that were reffered -:
<table align=center><tr><td><a href="https://erdoganbavas.medium.com/tween-animations-in-flutter-7e24844c1d19" target=_blank>Link1</a></td><td><a href="https://erdoganbavas.medium.com/physics-based-animations-in-flutter-1d20130919a1" target=_blank>Link2</a></td></tr></table>

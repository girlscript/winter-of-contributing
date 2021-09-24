# **Introduction to Flutter Widgets**
Widgets are everything in Flutter framework.Flutter is Google’s UI toolkit for crafting beautiful, natively compiled iOS and Android apps from a single code base. To build any application we start with widgets – The building block of flutter applications. Widgets describe what their view should look like given their current configuration and state. It includes a text widget, row widget, column widget, container widget, and many more. 

 Widgets describe what their view should look like given their current configuration and state. When a widget’s state changes, the widget rebuilds its description, which the framework diffs against the previous description in order to determine the minimal changes needed in the underlying render tree to transition from one state to the next.
 


#**What are Widgets ?**

 Each element on a screen of the Flutter app is a widget. The view of the screen completely depends upon the choice and sequence of the widgets used to build the app. And the structure of the code of an app is a tree of widgets. 

Widgets are nested with each other to build the app. It means the root of your app is itself a widget, and all the way down is a widget also. For example, a widget can display something, can define design, can handle interaction, etc.

So, Whenever you are going to code for building anything in Flutter, it will be inside a widget. The central purpose is to build the app out of widgets. It describes how your app view should look like with their current configuration and state. When you made any alteration in the code, the widget rebuilds its description by calculating the difference of previous and current widget to determine the minimal changes for rendering in UI of the app.

### ***Widget is a description of a part of UI.***
1.In flutter, Widget is a way to declare and construct UI.

2.If you are familiar with the Android or iOS development then you might make the immediate connection with the views (on Android) or UIViews (on iOS).
But dear just like view, Widget is not just a piece of UI. Widget is a lot more than just structural elements like buttons, text, image, list or slider.

3.A widget might display Something, it might help define design, it might help with layout, it may handle user interaction, etc.
For example, Padding is a widget, Margin is a widget, Center is a widget, Layout rows and columns are also widgets.
So you can consider that a widget is a blueprint. Flutter uses these blueprints to create views.
Here also remember that in flutter everything is a widget. Even your app itself is a widget.

## **Types of Widgets**

There are broadly two types of widgets in the flutter: 

1. Stateless Widget
2. Stateful Widget


# **Stateless Widget**
*A widget that does not require mutable state.*

A stateless widget is a widget that describes part of the user interface by building a constellation of other widgets that describe the user interface more concretely. The building process continues recursively until the description of the user interface is fully concrete.

In simple words, if a widget doesn’t do anything its Stateless Widget. They are static in nature.
Stateless widgets don’t store any state. That means they don’t store values that might change.
You can also say that stateless widgets are “DATALESS” widgets. As they don’t store any real-time data.


For example, if you have a simple Text widget on the screen, but it doesn’t do anything then its Stateless Widget.
Icon, IconButton, and Text are an example of stateless widgets.

Stateless widget are useful when the part of the user interface you are describing does not depend on anything other than the configuration information in the object itself and the BuildContext in which the widget is inflated. For compositions that can change dynamically, e.g. due to having an internal clock-driven state, or depending on some system state, consider using StatefulWidget.

###**A StateLess Widget looks like this** 


```
class Car extends StatelessWidget {
  const Car({ Key key }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(color: const Color(0xFF2DBD3A));
  }
}
```













# **Stateful Widget**
*A widget that has mutable state*

A stateful widget is a widget that describes part of the user interface by building a constellation of other widgets that describe the user interface more concretely. The building process continues recursively until the description of the user interface is fully concrete.

In simple words, if a widget does anything then its Stateful Widget.
A Stateful widget is dynamic in nature. That means it can keep track of changes and update the UI based on those changes.
The user can interact with a stateful widget.

 For example, If you press a button and it performs any task its a Stateful Widget, If you are moving a slider and it does anything then its a Stateful Widget, If you swipe item from a list and item gets deleted then that list a Stateful Widget.
CheckBox, Radio, Slider, InkWell, Form, and TextField are an example of stateful widgets.


Stateful widgets are useful when the part of the user interface you are describing can change dynamically, e.g. due to having an internal clock-driven state, or depending on some system state.

### A StateFul Widget look like this 

```
class BlueCar extends StatefulWidget {
  const BlueCar({ Key key, @required child }) : super(key: key);  // Constructor

  @override
  _BlueCarState createState() => _BlueCarState();
}

class _BlueCarState extends State<BlueCar> {
  @override
  Widget build(BuildContext context) {
    return Container(
      color: const Color(0xFFFFE306),
      child: Container(
             child: Container(
                    //child: Container()
                             )
                      )
     
    );
    
  }
}
```

## **Category of Widgets**: 
There are mainly 14 categories in which the flutter widgets are divided. They are mainly segregated on the basis of the functionality they provide in a flutter application.

**Accessibilit**y: These are the set of widgets that make a flutter app more easily accessible.


**Animation and Motion**: These widgets add animation to other widgets.


**Assets, Images, and Icons**: These widgets take charge of assets such as display images and show icons.


**Async**:These provide async functionality in the flutter application.
Basics: These are the bundle of widgets which are absolutely necessary for the development of any flutter application.

**Cupertino:** These are the ios designed widgets.

**Input**: This set of widgets provide input functionality in a flutter application.


**Interaction Models**: These widgets are here to manage touch events and route users to different views in the application.


 **Layout**: This bundle of widgets helps in placing the other widgets on the screen as needed.


**Material Components**: This is a set of widgets that mainly follow material design by Google.


**Painting and effects**: This is the set of widgets which apply visual changes to their child widgets without changing their layout or shape.


**Scrolling**: This provides sacrollability of to a set of other widgets that are not scrollable by default.


**Styling**: This deals with the theme, responsiveness, and sizing of the app.

**Text**: This displays the texts.






## **Layout widgets**
In Flutter, a widget can be created by composing one or more widgets. To compose multiple widgets into a single widget, Flutter provides large number of widgets with layout feature. For example, the child widget can be centered using Center widget.

Some of the popular layout widgets are as follows −

**Container** − A rectangular box decorated using BoxDecoration widgets with background, border and shadow.

**Center** − Center its child widget.

**Row** − Arrange its children in the horizontal direction.

**Column** − Arrange its children in the vertical direction.

**Stack** − Arrange one above the another



To read more about widgets,Please follow [this](https://flutter.dev/docs/development/ui/widgets-intro).
"""

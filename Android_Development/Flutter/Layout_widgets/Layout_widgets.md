# **Layout Widgets**

In Flutter, almost everything is a widget—even layout models are widgets. The images, icons, and text that you see in a Flutter app are all widgets. But things you don’t see are also widgets, such as the rows, columns, and grids that arrange, constrain, and align the visible widgets.

## **Layout a widget**

Let us learn how we can create and display a simple widget. The following steps show how to layout a widget:

Step 1: First, you need to **select a Layout widget**.

Choose from a variety of layout widgets based on how you want to align or constrain the visible widget, as these characteristics are typically passed on to the contained widget.

---

This example uses Center which centers its content horizontally and vertically.

Step 2: Next, **create a visible widget**.

> For example, create a Text widget:

```
Text('Hello World'),
```

> Create an Image widget:

```
Image.asset(
  'images/lake.jpg',
  fit: BoxFit.cover,
),
```

> Create an Icon widget:

```
Icon(
Icons.star,
color: Colors.red[500],
),

```

Step 3: Then, add the visible widget to the layout widget.

All layout widgets have either of the following:

- A child property if they take a single child—for example, Center or Container
- A children property if they take a list of widgets—for example, Row, Column, ListView, or Stack.
  > Add the Text widget to the Center widget:

```

const Center(
child: Text('Hello World'),
),

```

Step 4: Finally, add the layout widget to the page where you want to display.

- A Flutter app is itself a widget, and most widgets have a build() method. Instantiating and returning a widget in the app’s build() method displays the widget.

.

## **Types of Layout Widgets**

We can categories the layout widget into two types:

- Single Child Widget
- Multiple Child Widget

Let us look at Single Child Widgets

# **Single Child Layout Widgets**

The single child layout widget is a type of widget, which can have only one child widget inside the parent layout widget. These widgets can also contain special layout functionality. Flutter provides us many single child widgets to make the app UI attractive. If we use these widgets appropriately, it can save our time and makes the app code more readable.

For example, Center widget just centers it child widget with respect to its parent widget and Container widget provides complete flexibility to place it child at any given place inside it using different option like padding, decoration, etc.,

Single child widgets are great options to create high quality widget having single functionality such as button, label, etc.

The list of different types of single child widgets are:

- # **Container**
  It is the most popular layout widget that provides customizable options for painting, positioning, and sizing of widgets.

```

Center(
 child: Container(
 margin: const EdgeInsets.all(15.0),
 color: Colors.blue,
 width: 42.0,
 height: 42.0,
 ),
)

```

- # **Padding**

It is a widget that is used to arrange its child widget by the given padding. It contains EdgeInsets and EdgeInsets.fromLTRB for the desired side where you want to provide padding.

```

const Greetings(
 child: Padding(
 padding: EdgeInsets.all(14.0),
 child: Text('Hello JavaTpoint!'),
 ),
)

```

- # **Center**:

  This widget allows you to center the child widget within itself.

- # **Align**:
  It is a widget, which aligns its child widget within itself and sizes it based on the child's size. It provides more control to place the child widget in the exact position where you need it.

```Center(
 child: Container(
   height: 110.0,
   width: 110.0,
   color: Colors.blue,
   child: Align(
     alignment: Alignment.topLeft,
     child: FlutterLogo(
       size: 50,
     ),
   ),
 ),
)
```

- # **SizedBox**:
  This widget allows you to give the specified size to the child widget through all screens.

```
SizedBox(
  width: 300.0,
  height: 450.0,
  child: const Card(child: Text('Hello JavaTpoint!')),
)
```

- # **AspectRatio**:
  This widget allows you to keep the size of the child widget to a specified aspect ratio.

```
AspectRatio(
  aspectRatio: 5/3,
  child: Container(
    color: Colors.bluel,
  ),
),
```

- # **Baseline**:
  This widget shifts the child widget according to the child's baseline.

```
child: Baseline(
         baseline: 30.0,
         baselineType: TextBaseline.alphabetic,
         child: Container(
              height: 60,
              width: 50,
              color: Colors.blue,
         ),
)
```

- # **ConstrainedBox**:
  It is a widget that allows you to force the additional constraints on its child widget. It means you can force the child widget to have a specific constraint without changing the properties of the child widget.

```
ConstrainedBox(
  constraints: new BoxConstraints(
    minHeight: 150.0,
    minWidth: 150.0,
    maxHeight: 300.0,
    maxWidth: 300.0,
  ),
  child: new DecoratedBox(
    decoration: new BoxDecoration(color: Colors.red),
  ),
),
```

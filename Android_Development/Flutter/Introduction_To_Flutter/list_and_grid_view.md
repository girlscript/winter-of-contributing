
<h1 align="center">List And Grid View</h1>


## :yellow_circle: What is List view ?
List view is a widget which is used to display items such as texts ,icons, labels one below the other in a scrollable view.

### :point_right: ListView():
This class can be used when you have a defined amount of items to be displayed such as displaying a menu in settings page.

####  Syntax:

```dart
ListView(
    children:<Widget>[
        //Widget items here
    ]
)
```

```dart
ListView(
          children:<Widget> [
            //If you know the no.of items this is how you can specify.
            Container(
              height: 300,
              width: 300,
              color: Colors.grey,
              child: Center(child: Text('List 1 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.blue,
              child: Center(child: Text('List 2 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.green,
              child: Center(child: Text('List 3 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.yellow,
              child: Center(child: Text('List 4 ')),
            ),
          ],
        )
```

![ezgif com-gif-maker](https://user-images.githubusercontent.com/76723996/134360201-8cd3e4d3-c713-4bed-b15d-55508565bc17.gif)

## :point_right: ListView.builder():
Imagine you have a big (undefined) list of items to be displayed , it is a very tedious process to manually code for such a big list and that's when you use **ListView.builder()** constructor. It takes **itemcount** and **itembuilder** as arguments where you specify the number of items to show in itemcount (also can be a dynamic value) and the widget to be returned or  built in itembuilder.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Views',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: MyHomePage(title: 'ListView.builder()'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  final _items = [
    "India",
    "China",
    "United States",
    "Indonesia",
    "Pakistan",
    "Brazil",
    "Nigeria",
    "Russia",
    "Mexico",
    "Bangladesh",
    "Japan",
    "Ethiopia"
  ]; // this is a dynamic data ,if you add or remove items it will reflect in the UI.
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: ListView.builder(
        itemCount: _items
            .length, //fetching data dynamically i.e if we  change the value in _items it will also change here.
        itemBuilder: (context, index) {
          return Card(
            child: ListTile(
              title: Text(_items[index].toString()),
            ),
          );
        },
      ),
    );
  }
}

```

![ezgif com-gif-maker (3)](https://user-images.githubusercontent.com/76723996/134699221-ff530f68-defd-4c56-aef1-5183a3a046cb.gif)

## :yellow_circle: What is Grid view?
Grid view is a widget which is used to display items such as texts ,icons etc like a grid (row and column manner) and also makes it scrollable.

### :point_right: GridView.count():
This is used when you have defined number of data. It takes **crossAxisCount** where you specify the number of columns you want. You can also use **mainAxisSpacing** and **crossAxisSpacing** to give spacing between grids.
#### Syntax:

```dart
GridView.count(
   crossAxisCount://no. of columns
    children:<Widget>[
        //Widget items here
    ]
)
```

```dart
 GridView.count(
          crossAxisCount: 2,//no. of columns 
          mainAxisSpacing: 10,//specifies space between grids horizontally
          crossAxisSpacing: 10,//specifies space between vertically
          children:<Widget> [
            //If you know the no.of items this is how you can specify.
            Container(
              height: 300,
              width: 300,
              color: Colors.grey,
              child: Center(child: Text('Grid 1 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.blue,
              child: Center(child: Text('Grid 2 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.green,
              child: Center(child: Text('Grid 3 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.yellow,
              child: Center(child: Text('Grid 4 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.orange,
              child: Center(child: Text('Grid 5 ')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.pink,
              child: Center(child: Text('Grid 6')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.purple,
              child: Center(child: Text('Grid 7')),
            ),
            Container(
              height: 300,
              width: 300,
              color: Colors.lightBlue,
              child: Center(child: Text('Grid 8')),
            ),
          ],
        )
```




![ezgif com-gif-maker (4)](https://user-images.githubusercontent.com/76723996/134703681-a2c2abd9-ae97-4bb9-8f4e-1e06f3fd9c87.gif)

## :point_right:GridView.builder():
This is used when you want to display a grid of dynamic data . It takes **itemcount** where you specify the  number of items you want to display, **gridDelegate** where you mention the number of columns and **itemBuilder** to return a widget.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Views',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: MyHomePage(title: 'GridView.builder()'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  final _items = [
    "India",
    "China",
    "United States",
    "Indonesia",
    "Pakistan",
    "Brazil",
    "Nigeria",
    "Russia",
    "Mexico",
    "Bangladesh",
    "Japan",
    "Ethiopia"
  ]; // this is a dynamic data ,if you add or remove items it will reflect in the UI.
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: GridView.builder(
        itemCount: _items
            .length, //fetching data dynamically i.e if we  change the value in _items it will also change here.
        gridDelegate:
            SliverGridDelegateWithFixedCrossAxisCount(crossAxisCount: 2),
        itemBuilder: (context, index) {
          return Card(
            child: ListTile(
              title: Text(_items[index].toString()),
            ),
          );
        },
      ),
    );
  }
}


```
![ezgif com-gif-maker (2)](https://user-images.githubusercontent.com/76723996/134668346-61520cd0-540e-49a6-88fa-384961922db7.gif)
 



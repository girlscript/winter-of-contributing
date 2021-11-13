 <h1 align="center"> :yellow_circle: Flutter Material Components :yellow_circle: </h1>

### 📑 Contents

- [:point_right: MaterialApp():](#point_right-materialapp)
- [:point_right: Scaffold():](#point_right-scaffold)
- [:point_right: TabBar():](#point_right-tabbar)
- [:point_right: ElevatedButton():](#point_right-elevatedbutton)
- [:point_right:  DropDownButton():](#point_right--dropdownbutton)
- [:point_right: IconButton():](#point_right-iconbutton)
- [:point_right: OutlinedButton():](#point_right-outlinedbutton)
- [:point_right: PopupMenuButton():](#point_right-popupmenubutton)
- [:point_right: TextButton():](#point_right-textbutton)
- [:point_right:  Checkbox():](#point_right--checkbox)
- [:point_right: Date and Time picker:](#point_right-date-and-time-picker)
- [:point_right: Radio():](#point_right-radio)
- [:point_right: Slider():](#point_right-slider)
- [:point_right: Switch():](#point_right-switch)
- [:point_right: TextField():](#point_right-textfield)
- [:point_right: AlertDialog():](#point_right-alertdialog)
- [:point_right: SnackBar():](#point_right-snackbar)
- [:point_right: Card():](#point_right-card)
- [:point_right: CircularProgressIndicator() and LinearProgressIndicator():](#point_right-circularprogressindicator-and-linearprogressindicator)
- [:point_right: Image():](#point_right-image)

## :point_right: MaterialApp():

MaterialApp is the main component in flutter. It is a class in flutter. It allows us to acces widgets such as AppBar,Scaffold,Texxtfield,IconButton,Themedata etc making the look of your appp more attractive.

It takes in the following basic constructors:

**title:** This helps the user to give a short title for the app which will be displayed when the user opens the recent apps.

**theme:** This is used to provide theme-color of the application. It takes an inbuilt widget `ThemeData()` which takes in properties related to theme. By using ThemeData() we can specify other components such as AppBar,TextTheme,darkTheme etc.

**home:** This is the default route of the app which means whenever the application runs, the widget which is specified here will run first.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        title: 'App',
        theme: ThemeData(
          primarySwatch: Colors.blue,
        ),
        home: Text("Hello"),
        );
  }
}

```

![MaterialApp](https://user-images.githubusercontent.com/76723996/136075993-7a33b9e8-5ccb-4f86-8e44-bb2b5d69980e.png)

## :point_right: Scaffold():

Scaffold is a widget which provides a base screen for the child widget to render on. It occupies whole device screen. This class provides widgets or Api's for components such as Drawer, SnackBar, BottomNavigationBar, AppBar, FloatingActionButton, etc thus saving time from building each components manually.

Some of the constructors are:

**appBar:** It is a bar which is displayed at the top of the screen. It uses an `AppBar()` class which contain properties to alter the look of the appbar.

**body:** It is used to display widgets in scaffold such as floatingactionbutton ,drawer etc. By default these widgets get positioned at the top left corner below the app bar.

**drawer:** This displays a drawer to the left side with an icon (hamburger icon) on the appbar. The swipe gesture open the drawer is automatically set to true. It takes in a `Drawer()` class where you specify the items you want to show in the drawer

**floatingActionButton:** It displays a round floating button to the bottom right corner of the body .It floats over the the contents of the screen. It is used to perform quick actions such as adding a new note in your notes app , marking a date in your calender etc. It takes in `FloatingActionButton()` class where you can specify the way the button should look.

**bottomNavigationBar:** This property displays a navigation bar at the bottom of the screen. This bar contains icons related to page it is going to take you if you click that. It takes in `BottomNavigationBarItem()` class where you could specify the title ,icon and the process it has to do when you tap in onTap.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

int i = 0;
int _currindex = 0;

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Tab Bar"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              "Hello",
              style: TextStyle(fontWeight: FontWeight.bold, fontSize: 21.0),
            ),
            Text(
              "Pressed floating action button $i times",
              style: TextStyle(fontWeight: FontWeight.bold, fontSize: 21.0),
            )
          ],
        ),
      ),
      drawer: Drawer(
        child: ListView(
          children: <Widget>[
            ListTile(
              title: Text("Item 1"),
              onTap: () {
                //Write code to update state
                Navigator.pop(context);
              },
            ),
            ListTile(
              title: Text("Item 2"),
              onTap: () {
                //Write code to update state
                Navigator.pop(context);
              },
            ),
            ListTile(
              title: Text("Item 3"),
              onTap: () {
                //Write code to update state
                Navigator.pop(context);
              },
            )
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        child: Icon(Icons.add),
        onPressed: () {
          setState(() {
            i++;
          });
        },
      ),
      bottomNavigationBar: BottomNavigationBar(
        items: [
          BottomNavigationBarItem(label: "Home", icon: Icon(Icons.home)),
          BottomNavigationBarItem(label: "Camera", icon: Icon(Icons.camera)),
          BottomNavigationBarItem(label: "Profile", icon: Icon(Icons.person)),
        ],
        currentIndex: _currindex,
        iconSize: 30,
        onTap: (index) {
          setState(() {
            _currindex = index;
          });
        },
      ),
    );
  }
}

```

![ezgif com-gif-maker](https://user-images.githubusercontent.com/76723996/136261295-953d88fd-7877-4d6a-8f35-0bc38818fcd8.gif)

## :point_right: TabBar():

This class allows us to create tabs for easy navigation between screens. To have tabs first we need to create `TabBar()` and `TabBarView()` and combine Them with `TabController()`.This controller help in syncing the tab with the screen.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return DefaultTabController(
      child: Scaffold(
        appBar: AppBar(
          title: Text("Tab Bar"),
          bottom: TabBar(
            tabs: [
              Tab(
                text: "Tab 1",
              ),
              Tab(
                text: "Tab 2",
              )
            ],
          ),
        ),
        body: TabBarView(
          children: [Tab1(), Tab2()],
        ),
      ),
      length: 2,
      initialIndex: 0,
    );
  }
}

class Tab1 extends StatelessWidget {
  const Tab1({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Text("Tab 1", style: TextStyle(fontSize: 30)),
    );
  }
}

class Tab2 extends StatelessWidget {
  const Tab2({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Text("Tab 2", style: TextStyle(fontSize: 30)),
    );
  }
}

```

![ezgif com-gif-maker (1)](https://user-images.githubusercontent.com/76723996/136261504-a820796f-3805-4743-accf-08bb02801a70.gif)

## :point_right: ElevatedButton():

ElevatedButton is one of the material design component provided by flutter.This button gets elevated if the user clicks on it.

- **ElevatedButton.icon():**
  - This allows you to add an icon to the button.
- **ElevatedButton.styleFrom():**
  - This allows you to style the button.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Elevated Button"),
      ),
      body: Center(
        child: Column(
          children: [
            ElevatedButton(
              onPressed: () {},
              child: Text("Elevated Button"),
              style: ElevatedButton.styleFrom(
                  //Use  ElevatedButton.styleFrom() to style the look of the button
                  shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(10.0))),
            ),
            ElevatedButton.icon(
              icon: Icon(Icons.add),
              onPressed: () {},
              label: Text("Elevated Button"),
            )
          ],
        ),
      ),
    );
  }
}

```

![Elevated button](https://user-images.githubusercontent.com/76723996/136261691-6dc34e88-fb92-4d19-9621-74584d07d6b1.png)

## :point_right:  DropDownButton():

Dropdown button is a material component allows to display a dropdown list from which users can select an item and navigate to it. It takes in `items` and `onChanged` as required argument.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  String? value;

  List _items = ["Item 1", "Item 2", "Item 3"];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Drop Down Button"),
      ),
      body: Center(
        child: Container(
          child: DropdownButton<String>(
            icon: Icon(
              Icons.arrow_drop_down_rounded,
              size: 30,
            ),
            value: value,
            onChanged: (String? newVal) {
              setState(() {
                value = newVal;
              });
            },
            hint: Text("Select Item"),
            items: _items.map((valueofitem) {
              return DropdownMenuItem<String>(
                value: valueofitem,
                child: Text(valueofitem),
              );
            }).toList(),
          ),
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (2)](https://user-images.githubusercontent.com/76723996/136261850-0faa0265-78c0-4308-871f-635cff9d6766.gif)

## :point_right: IconButton():

Icon button allows to use icons as buttons. It gives a splash effect as feedback. It requires an `onPressed` where you mention what the button has to do.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  int i = 0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Icon Button"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            IconButton(
              onPressed: () {
                setState(() {
                  i++;
                });
              },
              icon: Icon(
                Icons.add,
                size: 50,
                color: Colors.red,
              ),
            ),
            Text("Button pressed $i times",
                style: TextStyle(fontSize: 30, color: Colors.blue))
          ],
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (3)](https://user-images.githubusercontent.com/76723996/136261994-b10c8a68-956b-4228-9edb-ee4306c54aa0.gif)

## :point_right: OutlinedButton():

This allows to create a button with an outline. It takes an `onPressed` and `child` as a required argument.

- **OutlineButton.icon():**
  - It creates an outline button but with an icon in it. It takes an `onPressed` ,`icon` and `label` as required arguments.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Outlined Button"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            OutlinedButton(
              child: Text("Click Me"),
              onPressed: () {},
            ),
            OutlinedButton.icon(
              onPressed: () {},
              icon: Icon(Icons.add),
              label: Text("Add me"),
            )
          ],
        ),
      ),
    );
  }
}

```

![Outlinedbutton](https://user-images.githubusercontent.com/76723996/136262073-b5d1191c-867a-4561-b0e6-e3ff2f820a07.png)

## :point_right: PopupMenuButton():

Popup menu button displays a hovering menu . When you select an item from that menu it the processes mentioned in onSelected will run and the menu closes. It takes in an `itemBuilder` as a required argument.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

enum Menu { Item1, Item2, Item3 }

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("PopupMenu Button"),
        actions: [
          PopupMenuButton<Menu>(itemBuilder: (BuildContext context) {
            return <PopupMenuEntry<Menu>>[
              PopupMenuItem(
                child: Text("Item1"),
                value: Menu.Item1,
              ),
              PopupMenuItem(
                child: Text("Item2"),
                value: Menu.Item2,
              ),
              PopupMenuItem(
                child: Text("Item3"),
                value: Menu.Item3,
              )
            ];
          })
        ],
      ),
    );
  }
}

```

![ezgif com-gif-maker (4)](https://user-images.githubusercontent.com/76723996/136262229-f3771ccf-25bf-4f36-b7b2-50a1542c788f.gif)

## :point_right: TextButton():

TextButton is used to create a  button containing text.We can customise the button by using style property. It takes in `child` and `onPressed`as required arguments.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}



class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Text Button"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            TextButton(
              style: TextButton.styleFrom(
                textStyle: const TextStyle(fontSize: 20),
              ),
              onPressed: null,
              child: const Text('Disabled'),
            ),
            const SizedBox(height: 30),
            TextButton(
              style: TextButton.styleFrom(
                textStyle: const TextStyle(fontSize: 30),
              ),
              onPressed: () {},
              child: const Text('Enabled'),
            ),
          ],
        ),
      ),
    );
  }
}

```

![TextButton](https://user-images.githubusercontent.com/76723996/136262296-de449177-ea1c-45f5-ad41-b38db766b56f.png)

## :point_right:  Checkbox():

It allows us to create check boxes where users can check/uncheck an item. It takes in `value` and `onChecked` as required argument.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

bool? boxValue = false;//initializing a boolean value

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Check Box"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Checkbox(
              value: boxValue,
              onChanged: (value) {
                setState(
                  () {
                    boxValue = value;
                  },
                );
              },
            ),
            Text(
              "Hello",
              style: TextStyle(fontSize: 20),
            )
          ],
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (5)](https://user-images.githubusercontent.com/76723996/136262407-df3e4331-0070-481a-a041-8b7f27763ae5.gif)

## :point_right: Date and Time picker:

- **showDatePicker():**
  - This allows us to ceate a date picker . This takes in  `context`,`initialDate`,`firstDate`,`lastDate` as required arguments.

- **showTimePicker():**
  - This allows us to ceate a date picker . This takes in  `context`,`initialTime` as required arguments.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: DateTimeApp(),
    );
  }
}

class DateTimeApp extends StatefulWidget {
  const DateTimeApp({Key? key}) : super(key: key);

  @override
  _DateTimeAppState createState() => _DateTimeAppState();
}

class _DateTimeAppState extends State<DateTimeApp> {
  DateTime? choosenDate;
  TimeOfDay? choosenTime;

  @override
  void initState() {
    super.initState();
    choosenDate = DateTime.now(); //assigning current date as default value
    choosenTime = TimeOfDay.now(); //assigning current time as default value
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Date Time Picker"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              "${choosenDate?.day}-${choosenDate?.month}-${choosenDate?.year}",
              style: TextStyle(fontSize: 20),
            ),
            SizedBox(
              height: 20,
            ),
            ElevatedButton(
              onPressed: _pickDate,
              child: Text("Pick Date", style: TextStyle(fontSize: 20)),
            ),
            SizedBox(
              height: 20,
            ),
            Text(
              "${choosenTime?.hour}:${choosenTime?.minute}",
              style: TextStyle(fontSize: 20),
            ),
            SizedBox(
              height: 20,
            ),
            ElevatedButton(
              onPressed: _pickTime,
              child: Text("Pick Time", style: TextStyle(fontSize: 20)),
            )
          ],
        ),
      ),
    );
  }

  _pickDate() async {
    //Creating a function to pick date
    DateTime? date = await showDatePicker(
      initialDate: choosenDate!,
      context: context,
      firstDate: DateTime(DateTime.now().year - 5),
      lastDate: DateTime(
        DateTime.now().year + 5,
      ),
    );
    if (date != null) {
      setState(
        () {
          choosenDate = date;
        },
      );
    }
  }

  _pickTime() async {
    //Creating a function to pick time
    TimeOfDay? time = await showTimePicker(
      initialTime: choosenTime!,
      context: context,
    );
    if (time != null) {
      setState(
        () {
          choosenTime = time;
        },
      );
    }
  }
}

```

![ezgif com-gif-maker (14)](https://user-images.githubusercontent.com/76723996/136385007-d377933f-8457-40d5-ac4e-5738ca2aac82.gif)

## :point_right: Radio():

Radio() is used to create radio buttons. This type of button is used when the user has to choose only one option out of the given options.This takes in `groupValue` and `onChanged` as required arguments.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  @override
  State<HomePage> createState() => _HomePageState();
}

int _value = 1;

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Radio Button"),
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Radio(
                value: 1,
                groupValue: _value,
                onChanged: (value) {
                  setState(() {
                    _value = value as int;
                  });
                },
              ),
              Text(
                "Item 1",
                style: TextStyle(fontSize: 20),
              ),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Radio(
                value: 2,
                groupValue: _value,
                onChanged: (value) {
                  setState(() {
                    _value = value as int;
                  });
                },
              ),
              Text(
                "Item 2",
                style: TextStyle(fontSize: 20),
              ),
            ],
          ),
        ],
      ),
    );
  }
}

```
![ezgif com-gif-maker (6)](https://user-images.githubusercontent.com/76723996/136262585-a2de3545-0f16-42a9-b55c-2ab199417c00.gif)

## :point_right: Slider():

Slider is a material component widget which is used for selecting a range,example: volume sliders, age slider used in games to set an age  . Users can simply set a value by dragging the slider.

```dart
import 'package:flutter/material.dart';


void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: SliderApp(),
    );
  }
}

class SliderApp extends StatefulWidget {
  @override
  State<SliderApp> createState() => _SliderAppState();
}

double _sliderValue = 20.0;

class _SliderAppState extends State<SliderApp> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Slider"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Slider(
              value: _sliderValue,
              min: 0.0,
              max: 100.0,
              divisions: 5,
              label: _sliderValue.round().toString(),
              onChanged: (double value) {
                setState(() {
                  _sliderValue = value;
                });
              },
            )
          ],
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (7)](https://user-images.githubusercontent.com/76723996/136262730-ba1066e3-93b3-4acd-8f2d-53a9b5bf322c.gif)

## :point_right: Switch():

Switch is used to toggle between ON/OFF states. This takes in value and `onChanged`as required arguments.

```dart
import 'package:flutter/material.dart';


void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: SwitchToggle(),
    );
  }
}

class SwitchToggle extends StatefulWidget {
  const SwitchToggle({Key? key}) : super(key: key);

  @override
  _SwitchToggleState createState() => _SwitchToggleState();
}

bool _switchvalue = false;

class _SwitchToggleState extends State<SwitchToggle> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Switch"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Switch(
              value: _switchvalue,
              onChanged: (value) {
                setState(() {
                  _switchvalue = value;
                });
              },
            ),
          ],
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (8)](https://user-images.githubusercontent.com/76723996/136262832-fd61ab0a-0c99-446a-859d-7bf5f45008df.gif)


## :point_right: TextField():

This widget is commonly used to collect text inputs from user keyboard. This is used when we create a form to collect user data.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: TextFieldInput(),
    );
  }
}

class TextFieldInput extends StatefulWidget {
  const TextFieldInput({Key? key}) : super(key: key);

  @override
  _TextFieldInputState createState() => _TextFieldInputState();
}

final _controller = TextEditingController();
String name = "";

class _TextFieldInputState extends State<TextFieldInput> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("TextField"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Container(
              padding: EdgeInsets.all(30),
              child: TextField(
                decoration: InputDecoration(
                  border: OutlineInputBorder(),
                ),
                controller: _controller,
                onSubmitted: (String value) {
                  setState(() {
                    name = value;
                  });
                },
              ),
            ),
            name == "" ? Text("Enter name") : Text("Hello $name"),
          ],
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (9)](https://user-images.githubusercontent.com/76723996/136263004-121cbf6f-f6a2-4b50-bc4a-9a6fbc3bfcc3.gif)

## :point_right: AlertDialog():

Alert dialog is used to let user know if the act that user intended to do is successful . This comes handy in an unexpeced case such as having a problem in fetching data from server.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: AlertBox(),
    );
  }
}

class AlertBox extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Alert Dialog"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            TextButton(
              onPressed: () {
                alert(context);
              },
              child: Text("Show Dialog"),
            ),
          ],
        ),
      ),
    );
  }
}

void alert(BuildContext context) {
  var alertBox = AlertDialog(
    title: Text("Alert!"),
    content: Text("Do you want to continue? "),
    actions: [
      TextButton(
        onPressed: () {
          Navigator.of(context).pop();
        },
        child: Text("No"),
      ),
      TextButton(
        onPressed: () {
          Navigator.of(context).pop();
        },
        child: Text("Yes"),
      ),
    ],
  );
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return alertBox;
    },
  );
}
```

![ezgif com-gif-maker (10)](https://user-images.githubusercontent.com/76723996/136263156-e7848cc9-7a30-4877-9caa-ca37573e308e.gif)

## :point_right: SnackBar():

Snack bar is used to display a simple message popping up from the ottom of the screen which informs the user when an action occur. The message is displayed for a certain amount of time and it disappears automatically. This takes in `content` as a required argument.

```dart

import 'package:flutter/material.dart';


void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: SnackBarApp(),
    );
  }
}

class SnackBarApp extends StatefulWidget {
  const SnackBarApp({Key? key}) : super(key: key);

  @override
  _SnackBarAppState createState() => _SnackBarAppState();
}

class _SnackBarAppState extends State<SnackBarApp> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("SnackBar"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            TextButton(
              onPressed: () {
                showSnackbar(context);
              },
              child: Text(
                "Show SnackBar",
                style: TextStyle(fontSize: 20),
              ),
            ),
          ],
        ),
      ),
    );
  }
}

void showSnackbar(BuildContext context) {
  final snackBar = SnackBar(
    content: Text(
      "Hello from SnackBar",
      style: TextStyle(fontSize: 15),
    ),
    action: SnackBarAction(
      label: "Click Me",
      onPressed: () {},
    ),
  );
  ScaffoldMessenger.of(context)..showSnackBar(snackBar);
}

```

![ezgif com-gif-maker (12)](https://user-images.githubusercontent.com/76723996/136267694-fab14148-89d3-43f4-80f4-134fdedcd5a6.gif)

## :point_right: Card():

A card is used to display data pertaining to an object in an atractive way giving it rounded corners and with shadown.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: CardApp(),
    );
  }
}

class CardApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Card"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Card(
              elevation: 10,
              child: Padding(
                padding: const EdgeInsets.all(15.0),
                child: Column(
                  children: [
                    Text("This is a card", style: TextStyle(fontSize: 20)),
                  ],
                ),
              ),
            )
          ],
        ),
      ),
    );
  }
}

```

![Card](https://user-images.githubusercontent.com/76723996/136263408-9a8994d0-bf36-46a8-8d68-703e3dcb8e33.png)

## :point_right: CircularProgressIndicator() and LinearProgressIndicator():

CircularProgressIndicator and LinearProgressIndicator are use to display a progress indicator which informs the user about the status of ongoing process and thus keeps the user on hold until the process is completed.
CircularProgressIndicator displays the indicator by displaying a circular spinner wheres the LinearProgressIndicator displays the indicator in the form of a progress bar .

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: CircularAndLinearProgress(),
    );
  }
}

class CircularAndLinearProgress extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Circular and Linear progress indicator"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Padding(
          padding: const EdgeInsets.all(13.0),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              LinearProgressIndicator(
                valueColor: AlwaysStoppedAnimation(Colors.brown),
                backgroundColor: Colors.amber,
              ),
              SizedBox(height: 30),
              CircularProgressIndicator(
                valueColor: AlwaysStoppedAnimation(Colors.brown),
                backgroundColor: Colors.amber,
              )
            ],
          ),
        ),
      ),
    );
  }
}

```

![ezgif com-gif-maker (11)](https://user-images.githubusercontent.com/76723996/136267182-a883e45a-b5c9-496a-b0a6-817944d71378.gif)

## :point_right: Image():

This widget is used to render images on the screen. You could either create an assert folder containing images in your project and set the path to these images under `pubspec.yaml` to access these images or you could use a network image. You can access asset images using `Image.asset('Specify path of the image')` and network image using `Image.network('Image url')`.

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'App',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: ImageApp(),
    );
  }
}

class ImageApp extends StatefulWidget {
  const ImageApp({Key? key}) : super(key: key);

  @override
  _ImageAppState createState() => _ImageAppState();
}

class _ImageAppState extends State<ImageApp> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Image"),
      ),
      body: Container(
        alignment: Alignment.center,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            // Image.asset("specify image path ") to access images from asset folder
            Image.network(
                'https://images.unsplash.com/photo-1497006638916-1021f5d5b02b?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1229&q=80',
                height: 400,
                width: 400)
          ],
        ),
      ),
    );
  }
}

```

![image](https://user-images.githubusercontent.com/76723996/136721415-3da91a7f-fd31-4447-a8a6-88c94648ac72.png)

 :pushpin: To know more about material components click [here](https://flutter.dev/docs/development/ui/widgets/material).

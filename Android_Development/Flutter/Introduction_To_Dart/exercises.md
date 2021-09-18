## 💻 Exercises

### Exercises:

1. Maps

### Statement :- Access the student via roll no.

### It is a data type which contains key , value pairs and the values can only be accessed by using keys.

### Every Key is unique in Map but the values can be same.

### The map that I have created in this example is <String , String>.

### Output

```
void main() {
Map data = {
"1": "Rohan",
"2": "Rohit",
"3": "Pranav",
};
print(data["1"]);
print(data["2"]);
print(data["3"]);
}

   Rohan
   Rohit
   Pranav

```

2. Lists

### statement :- Create a list and access their all values and add one extra value and print all again.

### List is simply an ordered group of objects.

### The values in Lists are also accessed by Indices.

### The List can be growable
```
void main(){
List myList = ["This is the First index" , "This is the Second index" , "This is the Third index"];

print("List before the adding: ");
for(int i=0 ; i<myList.length ; i++){
 print(myList[i]);
}

myList.add("This is the Fourth index");
print("List after the adding: ");
 for(int i=0 ; i<myList.length ; i++){
 print(myList[i]);
}
}

List before the adding:
This is the First index
This is the Second index
This is the Third index
List after the adding:
This is the First index
This is the Second index
This is the Third index
This is the Fourth index

```

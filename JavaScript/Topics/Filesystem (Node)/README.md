# Filesystem in Node

Node JS allows JavaScript to run outside of traditional web browsers. This opens a gate to a lot of new possibilities for JS to execute. One of which is desktop environments. 

Desktop basically means running Node applications natively on an operating system without using browser as a middleware. This gives a lot of flexibility for Node to develop user friendly applications.

File System or 'FS' module was developed so that Node JS can interact with the file systems in a way modelled on standard [POSIX functions](https://en.wikipedia.org/wiki/POSIX). It allows you to read the state of the filesystem of the host on which it is run.

FS module makes interaction with the native file system easy. These are a few of the tasks that can be performed:
- Create 
- Read
- Append
- Update
- Delete
- Rename

### Using FS
To import FS in the project, we use `require()` method
```js
const fs = require('fs');
```

# Create
### `.writeFile()`
This method is used to asynchronously write the specified data to a file. By default, the file would be replaced if it exists. The ‘options’ parameter can be used to modify the functionality of the method.  
It takes four parameters:
1. fileName: file or data to be written.
2. data: data to be inserted in the file. It may be a string or buffer.
3. encoding: how the data is encoded. Possible encodings are 'ascii', 'utf8', and 'base64'. 'utf8' is the default value.
4. callback: this function is called when appending is completed and has only one parameter - error. 

```js
const string = "Hello File!"
fs.writeFile('fileName.txt', string, 'urf8',  (err) => {
    if(err) { return console.error(err); }
    
    console.log("Data added!");
})
```

### `.writeFileSync()`
This method is used to write data in a synchronous way. This method returns `undefined` so it is suggested to execute this function in a try-catch block.  
It takes four parameters:
1. filename: The name of the file that is to be read.
2. data: buffer/string of information that has to be added.
3. encoding: It is a string that specifies the encoding of the file. Possible encodings are 'ascii', 'utf8' and 'base64'. 'utf8' is set as default
4. mode: The mode of operation. It can be any of these three. `r++` is set as default:
    |Mode   |   Description |
    |-------|---------------|
    |r  |   Read    |
    |w  |   Write   |
    |r+ |   Read & Write    |

5. flag:  the operation in which the file has to open. All the types of flags are described below:
    | Flag  |   Description |
    |-------|---------------|
    |r      |Open the file. THis is default flag|
    |r++    |Open file to read/write|
    |rs+    |Open file in synchronous mode to read and write.|
    |w      |Open file for writing|
    |wx     |It is same as ‘w’ but fails if path exists.|
    |w+     |Open file to read and write.|
    |wx+    |Same as ‘w+’ but fails if path exists.|
    |a      |Open file to append. Append means adding data to existing files.|
    |ax     |Same as ‘a’ but fails if path exists.|
    |a+     |Open file for reading and appending.|
    |ax+    |Same as ‘a+’ but fails if path exists.|
    

# Read
### `.readFile()`
`.readFile()` method is ued to read files from the system.
It takes three parameters:
1. filename: The name of the file that is to be read.
2. encoding: optional parameter that specifies encoding to be used to read the file. Possible encodings are 'ascii', 'utf8' and 'base64'.
3. callback function: It is called when a file has been read successfully. It takes two arguments, `error` and `data`. If there is no error while reading the file it will be `null` and `data` will contain the file contents.

```js
fs.readFile('readFile.txt', 'utf8',  (err, data) =>  {
   if(err) { return console.error(err); }
    console.log(data);
})
```

### `.open()`
This method can be used for multiple purposes, based on the flag we provide.
It takes four parameters:
1. filename: Name of the file that is to be read.
2. flag: the operation in which the file has to open. See the table above for more information.
3. mode: The mode of operation. See the table above to get more information.
4. Callback Function: It is called when a file has been read successfully. It takes two arguments, `error` and `data`. If there is no error while reading the file it will be `null` and `data` will contain the file contents.

```js
fs.open('fileName.txt', 'r', (err, file) => {
     if(err) { return console.error(err); }
     
     console.log(file);
})
```
# Update 
### `.appendFile()`
This method asynchronously appends the data into the file. A new file is created if a file with the same name as the first parameter doesn't exist.
It takes four parameters:
1. filename: Name of the file that is to be read.
2. data: buffer/string of information that has to be added.
3. options: string or an object that specifies optional parameters.
    a. encoding: specifies encoding to be used to rad the file. Possible encodings are 'ascii', 'utf8' and 'base64'. 'utf8' is set as default.
    b. mode: an integer that specifies the file mode.
    c. flag: the operation in which the file has to open. See the table above for more information.
    d. callback: this function is called when appending is completed and has only one parameter - error. 

```js
const string = "I will be appended in the file! :D"

fs.appendFile(
  "fileName.txt",
  string,
  {
    encoding: "utf8",
    mode: 0o666,
    flag: "a",
  },
   (err) => {
    if(err) { return console.error(err); }

    console.log("Append Successful!");
  }
);
```

# Delete
### `.unlink()`
This method is used to remove a specific file.  
The method takes two arguments:
1. filename: Name of the file that is to be deleted.
2. callback function: this function is called when a file has been deleted. It takes one argument, `error` which stores the error log if it occurs.

```js
fs.unlink('fileName.txt',  (err) => {
    
    if(err) { return console.error(err); }
    
    console.log("File deleted");
})
```
# Rename
### `.rename()`
This method renames the file at the given path. If a file with the same name exists in the destination, it will get overwritten.
It takes three parameters:
1. oldpath: the path of the file (or filename) that has to be renamed.
2. newpath: the path of the new file (or filename).
3. callback function: called when a file has been renamed.

```js
fs.rename('old.txt', 'new.txt', () => {
  console.log("File Rename successful!");
   
  // List all the filenames after renaming
  getCurrentFilenames();
});
```

# Close
### `.close()`
This method is used to close the file asynchronously.  
It takes two parameters:
1. function descriptor: file descriptor returned by file fs.open() method.
2. callback function: This is the callback function No arguments other than a possible exception are given to the completion callback.

```js
try {
    fs.close(fd, (err) => {
    if(err) { return console.error(err); }
    
    console.log("File closed");
    })
} catch(err) {
    console.log(err)
}
```


Here is the link to official [Node JS documentation](https://nodejs.dev/learn/the-nodejs-fs-module) if you want to lean more about filesystem moduele.

<hr >

Contributed by: [Kaushal Joshi](https://github.com/joshi-kaushal) 

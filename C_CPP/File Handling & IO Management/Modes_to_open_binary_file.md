# Modes to Open Binary File
Binary file is a file which is used to write the numbers of bytes in the stream which is given , We use 'put' pointer and we increase the size and content by putting 'put' pointer in end and enter more content. 
### Header Files Used 
1. **ifstream :** This Stream class is used when we have to only read or view the file.
2. **ofstream :** Stream class is used when we have to write on the file.
3. **fstream :** This used when we have to do both read and write form files.

## Modes Of Files
1. **in :** This stands for input , This is used when we have to open file for reading.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in);
```

2. **out :** out stands for output , This is used when we have to open file for writing and when file open in this mode it all content will be erased so act as new file.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::out);
```

3. **binary :** It same stands for binary , It allows us to the operations in binary file than the text file.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::binary);
```

4. **app :** It stands for append , It used when want to do all output operations but retaining it's previous content.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::app);
```

5. **ate :** This stands for at end , It specifies the output position at the end of the file for writing.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::app | ios::ate);
```

6. **trunc :** trunc stands for truncate , It wipes off all content from file and make file as new with no previous content present.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::trunc);
```

7. **nocreate :** It used when we want that if file does not exists it opens fails.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::nocreate);
```

8. **noreplace :** It used when we want that it open fails , if file already present.
```cpp
fstream f;
f.open("GWOC_21.txt" , ios::in | ios::noreplace);
```

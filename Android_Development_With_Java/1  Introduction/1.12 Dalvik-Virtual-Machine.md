# Android-Java: 1.12 Dalvik-Virtual-Machine


| <div width="70%">As you all know the JVM is high performance and provides excellent memory management. But it needs to be optimized for low-powered handheld devices as well. This is the reason why Dalvik Virtual Machine (DVM) was introduced.</div> | ![image](https://user-images.githubusercontent.com/70523057/135160506-fb22c6a7-a7a7-4afd-a823-64590c8eb850.png)|
|:-|:-|

### Introduction to DVM:
Dalvik Virtual Machine is a Register-Based virtual machine for executing Android apps. 
DVM is an android virtual machine optimized for mobile devices. 
It optimizes the virtual machine for memory, battery life and performance.
The **_DVM design principle_** aims to optimize itself so that it can `load fastly` and `run smoothly` even on low memory/powered devices.

### Working of DVM:
> Steps - 
  1. The Java Compiler`(javac)` converts the Java Source Code`(.java)` into Java Byte-Code`(.class)`. 
  2. Then DEX Compiler`(dx tool)`  converts all this `(.class)` file of the application into a single Dalvik Byte Code i.e. `"dex"` file.
  3. The Android Assets Packaging Tool `(aapt)` handles the packaging process and later it forms a `".apk"` file.

> Look over the diagram to understand the process-
  <div align="center"><img src="https://user-images.githubusercontent.com/70523057/135159025-2ed2c1e2-82d8-44a3-9e5b-d976564298b2.png" width="600"></div>
  
  <div align="center"><table><tr>
  <td><img src="https://user-images.githubusercontent.com/70523057/135160718-814b781d-0ebd-45bb-a440-977c33e9b656.png" width="400"></td>
  <td><img src="https://user-images.githubusercontent.com/70523057/135160795-ca187c6f-f349-44b5-88cb-a965472ef879.png" width="400"></td>
  </tr></table></div>

 <br><br>   

### Advantages:
- DVM supports the Android operating system only.
- Execution is faster because it treats the variable and object of the same name as one.
- From Android 2.2 SDK Dalvik has it’s own JIT (Just In Time) compiler.
- In DVM, the executable is an APK file.   
- DVM has been designed so that a device can run multiple instances of the Virtual Machine effectively.
- Every application is given their own instance.

> Though it has these merits,but it still has some drawbacks. Here, few disadvantages are listed.
### Disadvantages:
- DVM supports only Android Operating System.
- For DVM very few Re-Tools are available.
- Requires more instructions than register machines to implement the same high-level code.
- App Installation takes more time due to dex.
- More internal storage is required.

### Application:
For Android, a new Virtual machine was developed by Google as stated above. 
It uses registers of the CPU to store the operands. So no requirement of any pushing and popping of instructions. Hence making execution faster. 
The instructions operate on virtual registers, being those virtual registers memory positions in the host device. Register-based models are good at optimizing and running on low memory. They can store common sub-expression results which can be used again in the future. This is not possible in a Stack-based model at all. 
Dalvik Virtual Machine uses its own byte-code and runs “.dex”(Dalvik Executable File) file.

### References:
- [origin of DVM](https://www.javatpoint.com/dalvik-virtual-machine)
- [Difference between DVM and JVM](https://www.geeksforgeeks.org/difference-between-jvm-and-dvm/)

# What is Run Time?
Runtime is a system which is used primarily in software development to describe the period of time in which a program is running.
# Executing Other Programs at Run Time-
In Java, we can run another application/program by calling the exec method on the runtime object, which may be obtained via a call to `Runtime.getRuntime().`

From our Java program, it is possible to run other applications in our operating system. This enables us to make use of system programs and command line utilities from our Java program. Here are some typical uses of this feature when running your Java program in Windows,

**1.** We can invoke a Windows program such as Notepad.

**2.** We can invoke a command line utility such as Check disk (chkdsk) or IP information (ipconfig).

**3.** If we want to  access the Windows command interpreter and access some of its features such as "dir" command or "find" command. So in this case, the program we want to access is cmd.exe and commands like "dir" and "find" are arguments to cmd.exe. Also when directly invoked, cmd.exe doesn't terminate. If we want cmd.exe to terminate immediately, you should pass the /C argument.

# Example-
```Java
// Java program to illustrate getRuntime() method of Runtime class
public class JavaRunTime
{
	public static void main(String[] args)
	{
		// get the current runtime assosiated with this process
		Runtime run = Runtime.getRuntime();
		// print the current free memory for this runtime
		System.out.println("" + run.freeMemory());
	}
}
```

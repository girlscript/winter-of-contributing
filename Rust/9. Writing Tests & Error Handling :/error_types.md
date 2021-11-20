<h1>Recoverable Errors</h1>


A recoverable error is an error that can be corrected. A program can retry the failed operation or specify an alternate course of action when it encounters a recoverable error. Recoverable errors do not cause a program to fail abruptly. An example of a recoverable error is File Not Found error.

Unrecoverable errors cause a program to fail abruptly. A program cannot revert to its normal state if an unrecoverable error occurs. It cannot retry the failed operation or undo the error. An example of an unrecoverable error is trying to access a location beyond the end of an array.

Unlike other programming languages, Rust does not have exceptions. It returns an enum Result<T, E> for recoverable errors, while it calls the panic macro if the program encounters an unrecoverable error. The panic macro causes the program to exit abruptly.




<h1>Unrecoverable Errors</h1>

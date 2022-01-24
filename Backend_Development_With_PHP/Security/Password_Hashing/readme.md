# PHP Password Hashing
As a PHP developer, you must know how to store passwords securely. We will see how to use password hashing in PHP.

## Table of contents:
- [PHP Password Encryption](#php-password-encryption)
- [Use of password_hash()](#use-of-password_hash)
- [Use of password_verify()](#use-of-password_verify)

## PHP password encryption
- Many web attacks aim at stealing your user's passwords. If passwords are stolen, you must make sure the attacker cannot decrypt them.
- Today’s strict privacy regulations require sensitive data, like passwords, to be protected. Failing to comply can result in fines.

## Use of password_hash()
The password_hash() function creates a secure hash of your password. Lets see how you can use it:
```
// User's password.
$password = 'admin@21';

// Secure password hash.
$hash = password_hash($password, PASSWORD_DEFAULT);
```

## Use of password_verify()
To verify the password provided by a remote user, you need to use the password_verify() function.

### password_verify() method takes two arguments:
- The password you need to verify as first argument.
- The hash from password_hash() of the original password as second argument.

Lets see how you can use it:
```
// Password from the login form.
$password = $_POST['password'];

// Query the database and pull out the hashed password.
// Pass the user entered password and the retrieved/stored hash into the password_verify method. 
// If it is a match, it will return true.

if (password_verify($password, $hashedPassword)) {
   // correct password
}
```

## References
[Alex Web Develop](https://alexwebdevelop.com/php-password-hashing/)

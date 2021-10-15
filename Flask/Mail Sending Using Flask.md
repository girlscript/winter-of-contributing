# Flask Mail Sending

Here we will learn How to configure and send emails with Flask-Mail. We’ll discuss various options for sending and testing Flask emails, both individually and in bulk.

## Why send emails from Flask?
Sending emails is a vital part of many Flask applications. When users create an account, a confirmation email should hit their inboxes right away. When they forget their password, a handy mechanism for resetting it built into an app will make their life a lot easier. There are many, many other situations when an auto-generated email is a must.

## Getting started with Flask-Mail

```
pip install Flask
```
To install Flask-Mail, use the following:
```
pip install Flask-Mail
```
Adding and configuring virtualenv [optional]
```
pip install virtualenv
```
Then, launch the terminal and head to the folder you’ll use for this project.
Type in the following:

On MacOS or Linux:
```
python3 -m venv name
```
On Windows:
```
py -m venv name
```
Replace ‘name’ with whatever you want to name the environment, and then activate it:
On MacOS or Linux:
```
source name/bin/activate
```
On Windows:
```
.\name\Scripts\activate
```

## Configuration
Then Flask-Mail needs to be configured by setting values of the following application parameters:

Parameter | Description 
--------- | --------------
MAIL_SERVER | Name/IP address of email server     
 MAIL_PORT      | Port number of server used   
MAIL_USE_TLS      | Enable/disable Transport Security Layer encryption  
MAIL_USE_SSL| Enable/disable Secure Sockets Layer encryption
MAIL_DEBUG | Debug support. Default is Flask application’s debug status
MAIL_USERNAME | User name of sender
MAIL_PASSWORD | password of sender
MAIL_DEFAULT_SENDER | sets default sender
MAIL_MAX_EMAILS | Sets maximum mails to be sent
MAIL_SUPPRESS_SEND | Sending suppressed if app.testing set to true
MAIL_ASCII_ATTACHMENTS | If set to true, attached filenames converted to ASCII

## Mail class
It manages email-messaging requirements. The class constructor takes the following form −
```
flask-mail.Mail(app = None)
```

## Methods of Mail class

Methods | Description 
--------- | --------------
send() | Sends contents of Message class object     
connect()    | Opens connection with mail host  
send_message()      | Sends message object 

## Message class
It encapsulates an email message. Message class constructor has several parameters −
```
flask-mail.Message(subject, recipients, body, html, sender, cc, bcc, 
   reply-to, date, charset, extra_headers, mail_options, rcpt_options)
```

## Message class methods
attach() − adds an attachment to message. This method takes the following parameters −

- filename − name of file to attach

- content_type − MIME type of file

- data − raw file data

- disposition − content disposition, if any.

add_recipient() − adds another recipient to message


## Codes in the app.py file
#### In the following example, SMTP server of Google’s gmail service is used as MAIL_SERVER for Flask-Mail configuration.

### Import Flask
```
import flask from Flask
```

### Import Mail and Message class from flask-mail module in the code.
```
from flask_mail import Mail, Message
```

```
app = Flask(_name_)
```

```
mail=Mail(app)
```

### Then Flask-Mail is configured as per following settings.
```
app.config['MAIL_SERVER']='smtp.gmail.com'
app.config['MAIL_PORT'] = 465
app.config['MAIL_USERNAME'] = 'yourId@gmail.com'
app.config['MAIL_PASSWORD'] = '*****'
app.config['MAIL_USE_TLS'] = False
app.config['MAIL_USE_SSL'] = True
app.config['MAIL_DEBUG'] = False
app.config['MAIL_DEFAULT_SENDER'] = 'yourId@gmail.com'
app.config['MAIL_MAX_EMAILS'] = None
app.config['MAIL_SUPPRESS_SEND'] = False
app.config['MAIL_ASCII_ATTACHMENTS'] = False
```

### Create an instance of Mail class.
```
mail = Mail(app)
```

### Set up a Message object in a Python function mapped by URL rule (‘/’).
```
@app.route("/")
def index():
   msg = Message('Hello World', sender = 'yourId@gmail.com', recipients = ['recipientid@gmail.com'])
   msg.body = "Hello Flask message sent from Flask-Mail"
   mail.send(msg)
   return "Sent"

if __name__ == '__main__':
   app.run(debug = True)
```

#### Run the following script in Python Shell and visit http://localhost:5000/.
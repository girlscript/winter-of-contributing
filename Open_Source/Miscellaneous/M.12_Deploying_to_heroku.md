# Deplying Project to Heroku
![image](https://user-images.githubusercontent.com/76050897/134768494-6b177c30-10e1-4a8e-b146-27ee56248a63.png)

Heroku is a container-based cloud Platform as a Service (PaaS). Developers use Heroku to deploy, manage, and scale modern apps. It is elegant, flexible, and easy to use, offering developers the simplest path to getting their apps to market. It’s a top choice for many development projects having backend.

There are 3 ways to deploy your project to Heroku:
1. Deploying with Git
2. Deploying with Docker
3. Deploying with Intergration

## _First Step_
Create a new [Heroku](https://www.heroku.com/) account.

![image](https://user-images.githubusercontent.com/76050897/134768839-ee5eb806-0d3c-4b31-8124-b39840966082.png)

## _Second Step_
Go to documentation and select the prefered language you want to use and then click on get started.

![image](https://user-images.githubusercontent.com/76050897/134768992-0ef99e79-6363-4adc-9249-3384cc5cd0ea.png)

## _Third Step_
Install [Heroku CLI](https://devcenter.heroku.com/articles/heroku-cli) and git on your computer.
When installation completes, you can use the heroku command from your terminal.
On Windows, start the Command Prompt (cmd.exe) or Powershell to access the command shell.Use the heroku login command to log in to the Heroku CLI:<br>
![image](https://user-images.githubusercontent.com/76050897/134769135-d3edf705-641b-4394-bdfa-b145339538dd.png)

Then check you have latest version of Git : `git --version` , Node : `node --version`.

## _Fourth Step_
Its the most important step . At this step we will prepare our code base for deployment.

* ### Tracking the codebase in a Git repository.
    Open terminal and cd to the project folder.then run the following command:
    1. `git init`
    2. `git add .`
    3. `git commit -m "Initial commit"`

    Links for reference: [Git installation](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git) [First Time Git setup](https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup)

* ### Add a Heroku git 
    Git remotes are versions of your repository that live on other servers. You deploy your app by pushing its code to a special Heroku-hosted remote that’s associated with your app.
    The `heroku create` CLI command creates a new empty application on Heroku

    ![image](https://user-images.githubusercontent.com/76050897/134769694-a18cdb42-1245-46c7-9154-c922dcb614e9.png)

    You can use the git remote command to confirm that a remote named heroku has been set for your app:

    ![image](https://user-images.githubusercontent.com/76050897/134769712-4cea7af8-b621-4212-a39c-a9a6d0119801.png)

* ### Add a Procfile
    The Procfile is a file that tells Heroku which command to run when your app is requested by a web browser.Commit a text file to your app’s root directory that is named Procfile without a file extension.

    For example Procfile for a simple Node.js app:

    `web: node app.js`

    Consult [language-specific guides](https://devcenter.heroku.com/articles/preparing-a-codebase-for-heroku-deployment#6-complete-language-specific-setup) for more information on creating a Procfile for your chosen language and framework.

* ### Listen on the correct port
    On your local machine, your app’s web server can listen on any open, unreserved port. On Heroku, however, it must listen on a specific port.

    This specific port is indicated by the `PORT` environment variable. When your web server starts up on Heroku, make sure it’s listening on the port number specified by `PORT`:

    ```nodejs
    let port = process.env.PORT;
    if (port == null || port == "") {
    port = 8000;
    }
    app.listen(port);
    ```
* ### Use a database or object storage instead of writing to your local file system
    If your app currently writes data to its local filesystem for persistent storage (including to a local SQLite database), on Heroku it must instead write that data to one of the following locations (depending on your use case):
    * A managed database service (such as Heroku Postgres)
    * A managed object storage service (such as Amazon S3)

* ### Complete language-specific setup
    The changes above apply to all Heroku apps, regardless of programming language. In addition to them, language-specific changes might be necessary for your codebase. <br>
    Consult the [language-specific guides](https://devcenter.heroku.com/articles/preparing-a-codebase-for-heroku-deployment#6-complete-language-specific-setup) for more information on how to complete language-specific setup.
<br>
## _Fifth Step_
Now add the changes you made in your code base to git by opening terminal and cd to the project folder.then run the following command:<br>
1. `git init`
2. `git add .`
3. `git commit -m "Added Procfile and Updated The ports"`

Now you can deploy our codes to Heroku.<br>
`git push heroku master`<br>
Then click on the link to visit your website.
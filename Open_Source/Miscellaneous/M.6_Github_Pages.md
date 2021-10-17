<h1>:rocket: Github Pages</h1>
<p align="center" >
<img width="450px" height="450px" src="https://raw.githubusercontent.com/github/explore/80688e429a7d4ef2fca1e82350fe8e3517d3494d/collections/github-pages-examples/github-pages-examples.png" >
</p>

## :bookmark: Index - 
1. [`Introduction to Github Pages`](#mag-introduction-to-github-pages)
2. [`Hosting a website with Github Pages`](#hosting-a-website-with-github-pages--)
3. [`Making Changes to the hosted website`](#making-changes-to-the-hosted-website--)
4. [`Some Common Mistakes, Concerns and Troubleshooting`](#some-common-mistakes-concerns-and-troubleshooting--)

## :mag: Introduction to Github Pages

### What is Github Pages ?
- GitHub Pages is a service used for hosting static websites directly from a github repository. 
- Using Github Pages one can host their HTML, CSS, Vanilla JavaScript, React, etc. websites easily.

### What are the Advantages of using Github Pages for hosting ?
- **Free Hosting Service.**
- **HTTPS Supported.**
- **Updates Website Automatically on Repository Changes.**
- **Supports Custom Domain.**

### What are the Prerequisites to use Github Pages ?
If you have a Github Account then it is all you need to start hosting your static websites with Github Pages.

### Github Plans vs Repository Type you can use to host website - 
Everyone with a github account can host their websites with github pages from their public repositories. But not everyone can use a private repository to host a website. It depends on your github plan as shown below. 
If you are currently logged in to github then you can check your billing plan from [`here`](https://github.com/settings/billing).
| Plans |Hostable from Public Repository |Hostable from Private Repository|
|----------|:-------------:|:------:|
| Github Free |:heavy_check_mark:|:x:|
| Github Free for organizations |:heavy_check_mark:|:x:|
| Github Pro |:heavy_check_mark:|:heavy_check_mark:|
| Github Team |:heavy_check_mark:|:heavy_check_mark:|
| Github Enterprise Cloud |:heavy_check_mark:|:heavy_check_mark:|
| Github Enterprise Server |:heavy_check_mark:|:heavy_check_mark:|

### Limitations of Github Pages -
- Although Github Pages is a great service there are few limitations to it as follows - 
1. Github Pages can only be used to host **static websites**. This also means, websites using nodejs, python, php, etc. in backends can't be hosted on github pages.
2. Following are some usage limits which if not followed then github may stop your website hosting(it's rare) or may suggest you better strategies for hosting( this is done to reduce impact on github's servers) -   
`i.` Published GitHub Pages sites may be no larger than 1 GB.   
`ii.` GitHub Pages sites have a soft limit of 10 builds per hour.       
`iii.` GitHub Pages sites have a soft bandwidth limit of 100GB per month.    

## Hosting a website with Github Pages -
I think we have gone through enough introduction of Github Pages. Now let's start with the more interesting part of seeing Github Pages in Action, let's host a simple website with github pages. I will break down the hosting process into simple steps.

##### Prerequisite : You must have a Github Account. If you don't have one you can signup [`here`](https://github.com). Also you should have git installed on your system, you can install and configure it for your system from [`here`](https://git-scm.com/downloads).

#### `Step - 1` : Create a New Repository -
**`1.1)`** In order to host our website with github pages we always need some repository from where our website is going to be hosted.  
**`1.2)`** So for this tutorial we will make a new repository. I am naming the repository as **`learn-hosting-with-gh-pages`** but you are free to name it whatever you want,
although i recommend naming it the same as what we are using in this tutorial.

<p align="center" >   
<img height="400px" src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh1.png" >
</p>
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh2.png" >
</p>

#### `Step - 2` : Clone the Repository -
**`2.1)`** If you are a beginner with git & github then these new terms like cloning, ssh, etc. can be a little intimidating. But there is no need to worry about. Only make sure that you have git installed and configured on your system and just follow the steps as shown here.    
**`2.2)`** Navigate to some folder of your choice and from there open the git bash(an option `Git Bash Here` will usually appear on right clicking inside the folder). If right clicking doesn't work then you can alternatively navigate to the folder from git bash itself.   
**`2.3)`** Then copy the remote url as shown in the picture below(I am using SSH, but you can either use SSH or HTTPS).     

<p align="center">   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh3.png" >
</p>

**`2.4)`** Then inside the git bash you need to run the following command `git clone your_remote_url`.   
e.g. :
```
git clone git@github.com:bhavesh-chaudhari/learn-hosting-with-gh-pages.git
```
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh4.png" >
</p>

<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh5.png" >
</p>

**`2.5)`** Once you have cloned the repository successfully, open the cloned folder in some code editor(VS Code is used for this tutorial).    

#### `Step - 3` : Add Content to the Repository
**`3.1)`** Create a file named **index.html**(it is important that your landing page is named index.html) and style.css inside the cloned folder from the code editor.  

<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh6.png" >
</p>

**`3.2)`** Copy & paste the following html into index.html -
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Learn Hosting With gh-pages</title>
</head>
<body>
    <div class="container">
        <h1>Congrats ! You have hosted Your First Website with Github Pages.</h1>
    </div>
</body>
</html>
```
**`3.3)`** Copy and paste the following basic styles into style.css - 
```
*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

.container{
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 100vh;
    text-transform: uppercase;
    background: #3f66da;
    color: #fff;
    font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;
    letter-spacing: 1.5px;
}
```
**`3.4)`** Push the code to github repository by using the following commands one after another from VS Code or the Git Bash -      
- *`git add .`*     
- *`git status`*     
- *`git commit -m "initial commit"`*     
- *`git push`*      

**`3.5)`** If you successfully pushed it then your github repository should look like this -  
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh7.png" >
</p>

#### `Step - 4` : Host website from the repository
**`4.1)`** Go to settings
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh8.png" >
</p>

**`4.2)`** Scroll to bottom and you will find the `check it out here` option, click on it.
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh9.png" >
</p>

**`4.3)`** Select your default branch as the source as shown in the picture below(main in my case, it can be master too) and then save the changes. After this wait for a few seconds/minutes and your site will be published successfully. One can also use any other branch that they have in their project. In this tutorial we are using the main branch.
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh10.png" >
</p>

**`4.4)`** `Optional Information` : Sometimes you may want to select a theme from the option `Choose a theme` for your static websites, it provides some quick styling and theme to your project. This step is not needed for this tutorial.     
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh11.png" >
</p>

**`4.5)`** Your website has been now hosted on Github Pages.         
i) The General URL for websites hosted on github pages is : **`https://<user>.github.io/<repository>/`**    
ii) For example the one we just hosted has this URL : **`https://bhavesh-chaudhari.github.io/learn-hosting-with-gh-pages/`**  
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh12.png" >
</p>

### `Making Changes to the hosted website` - 
**`1)`** In Order to make changes to your hosted website on github pages all that you have to do is to make changes to your repository.   
**`2)`** This is why github pages is a wildly used service.    
**`3)`** You can host websites from the default branch(mostly main or master) or if you want you can host your website from some development/feature branch.    
**`4)`** If you want to use some other branch than the default one then all you have to do is to change the source of github pages, for this you can refer to step **`4.3)`** above.    
**`5)`** When you modify any content in repository that is being used in the website then the hosted website will be modified too and this happens automatically. You can keep track of all the changes happening with your hosted website from the `Environments` as shown in the picture below. 

<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh13.png" >
</p>

**`6)`** You can view the deployment of your hosted website at any commit as shown in the picture below - 
<p align="center" >   
<img height="500px"  src="https://raw.githubusercontent.com/bhavesh-chaudhari/learn-hosting-with-gh-pages/main/assets/gh14.png" >
</p>

### `Some Common Mistakes, Concerns and Troubleshooting` -
**`1)`** One of the most common mistakes that people do unknkowingly is that they don't name their Home Page(Landing Page) of website as **`index.html`**. This will result in a 404 error. Hence, you must name your Home Page as **`index.html`** and it must exist in the top level of your repository.     
**`2)`** One of the most common concern is that sometimes Github Pages don't detect the index.html(Your Home Page) right after hosting. The soultion to this problem is to wait for a while, maybe about 10 minutes after you have hosted your website. This problem happens when you push index.html for the first time but remember it takes some time to get things working properly.    
**`3)`** Another common concern is that **github pages are not getting modified after making changes to the repository**. Again this problem is temporary and the website takes time to get updated. Sometimes it may take as long as 10 minutes for the website to get updated. Usually it happens within seconds though.   
**`4)`** Sometimes you may want to unpublish your website from Github Pages. So, in order to stop the hosting from Github Pages you need to change the source of Github Pages to `None`. Refer step **`4.3)`** above.
<hr>

# If you have read this article completely then Congrats! ✨ now you are familiar with Github Pages. Thanks !

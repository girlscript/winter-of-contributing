# Contributing Guidelines

Hello 👋. We welcome you all to GirlScript Winter Of Contributing🎊🎊
| Index                                                         |
| ------------------------------------------------------------- |
| [Contributing to this repo](#contributing-to-this-repository) |
| [Role of Mentors](#role-of-mentors)           |
| [Role of Supervisors](#role-of-supervisors)|
| [Adding A New Topic](#adding-a-new-topic)|
| [Index (readme) Files](#index-readme-files)|
| [Basics of Git & GitHub](#basics-of-git-and-github)           |

## Contributing to this repository

GWOC encourages individuals to share their knowledge and ideas to develop technical skills and gain valuable experience in the field of tech education. We are creating a content repository which is full of valuable resources. Folders for different domains like Android Development, Web Development have been created and contribution to a specific domain will go to that folder only. Inside each directory there will be subdirectories for sub-topics of that particular domain. **There is a specific branch for each of the domains and participants need to contribute to that branch only**. For example, if someone is contributing to Web Development or a subtopic of it, contributions to that domain should only go to that branch. 

### Types of contribution you can make

Throughout the program there are three modes of contribution, as listed below:

1. Documentation

- Content Creation in the form of codes or tutorials
- Preferred language should be English
- Accepted via [Google Colab](https://colab.research.google.com/)
- Clear, Consise and Complete.

2. Video

- Animations, screen-recordings, presentations and regular explanatory films are all possibilties
- Video length should not exceed more than 25 min
- Presentable and Clear
- Accepted via Google drive link

3. Audio

- Should be in mp3 format
- Includes speech clarity,concise ,low distortion
- Presentation can also be submitted along with audio [Optional]
- Accepted via Google drive

📌Note: For video and audio files, only link should be added to the repository with details of the video/audio.

✔ Participants are requested to give regular updates regarding their progress to the mentors.

✔ If the participant is not able to contribute to the assigned issue due to any reason, kindly let the mentors know so that the issue is assigned to some other participant.

## Role of mentors

Mentors will offer assistance to the contributors. They will be available to contribute to Github, assist contributors in creating content, answer questions, manage the subject repository, and provide assistance to the contributors throughout the program.

## Role of supervisors

Supervisors are experts in the Open Source project on which the team is currently working. At the commencement of the program, they will provide project roadmap, and will also be available to evaluate pull requests, assist with concepts, encourage the team throughout the program. Supervisors can create directories and subdirectories as per requirement and they need to make sure projct under them is getting executed smoothly

<br />

## Adding a new topic

If you are adding a new domain/field, you need to create a new branch. That branch should be created from branch `main` and not from any other branch. The naming convention of the branch should follow `Pascal_Snake_Case`. Examples are given below:

If you want to add the domain `Android Development` , the name of the corresponding branch and folder should be <br/>
Branch: `Android_Development` <br/>
Folder: `Android_Development` <br/>
The starting letter of every word should be in uppercase. Do not use spaces or hyphen(-). Instead use underscore (_) to join words.
All branches and folder and sub-folder names should follow this naming convention to maintain a uniformity in the repository

<br/>

## Index (readme) files

Inside each directory there is a `README` file. This is the index file of the directory. This `README` file should contain the list of sub-directories clicking on which one can navigate to a particular sub-directory. If you are adding a new sub-directory make sure you have added it to the `README` also. Again, inside subdirectories, there is another `README` file, that will contain all the topics that the subdirectory contains. The point of adding `README` inside directories and sub-directories is to help someone know about the content that is residing inside the directory or subdirectory. For the index files, please refer to the [templates](../templates)

---

<br />

## Basics of Git and GitHub

### Git & GitHub

Before we proceed, it's better to know the difference between Git and Github. Git is a version control system (VCS) that allows us to keep track of the history of our source code , whereas GitHub is a service that hosts Git projects. 

We assume you have created an account on Github and installed Git on your System.

Now enter your name and E-mail (used on Github) address in Git, by using following command.

`$ git config --global user.name "YOUR NAME"`
` $ git config --global user.email "YOUR EMAIL ADDRESS"`
This is an important step to mark your commits to your name and email.

<br />

### Fork a project

You can make a copy of the project to your account. This process is called forking a project to your Github account. On Upper right side of project page on Github, you can see -

<p align="center">  <img  src="https://i.imgur.com/P0n6f97.png">  </p>
Click on fork to create a copy of project to your account. This creates a separate copy for you to work on.

<br />

<br />

### Clone the forked project

You have forked the project you want to contribute to your github account. To get this project on your development machine we use clone command of git.

`$ git clone https://github.com/girlscript/winter-of-contributing.git` <br/>
Now you have the project on your local machine.

<br />

### Add a remote (upstream) to original project repository

Remote means the remote location of project on Github. By cloning, we have a remote called origin which points to your forked repository. Now we will add a remote to the original repository from where we had forked.

`$ cd <your-forked-project-folder>`
`$ git remote add upstream https://github.com/girlscript/winter-of-contributing.git` <br/>
You will see the benefits of adding remote later.

<br />

### Synchronizing your fork

Open Source projects have a number of contributors who can push code anytime. So it is necessary to make your forked copy equal with the original repository. The remote added above called Upstream helps in this.

`$ git checkout main`
`$ git fetch upstream`
`$ git merge upstream/main`
`$ git push origin main` <br/>
The last command pushes the latest code to your forked repository on Github. The origin is the remote pointing to your forked repository on github.

<br />

### Create a new branch for a feature or bugfix

Usually, all repositories have a main branch that is regarded to be stable, and any new features should be developed on a separate branch before being merged into the main branch. As a result, we should establish a new branch for our feature or bugfix and go to work on the issue. 

`$ git checkout -b <feature-branch>`
This will create a new branch out of master branch. Now start working on the problem and commit your changes.

`$ git add --all`
`$ git commit -m "<commit message>"`
The first command adds all the files or you can add specific files by removing -a and adding the file names. The second command gives a message to your changes so you can know in future what changes this commit makes. If you are solving an issue on original repository, you should add the issue number like #35 to your commit message. This will show the reference to commits in the issue.

<br />

### Push code and create a pull request

You now have a new branch containing the modifications you want in the project you forked. Now, push your new branch to your remote github fork. 

`$ git push origin <feature-branch>`
Now you are ready to help the project by opening a pull request means you now tell the project managers to add the feature or bug fix to original repository. You can open a pull request by clicking on green icon -

<p align="center">  <img  src="https://i.imgur.com/aGaqAD5.png">  </p>

Remember your upstream base branch should be main and source should be your feature branch. Click on create pull request and add a name to your pull request. You can also describe your feature.

Fantastic! You've already made your first contribution.🥳

#### BE OPEN!

#### Happy Coding 👩‍💻👩‍💻

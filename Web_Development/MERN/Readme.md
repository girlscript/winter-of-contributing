# MERN: Mongo-Express-React-Node

Want to be a full-stack developer? GWoC provided you with a oppotunity to learn along with creating awesome documentation that is going to help many developers in future. So, Let's all come together and make this winter a great one. The following guide will help you get yourself started.

## Understanding 🚀
- [GirlScript Winter of Contributing](https://gwoc.girlscript.tech/) is a three-month newly established initiative by GirlScript Foundation to be conducted during winters.
- It encourages individuals to share their knowledge and ideas to develop technical skills and gain valuable experience in the field of tech education.
- Over the course of the program, participants can contribute to a variety of themes under the guidance of an expert facilitator.
- In simple words, it is an open source contribution contest
  that is completely content and documentation-based. More
  specifically, it targets sharing knowledge content for coders.

  ---
### ⭐ Carefully read [Contributing.md](https://github.com/girlscript/winter-of-contributing/blob/MERN/Web_Development/MERN/Contributing.md#contribution-guide-for-mern), before starting your contributions.

---
## Starting Up
1. Fork this repository: https://github.com/girlscript/winter-of-contributing
2. Clone it to your local machine using one of the following:
   - If using Git:
     ```bash
     git clone https://github.com/{username}/winter-of-contributing --branch MERN
     ```
   - If using GitHub CLI:
     ```bash
     gh repo clone {username}/winter-of-contributing -- --branch MERN
     ```
3. If using Git instead of GitHub CLI, remember to set `upstream`
   as a remote pointing to the parent repository:
   ```bash
   git remote add upstream https://github.com/girlscript/winter-of-contributing
   ```

Before starting a fresh contribution, make sure you pull all
updates from `upstream` to avoid any conflicts.
```bash
git pull upstream MERN
```

Try to (not required) do individual PRs in individual branches:
```bash
git checkout -b sample-branch

... # Make your commits

git push origin sample-branch

... # Make the PR

git checkout MERN
```


## Project Structure
1. For the naming of directories, we use `Pascal_Snake_Case`, which is the unarguable standard to be enforced in the event repository. We shall stick to the same.

2. The repository structure will be something like this:
Branch structure: 

      - MERN
        ```
        |- Web Development 
        |     |- MERN  
        |     |     |- Topic
        |     |     |    |- 1.FRONTEND
        |     |     |    |      |- React
        |     |     |    |      |- Readme.md 
        |     |     |    |      
        |     |     |    |- 2.BACKEND 
        |     |     |    |      |- 1.Node
        |     |     |    |      |- 2.Express
        |     |     |    |      |- 3.MongoDB 
        |     |     |    |      |- Readme.md 
        |     |     |    |                    
        |     |     |    |- 3.MERN_Projects 
        |     |     |           |- 1. 
        |     |     |           |- 2. 
        |     |     |           |- Readme.md 
        |     |     |    
        |     |     |- Readme.md (consist of Roadmap)
        |     |     |- Contributing.md 

        ```

      - Inside FRONTEND

        ```
        |- React
        |    |- Documentation
        |    |     |- 1.HTML Basics.md (Doc and Audio)
        |    |     |- 2.CSS Basics.md
        |    |     |- 3. 
        |    |
        |    |- Mini Projects
        |    |     |- 1.Beautiful Landing Page.md (Doc and Video)
        |    |     |- 2. 
        |- Readme.md
                
        ```
            

3. For the topic folders, we will follow the following naming convention:
   ```
    {Serial Number}.Title_In_Pascal_Snake_Case.md
   ```
   For example, for the following topic:
   - Serial number: 2
   - Topic name: Getting started with MERN



   We will have the following name for the folder:
   ```
   2.Getting_started_with_MERN.md
   ```
   `.md` is the extension. Please note that there is no space
   after the `.` after the serial number.

4. Inside each folder, we will have one `README.md` file, which
   will be the centre of focus of the topic.

   - If the topic is simple enough, the README file will form
     the entirety of the content, including links for video/audio content.
   - If the topic is big enough to have subtopics, each subtopic
     will be an independent directory within the topic directory
     and contain READMEs within itself for its own content.


---
### ⭐ Learn Markdown either from [Markdown Guide doc](https://www.markdownguide.org/basic-syntax/) or check out [Youtube video](https://www.youtube.com/watch?v=2JE66WFpaII).

---
## Issues
You may raise relevant issues within the repository, keeping
the following points in mind:
- The title of the issue must have the `MERN_React: ` prefix.
  
  E.g, `MERN_React: JSX`.
- The issue must mention which folder location should be
  created/used.

  E.g, `Topics/2. JSX`.
- A well-defined (not necessarily long) description of the
  topic in focus must be provided.

  E.g, `A tutorial on using JSX in React`.
- Including graphics and references is encouraged.

## Pull Requests
You may create PRs for existing issues within the repository, keeping
the following points in mind:
- The title of the issue must have the `[MERN_React] <Type>:` prefix,
  where `<Type>` is nothing but one of the following (a semantic
  understanding of what the PR is about):
  - `Topic` : Fresh topics.
  - `Fix` : Bug/Typo fixes.
  - `Other` : Everything else.
  
  E.g, `[MERN_React] Topic: JSX`.
  
- The PR must mention which issue(s) is/are being resolved, with
  the `resolves`, `closes`, or `fixes` keyword (case-insensitive) preceding the
  issue number prefixed with a `#`.

  E.g, Assuming the issue number is 3, any of the following works:
  - `Resolves #3`
  - `Closes #3`
  - `Fixes #3`
- A well-defined (not necessarily long) description of the
  updates made must be provided.

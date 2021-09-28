# MERN: Mongo-Express-React-Node

### ⭐ Before starting your contributions. Carefully read [Contributing.md](https://github.com/girlscript/winter-of-contributing/blob/MERN/Web_Development/MERN/Contributing.md#contribution-guide-for-mern).

---

## Starting Up 🥇
1. Fork this repository: https://github.com/girlscript/winter-of-contributing
2. Clone it to your local machine using one of the following:
   - If using Git:
     ```bash
     
     $ git clone https://github.com/{username}/winter-of-contributing --branch MERN
     ```
   - If using GitHub CLI:
     ```bash
     $ gh repo clone {username}/winter-of-contributing -- --branch MERN
     ```
3. If using Git instead of GitHub CLI, remember to set `upstream`
   as a remote pointing to the parent repository:
   ```bash
   $ git remote add upstream https://github.com/girlscript/winter-of-contributing
   ```

4. Before starting a fresh contribution, make sure you pull all
    updates from `upstream` to avoid any conflicts.
    ```bash
    $ git pull upstream MERN
    ```

5. Make your own working branch, in your local.
    ```bash
    $ git checkout -b <sample-branch>
    ```

6. Make changes add to stage and  commit 

    ```bash
    $ git add .
    $ git commit -m "your-commit-message" -m "your-commit-description"
    ```

7. Push your local work to your remote URL (Forked Repo)

   ```bash
   $ git push origin <Sample-Branch>
   ```

8. Create Pull Request.
    - Creating the PR using GitHub UI
    - Create Pull Request from the `<sample-branch>` branch in your forked repository to the `MERN branch` in the upstream (GWoC) repository
    - Link this Pull Request to the Issue that have been assigned to you.
 


> Yey! 🤩 you have successfully created the PR, now supervisors will Merge your PR, if everything is fine.
---

## Project Structure 📁
1. For the naming of directories, we use [Start Case](https://en.wikipedia.org/wiki/Letter_case#:~:text=each%20word%20capitalized%29-,%22The%20Quick%20Brown%20Fox%20Jumps%20Over%20The%20Lazy%20Dog%22,-Start%20case%20or),
   which is the unarguable standard to be enforced in the event
   repository. We shall stick to the same.
2. The repository structure will be something like this:
Branch structure: 

      - MERN
        ```css
  
        |- MERN  
        |     |- Topic
        |     |    |- FRONTEND
        |     |    |      |- React
        |     |    |      |- Readme.md 
        |     |    |      
        |     |    |- BACKEND 
        |     |    |      |- Node
        |     |    |      |- Express
        |     |    |      |- MongoDB 
        |     |    |      |- Readme.md 
        |     |    |                    
        |     |    |- Projects 
        |     |           |- 1. 
        |     |           |- 2. 
        |     |           |- Readme.md 
        |     |    
        |     |- Readme.md
        |     |- Contributing.md 

        ```

      - Inside FRONTEND

        ```css
        |- React
        |     |- 1.1_Introduction_to_React(D).md  # Documentation
        |     |- 2.1_Introduction_to_React(V).md  # Video
        |     |- 3.
        |     |- Readme.md
        
                
        ```
            

3. For the topic folders, we will follow the following naming convention:
   ```
   {Serial Number}_Title_In_Pascal_Snake_Case.md
   ```
   For example, for the following topic:

   - Serial number: 2
   - Topic name: Getting started with MERN

   We will have the following name for the folder:
   ```
   2_Getting_Started_With_MERN.md
   ```


---
### Learn Markdown either from [Markdown Guide doc](https://www.markdownguide.org/basic-syntax/) or check out [Youtube video](https://www.youtube.com/watch?v=2JE66WFpaII). 🚀 

---
## Issues 🇧🇶
You may raise relevant issues within the repository, keeping
the following points in mind:
- The title of the issue must have the `MERN_React: <Serial no.>` prefix.
  
  E.g, `MERN_React: 2.1 JSX in React`.
- The issue must mention which folder location should be
  created/used.
  
  E.g, `MERN>MERN/Topic/Frontend/React/`.
- A well-defined (not necessarily long) description of the
  topic in focus must be provided.

  E.g, `A tutorial on using JSX in React`.
- Including graphics and references is encouraged.

## Pull Requests 🔼
You may create PRs for existing issues within the repository, keeping
the following points in mind:
- The title for the PR should be same as the Issue, for e.g if you are working on issue  `MERN_React: 2.1 JSX in React`, then the PR title will go same as `MERN_React: 2.1 JSX in React`

- Provide a description about your PR.
  
- The PR must mention which issue(s) is/are being resolved, with
  the `resolves`, `closes`, or `fixes` keyword (case-insensitive) preceding the
  issue number prefixed with a `#`.

  E.g, Assuming the issue number is 3, any of the following works:
  - `Resolves #3`
  - `Closes #3`
  - `Fixes #3`
- A well-defined (not necessarily long) description of the
  updates made must be provided.


---
## Happy Contributing 🥳🙌
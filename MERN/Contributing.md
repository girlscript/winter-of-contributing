# Contribution Guide for MERN
Want to be a full-stack developer? GWoC provided you with a oppotunity to learn along with creating awesome documentation that is going to help many developers in future.So, Let's all come together and make this winter a great one. The following guide will help you get yourself started.

## Understanding
- [GirlScript Winter of Contributing](https://gwoc.girlscript.tech/) is a three-month newly established initiative by GirlScript Foundation to be conducted during winters.
- It encourages individuals to share their knowledge and ideas to develop technical skills and gain valuable experience in the field of tech education.
- Over the course of the program, participants can contribute to a variety of themes under the guidance of an expert facilitator.
- In simple words, it is an open source contribution contest
  that is completely content and documentation-based. More
  specifically, it targets sharing knowledge content for coders.


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
git pull upstream
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
1. For the naming of directories, we use `Pascal_Snake_Case`,
   which is the unarguable standard to be enforced in the event
   repository. We shall stick to the same.
2. The repository structure will be something like this:
Branch structure: 

MERN

    | ----|  MERN 

    | ----------- |  TOPICS 

    |-------------------| FRONTEND

    |-------------------| BACKEND 

    |-------------------| PROJECT

    |-------------------| Readme.md [consist of Roadmap] 

    |-------------------| contributing.md 


Inside FRONTEND

            |----React
            
                   |----Subtopics
                   
            |----Readme.md
            

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

## A good place to start learning Markdown is [this video](https://www.youtube.com/watch?v=2JE66WFpaII).

## Guidelines
1. Pull requests (hereby referred to as PRs) and commits
   must be kept as granular and atomic as possible. PRs with
   too many commits will be squashed before merge. The commit
   messages must be clear and comprehensible.
2. All PRs must be reviewed and approved by **atleast 2** mentors
   before the supervisor gets to go ahead and do the final
   review and merge/close.
3. Any important suggestions must be brought to the immediate notice
   of the mentors and/or the supervisor.
4. All code-blocks present in Markdown must be appropriately represented in the files.
   
   Example: 
   ```` md
   ```jsx
   // Your code goes here
   console.log('Hello World!');
   ```
   ````

   or any suitable formats. 
5. Contributions should be attributed by the author.
   - Document-based contributions may mention the names of the contributors
     at the end of the Markdown file.
   - Video/Audio-based contributions may mention the names of the contributors
     immediately next to where the URLs are mentioned.

- Each issue will uniquely identify a single topic/sub-topic.
- Every issue must have a checklist representing what kind of contributions are left undone (document, audio, video).
- Since a PR resolves and closes an issue, it'll manually be reopened after each kind of contribution is done. That's just fair, because multiple forms of contributions revolving the same issue would still require changing the same files, which isn't possible.
- For each topic, we'll first accept a document-based contribution before accepting any video/audio contribution.
- As long as we're not out of options, one contributor may contribute to one topic only in one format i. e. Either document, video, or audio, but not multiple.
- Although more issues will be generated, if you find an issue having been assigned to too many contributors already, I recommend you to:
  1. Look for other issues,.
  2. Request contribution to the same issue for a different format (document, audio, video).
  3. Create your own issue and request the tag from me (you may reference the roadmap).
- There will be a soft limit on the number of issues a single person may work simultaneously on.

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

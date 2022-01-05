# Introduction - Using R Studio

R is a free, open-source software and programming language developed in 1995 at the University of Auckland as an environment for statistical computing and graphics.

_Let's dive inn:_

# Table of Contents

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#RStudio:">RStudio: IDE</a>
    </li>
    <li>
      <a href="#Working">Working Directories</a>
      <ol>
        <a href="#Setting the Working Directory">Setup</a>
      </ol>
      <ol>
        <a href="#RStudio Projects">RStudio Projects (.Rproj files)</a>
      </ol>
    </li>
    <li>
      <a href="#Data Management">Data Management in RStudio</a>
      <ol>
        <a href="#Importing">Importing Data</a>
      </ol>
      <ol>
        <a href="#Exporting">Exporting Data</a>
      </ol>
      <ol>
        <a href="#Viewing">Viewing and Removing Data</a>
      </ol>
    </li>
    <li>
      <a href="#Getting&nbsq;Help">Getting Help</a>
    </li>
    <li>
      <a href="#Packages">Packages</a>
      <ol>
        <a href="#Installing">Installing Packages</a>
      </ol>
      <ol>
        <a href="#Loading">Loading Packages</a>
      </ol>
    </li>
    <li>
        <a href="#GetStarted">Get Started</a>
    </li>
  </ol>
</details>

## RStudio: An Integrated Development Environment (IDE) for R

RStudio is an integrated development environment (IDE) that allows you to interact with R more readily. RStudio is similar to the standard RGui, but is considerably more user friendly. It has more drop-down menus, windows with multiple tabs, and many customization options. The first time you open RStudio, you will see three windows. A forth window is hidden by default, but can be opened by clicking the File drop-down menu, then New File, and then R Script.

</br>
<p align="center">
    <img src="https://user-images.githubusercontent.com/26524467/134813101-08dc1328-0fa9-44b8-a0c4-0ff92efa5448.png" width="50%" height="50%"/>
</p>

</br>
</br>

| RStudio Windows / Tabs  | Location | Description |
| :---: | :---: | :---: |
| | |
| | |
| Console Window | lower-left | location were commands are entered and the output is printed |
| Source Tabs | upper-left | built-in text editor |
| Environment Tab | upper-right | interactive list of loaded R objects |
| History Tab | upper-right | list of key strokes entered into the Console |
| Files Tab | lower-right | file explorer to navigate C drive folders |
| Plots Tab | lower-right | output location for plots |
| Packages Tab | lower-right | list of installed packages |
| Help Tab | lower-right |output location for help commands and help search window |
| Viewer Tab | lower-right | advanced tab for local web content |

</br>

## Working Directories

### Setting the Working Directory

Before you begin working in R, you should set your working directory (a folder to hold all of your project files). 
for example, "C:\workspace\…"

* To change the working directory in RStudio, select main menu `Session -> Set Working Directory ->...`. Or, from the "Files" tab `click More -> Set As Working Directory` to use the _current location of the "Files" tab_ as your working directory.

* Setting the working directory via the menus is the same as doing it in the Console with the `setwd()` command:
    ```R
    setwd("C:/workspace/project1/")
    ```
* This directory is where all your input data should be stored and also is the default location for plot files and other output.

* Essentially, you want to have the inputs for your code to be found in the working directory so that you can refer to them using relative file paths. Relative file paths make it easier if you move the folder containing your script(s) around. Or, if you share it with someone else, they will have little issue getting your code to work on their own file system.

_**NOTE**_: Beware when specifying any file paths that R uses forward slashes `/` instead of back slashes `\`. Back slashes are reserved for use as an escape character.

* To check the file path of the current working directory (which should now be "C:\workspace"), type:
   
    ```R
    getwd()
    ```

### RStudio Projects (.Rproj files)

You can also manage your working directory using RStudio Projects. An RStudio Project file (.Rproj) is analogous to, for example, a .mxd file for ArcMap. It contains information about the specific settings you may have set for a "project".

You open or create projects using the drop down menu in the top right-hand corner of the RStudio window (shown below)

![image](https://user-images.githubusercontent.com/26524467/134812976-72624f0f-338d-4983-be51-3e5ac746ffd2.png)

RStudio Project Menu

Here is what a typical Project drop-down menu looks like:

![image](https://user-images.githubusercontent.com/26524467/134813005-c94de60d-41a7-49ad-a655-426f5f2dec1b.png)

* You can create new projects from existing or new directories with "New Project…".

* When you click "Open Project…", your working directory is automatically set to the .Rproj file’s location – this is extremely handy

* Any projects you have created/used recently will show up in the "Project List"

Keeping working directories simple and specific to a single "project" is a good practice that helps keeps your code and input data organized, and helps you come back to a project after some time away from it.

## Data Management in RStudio

### Importing Data

After your working directory is set, you can import data from .csv, .txt, etc. One basic command for importing data into R is `read.csv()`. The command is followed by the file name and then some optional instructions for how to read the file.

* This dataset can either be imported into R using the Import Dataset button from the Environment tab, or by typing the following command into the R console:

    ```R
    csv_data <- read.csv("C:/workspace/project1/data.csv") 
    # if your workspace was already set you could simply use the filename, like so
    csv_data <- read.csv("data.csv")s
    ```

**Note**: R can import Excel files, but generally speaking it is a bad idea to use Excel. Excel has a dangerous default which automatically converts data with common notations to their standard format without warning or notice. For example, the character _"11-JUN"_ entered into a cell automatically becomes the date _6/11/2017_, even though the data is still displayed as _11-JUN_. The only way to avoid this default behavior is to manually import your data into Excel via the **Data Tab -> Get External Data Ribbon**, and manually set the data type of all your columns to text.

### Exporting Data

* To export data from R, use the command `write.csv()` function. Since we have already set our working directory, R automatically saves our file into the working directory.
    ```R
    write.csv(csv_data, file = "data_copy.csv")
    # or use the write.table() function to export other text file types
    ```

### Viewing and Removing Data

Once the file is imported, it is imperative that you check to ensure that R correctly imported your data. Make sure numerical data are correctly imported as numerical, that your column headings are preserved, etc. To view data simply click on the sand dataset listed in the Environment tab. This will open up a separate window that displays a spreadsheet like view.

<p>
    <img src="https://user-images.githubusercontent.com/26524467/134915001-5826def7-74f7-4088-a4c2-c72a15dbba46.png" width="25%" height="25%">
</p>

## Getting Help

Before asking others for help, it’s generally a good idea for you to try to help yourself. R includes extensive facilities for accessing documentation and searching for help. There are also specialized search engines for accessing information about R on the internet, and general internet search engines can also prove useful.

* Use the Help tab in the _lower-right_ Window to search commands (such as hist) or topics (such as histogram).

* The `help()` function and `?` help operator in R provide access to the documentation pages for R functions, data sets, and other objects, both for packages in the standard R distribution and for contributed packages. To access documentation for the _standard lm (linear model)_ function, for example, enter the command `help(lm)` or `help("lm")`, or `?lm` or `?"lm"`(i.e., the quotes are optional).

## Packages

To use a package, you must first install it and then load it. These steps can be done at the command line or using the Packages Tab. Examples of both approaches are provided below. R packages only need to be installed once (until R is upgraded or re-installed). Every time you start a new R session, however, you need to load every package that you intend to use in that session.

### Installing Packages

Within the **Packages** tab you will see a list of all the packages currently installed on your computer, and 2 buttons labeled either "Install" or "Update". To install a new package simply select the **Install** button. You can enter install one or more than one packages at a time by simply separating them with a comma.

<p>
    <img src="https://user-images.githubusercontent.com/26524467/134916953-7208f2c2-a4b0-41d3-a4e3-5425ddbd460d.png" width="20%" height="20%"/>
</p>


### Loading Packages

Once a package is installed, it must be loaded into the R session to be used.

<p>
    <img src="https://user-images.githubusercontent.com/26524467/134917703-fd594df0-94b8-4fe7-93de-13631b305826.png" width="20%" height="20%"/>
</p>

```R
library(soiltexture)
# To load this package into the script
```
<br>

## GetStarted

Now, You can start creating and writing scripts. All the Best :)

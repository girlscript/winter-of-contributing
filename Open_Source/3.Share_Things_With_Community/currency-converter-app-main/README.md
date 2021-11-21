# currency-converter-app



# Reproducing this web app
To recreate this web app on your own computer, do the following.

### Create conda environment
Firstly, we will create a conda environment called *currency-converter-app*
```
conda create -n currency-converter-app python=3.7.9
```
Secondly, we will login to the *currency-converter-app* environement
```
conda activate currency-converter-app
```
### Install prerequisite libraries

Download requirements.txt file

```
wget https://raw.githubusercontent.com/dataprofessor/currency-converter-app/main/requirements.txt

```

Pip install libraries
```
pip install -r requirements.txt
```

###  Download and unzip contents from GitHub repo

Download and unzip contents from https://github.com/dataprofessor/currency-converter-app/archive/main.zip

###  Launch the app

```
streamlit run app.py
```

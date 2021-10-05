## Tarun and the Alien Language
Tarun is learning an alien language which does not have any of the english alphabet characters (A-Z, a-z) in it.


He has an English text paragraph that he wishes to translate to this new language but since the text is too large he needs your help. 

Given two files for each testcase:-
1. dictionary.txt - which contains the mapping of english characters to the characters of this new alien language.

2. paragraph.txt - which contains the text that is to be translated.

You have to generate a new file - 'alien.txt' which contains the translated text. Put this newly generated file in the same folder.


**dictionary.txt** contains atmost 26 rows. Each row contains a lowercase english character followed by a symbol. Each english character only appears once in **dictionary.txt**.

**paragraph.txt** contains english lowercase characters only. Note that whitespace characters are also present.

If a character appears in **paragraph.txt** for which translation is not defined in **dictionary.txt**, it should be printed as it is.


#### Example
**dictionary.txt** -
```
a ;
d (
c +
b =
```

**paragraph.txt** - 
```
abdc dc ba aaab dc
```

Your **alien.txt** should have the text - 
```
;(=+ =+ (; ;;;( =+
```



## AUDIO LINK : [CLUSTERING OF COUNTRIES](https://drive.google.com/file/d/1ZNGzAi1qbmDAImLg-osPrEq2BZw7i40f/view?usp=sharing)

## What is Clustering?

- Clustering is a type of unsupervised learning method of machine learning.
- In the unsupervised learning method, the inferences are drawn from the data sets which do not contain labelled output variable. 
- It is an exploratory data analysis technique that allows us to analyze the multivariate data sets.


## Types of Clustering

![image](https://user-images.githubusercontent.com/63282184/134457458-2a8f77b6-3b56-476e-9d0b-a61d7cf90bc7.png)


## k-Means: Advantages and Disadvantages 

**Advantages**
• Easy	to	implement	

• With	a	large	number	of	variables,	K-Means	may	be	computaHonally	faster	than	
hierarchical	clustering	(if	K	is	small).	

• k-Means	may	produce	Hghter	clusters	than	hierarchical	clustering	

• An	instance	can	change	cluster	(move	to	another	cluster)	when	the	centroids	are	recomputed.		

**Disavantages**	

• Difficult	to	predict	the	number	of	clusters	(K-Value)	

• IniHal	seeds	have	a	strong	impact	on	the	final	results	

• The	order	of	the	data	has	an	impact	on	the	final	results	

• SensiHve	to	scale:	rescaling	your	datasets	(normalizaHon	or	standardizaHon)	will	
completely	change	results.	While	this	itself	is	not	bad,	not	realizing	that	you	have	to	
spend	extra	a4en(on	to	scaling	your	data	might	be	bad.	

## Hierarchical Clustering: Advantages and Disadvantages 

**Advantages**

• Hierarchical	clustering	outputs	a	hierarchy,	ie	a	structure	that	is	more	informaHve	than	
the	unstructured	set	of	flat	clusters	returned	by	k-means.	Therefore,	it	is	easier	to	decide	
on	the	number	of	clusters	by	looking	at	the	dendrogram	(see	suggesHon	on	how	to	cut	a	
dendrogram	in	lab8).	

• Easy	to	implement	

**Disavantages**	

• It	is	not	possible	to	undo	the	previous	step:	once	the	instances	have	been	assigned	to	a	
cluster,	they	can	no	longer	be	moved	around.		

• Time	complexity:	not	suitable	for	large	datasets	

• IniHal	seeds	have	a	strong	impact	on	the	final	results	


• The	order	of	the	data	has	an	impact	on	the	final	results	

• Very	sensiHve	to	outliers


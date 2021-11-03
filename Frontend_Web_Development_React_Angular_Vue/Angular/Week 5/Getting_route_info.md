# ***Getting Route Information***



Using this route information we can share the information of one component to another component. 

**For Eg**. A contributor wants to select his/her stream to contribute. Each stream will have it own unique id. To add which streams he want to contribute in he will click on AddStream component. 

Then if you want to select that stream we will add its id , So that it should be clear that he can contribute in that stream.



**Steps to get information through that route :**



1. Firstly , *Importing ActivatedRoute and ParaMap.*

   ````tsx
   import { Router, ActivatedRoute, ParamMap } from '@angular/router';
   ````

   Using this statment our component will learn about three different things 

   Router

   ActivatedRoute

   ParaMap





2. *Injecting an instance of ActivatedRoute*

````tsx
constructor(
  private route: ActivatedRoute,
) {}
````





3. Now we will update ngOnInit() so that we can have access to activated route and track the id.

``` tsx
ngOnInit() {
  this.route.queryParams.subscribe(params => {
    this.name = params['GWOCname'];
  });
}
```





In this example variable GWOCname is used and assigns value on the basis of name parameter.



# Reference

[angular documentation](https://angular.io/guide/router#getting-route-information) , [angular wiki](https://www.angularjswiki.com/angular/how-to-get-current-route-in-angular/) .
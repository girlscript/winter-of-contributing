# <u>Injecting Services</u>



### What is Service ?  Difference between components and services



A **service** is a class with a **narrow and well - defined purpose**. 

services are more **modular** and **reusable** than components .

Components are used to enhance the user experience. The use of properties and methods for data binding are to create a better user experience .

services can do some tasks for the components like **fetching data from the server**, **logging directly into console** and **validating user input** and after that all this data can be provided to components.



Angular helps you to follow these rules and make it easy to apply the logic into services and make them available to the components for the dependency injection.



![](https://i.imgur.com/gu2ykb6.png)

# Service Example



````tsx
export class Logger {
  log(msg: any)   { console.log(msg); }
  error(msg: any) { console.error(msg); }
  warn(msg: any)  { console.warn(msg); }
}
````



Here Class contributorService depends on logger and BackendServices, and  these might depends on HttpClient to get heroes and add them in contributor .



````tsx
export class ContributorService {
  private contributor: Hero[] = [];

  constructor(
    private backend: BackendService,
    private logger: Logger) { }

  getcontributors() {
    this.backend.getAll(Hero).then( (contributor: Hero[]) => {
      this.logger.log(`Fetched ${contributor.length} contributors.`);
      this.contributor.push(...contributor); // fill cache
    });
    return this.contributor;
  }
}
````



Here all the heroes are fetched from the service provider and save them in the component element named as contributor.



# <u>Dependency Injection</u>



**Dependency Injection** is used to inject services into the component and giving the access to component to **fetch data from the service** .

We use **@Injectable()** decorator to indicate that component has a dependency and allows angular to inject the data in the component .

All the dependencies you want to link should be *registered with application injector*.



Every component needs a service. For example.

````tsx
constructor(private service: ContributorService) { }
````



here HeroListComponent needs ContributorService .



**Step 1**. Angular finds a component that depends on service

**Step 2**. injector checks existing instance

**Step 3**. If its not there then it makes one and adds it.

**Step 4**. after this angular calls the component with the services as arguements.



This is how DI works.



# Providing Services



-  The command "ng generate service" , It registers a provider with @Injectable() decorator.

  ````tsx
  @Injectable({
   providedIn: 'root',
  })
  ````

  Angular create an instance of the service and injects into the class that demands for it .

  

  **Tree - shaking =>  The process of optimization and removing the service that is not being used.**



- register provides a specific NgModule. And to register they uses providers property that is @NgModule() decorator.

```` tsx
@NgModule({
  providers: [
  BackendService,
  Logger
 ],
 ...
})
````



-  And At component level, we have to register service provider at providers property of @component().

```` tsx
@Component({
  selector:    'app-hero-list',
  templateUrl: './hero-list.component.html',
  providers:  [ ContributorService ]
})
````





# Reference



[Angular documentation](https://angular.io/guide/architecture-services#introduction-to-services-and-dependency-injection) , [dzone](https://dzone.com/articles/what-is-a-service-in-angular-js-why-to-use-it) .
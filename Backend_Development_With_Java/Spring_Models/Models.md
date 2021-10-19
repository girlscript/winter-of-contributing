# Introduction

**Model** works as a container for the data of the application. Hera a data can be in any form such as objects, strings, data from the database, etc.

Model is the most basic concept of Spring. Putting in simple words, the model can supply attributes used for rendering views.

To provide a view with usable data, we simply add this data to ```Model``` object.

Example:

```java
@GetMapping("/showViewPage")
public String passParametersWithModel(Model model) {
    model.addAttribute("message", "Adding attributes to the object model");
    return "viewPage";
}
```

## Model Attributes ```@ModelAtrribute``` Annotation

This annotation binds a method return value or a method parameter to a named model attribute and exposes it to the web view.

This annotation can be used both as a method paramater or at the method level.

### 1. At the method level

This type of usage indicates the purpose of that method is to add multiple model attributes. **Such methods support the same argument types as ```@RequestMapping``` methods but that cannot be mapped directly to requests.**

Example:

```java
@ModelAttribute
public void addAttribute(Model model) {
    model.addAttribute("msg", "Hello from model attribute");
}
```

In the above example, we are adding the attribute ```msg``` with the specified value to all the _models_ defined in the **Controller** class.

In general, Spring MVC always makes the first call to the method which specifies the attributes for the model before making further calls to the request handler methods. **That is, ```@ModelAttribute``` methods are invoked before the controller methods annotated with `@RequestMapping` are invoked.** In simple terms, model creation takes place first before further processing starts.

### 2. As a Method Argument

When used as a method argument, it indicates the argument should be retrieved from the model. When not present, it should be first instantiated and then added to the model, and once present in the model, the arguments fields should be populated from all request parameters that have matching names.

Example:

```java
@RequestMapping(value="/addEmployee", method=RequestMethod.POST)
public String Submit(@ModelAttribute("emp") Employee employee) {
    //use the employee object as required

    return "employeeView";
}
```

In the baove code snippet we are populating the model attribute with the data submitted in a for at the endpoint `/addEmployee`.

## Example Program

Let us create a simple program wherein a user enters his or her personal details and if no error is prompted he or she can see his data that was submitted in the form previously.

Creating a simple from for taking details:

```xml
<form:form method="POST" action="/addDetails" modelAttribute="user">
    <form:label path="name">Name</form:label>
    <form:input path="name" />
    
    <form:label path="age">Age</form:label>
    <form:input path="age" />

    <form:label path="id">Id</form:label>
    <form:input path="id" />
    
    <input type="submit" value="Submit" />
</form:form>
```

Controller class for the previously mentioned form or `view`:

```java
@Controller
@ControllerAdvice
public class UserController {

    //Creating a user map for storing the users
    private Map<Long, User> userMap = new HashMap<>();

    @RequestMapping(value = "/addDetails", method = RequestMethod.POST)
    public String submit(
      @ModelAttribute("user") User user,
      BindingResult result, ModelMap model) {
        //checnking if any errors is encountered or not
        if (result.hasErrors()) {
            return "error";
        }

        //adding attributes name, age and id to the model
        model.addAttribute("name", user.getName());
        model.addAttribute("age", user.getAge())
        model.addAttribute("id", user.getId());

        //Mapping user to the userMap
        userMap.put(user.getId(), user);

        return "userView";
    }

    @ModelAttribute
    public void addAttributes(Model model) {
        model.addAttribute("msg", "Welcome to the Netherlands!");
    }
}
```

In the `submit()` method we have an _User_ object bound to the _View_. From the form we are collecting the data and setting them to the _ModelMap_.

In the end we are returning ``userView``, which means that the respective JSP file is going to be called as a _View_  representative.

There is also `addAttributes()` method whose purpose is to add values to the _Model_ which will be identified globally,i.e, default value for every model which will be returned as a response for every request to a controller method.

The **Model** is as follows:

```java
@XmlRootElement
public class User {
    private long id;
    private String name;
    private int age;

    public User(long id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }
}
```

Results View:

```xml
<h3>${msg}</h3>
Name: ${name}
Age: ${age}
ID: ${id}
```

The above code prints the data which we recieved from the form.

### References

1. [Spring Model Baeldung](https://www.baeldung.com/spring-mvc-model-model-map-model-view)
2. [Model Annotation Baeldung](https://www.baeldung.com/spring-mvc-and-the-modelattribute-annotation)
3. [Spring Beans Doc](https://docs.spring.io/spring-javaconfig/docs/1.0.0.M4/reference/html/ch02s02.html)

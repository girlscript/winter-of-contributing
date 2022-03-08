<h1 align="center"> Implementation of State Management using Vuex</h1>



## State Management
State Management is the implementation of a Design Pattern that centralizes the data in a single source of truth (State), so it can be accessed application-wide.
This is really useful for many reasons, the main one is that it allows user to have a cleaner and more maintainable app, where he don’t have to struggle to find the origin of some data that has been passed from one component to another in a endless chain of props and event listeners that can become really confusing.

-- To know about state management, first dive into vuex



# Vuex 

**Vuex** is the first-party development and **state management pattern and library** for Vue.js applications. 
It was created by Evan You and is currently maintained by the Vue.js Core Team. Like many other state management libraries, Vuex follows the principle of One directional Data flow, with actions and mutations modifying data in a single source of truth called the store. It serves as a centralized store for all the components in an application, with rules ensuring that the state can only be mutated in a predictable fashion.

The flow goes like this:
* State: **The single source of truth**. These are a collection of data at a given time. This state can be changed with user interactions via dispatch and commit methods. When the user modifies data, a dispatch event is executed, which passes data to a mutation and updates the state object.
* Vue Components: Here you can access the representation of the state or part of it. The user can also interact with those state representations and **dispatch actions** to trigger a change in the state.
* Actions: Perform operations in response to user interaction with the app, they can perform asynchronous operations like API calls, or any synchronous operation. Once this operation is completed it will **commit a mutation** to modify the state.
* Mutations: Are the only ones that can mutate the state of an application, they receive as an argument the current app state and the payload needed to change the application state. If you come from Angular or React you might know them as **Reducers**.




# Creating a simple store with Vuex

## Step1: Installation

You can either use npm or yarn and run the following command 

```
$ npm install vuex --save
$ yarn add vuex
```

## Step2: Creating a simple store 

```

import Vuex from 'vuex'
import Vue from 'vue'

Vue.use(Vuex)

export default new Vuex.Store({
  state: {
    // Here we will put the initial state of the app
    count: 0
  },
  
  getters: {
    // Here we will create the getters
    getCount: state => state.count
  },
  
  actions: {
    // Here we will create the actions that will commit the mutations
    increaseCount({commit}, amount) {
      commit('increment', amount);
    }
  },
  
  mutations: {
    // Here we will create the mutations that will change the state
    increment(state, payload) {
      state.count = state.count + payload;
    }
  }
});
```
Here, we created a simple store with an initial state of count, a simple action incrementCount that will receive an amount to increment the count and will commit a mutation passing that amount as a payload. We have a **mutation increment** that will receive the payload and *mutate the state of count* adding the amount received in the payload to the current state.
Finally we have a **getter** that we can use to *access the state from the component*.

## Step3: Importing our store into our Vue Project

```
import Vue from 'vue'
import App from './App.vue'
import store from './store/store'

Vue.config.productionTip = false;

new Vue({
  store,
  render: h => h(App),
}).$mount('#app');
```

## Step4: Accessing the state in our Vue Components

Finally we can access the state in our Vue Components through getters and dispatch actions in order to commit mutations to it. 

```
import {mapGetter, mapActions} from 'vuex

export default ({
    name: 'Counter'
  data {
      return {
          count:0
      }
  },

  computed:{
      ...mapGetter(['getCount])

      // notice that i used spread operator in the component to map getters and actions, this is a simpler syntax access them
  }
  
  created: {
    this.count= this.getCount;
  },
  
  methods: {
      ...mapActions(['incrementCount]), 

      increseCounter(){
          this.incrementCounter(1);
          this.count = this.getCount;
      }
  },
  
});
```

So here we have a super simple store using Vuex/

# Conclusion

State Management is an excellent pattern to include in projects, but this doesn’t mean that all the data of the application should be put in the Vuex state. Components can still have local state and if some data belong strictly to a single component, there is no need to use Vuex to handle it. As a developer is important to understand how each solution works and be able to adapt it to your own need in your projects, there is no a one-size-fits-all solution.










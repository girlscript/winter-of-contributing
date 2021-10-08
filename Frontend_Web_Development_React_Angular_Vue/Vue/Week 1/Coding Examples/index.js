
Vue.component('IntroCard',{
  
    template: `
    <div>
    <div class="card">
      <div class="card-header">
        <img :src="img" alt="">
      </div>
      <div class="card-body">
       <p>
        Lorem ipsum dolor sit, amet consectetur adipisicing elit. Esse nesciunt ullam tempora veniam eos ratione. 
       </p>
       </div>
    </div>
</div>
    `,
    props: {
        img: {
            type: String,
            default: '../assets/../assets/images(2).jpg'
        }

    }
      
})

const app = new Vue({
  el: '#app',
  data: {
      
  }
})
const count = document.getElementById('count');
const decrease = document.getElementById('decrease');
const reset = document.getElementById('reset');
const increase = document.getElementById('increase');
var c = 0;
decrease.addEventListener('click', ()=>{
    c--;
    count.textContent = c;
});

increase.addEventListener('click', ()=>{
    c++;
    count.textContent = c;
});

reset.addEventListener('click', ()=>{
    c=0;
    count.textContent = c;
});

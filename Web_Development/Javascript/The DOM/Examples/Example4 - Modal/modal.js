const modalbtn = document.getElementById('modalbtn');
const closebtn = document.getElementById('closebtn');
const modal = document.getElementById('modal');
const button = document.getElementById('button');

modalbtn.addEventListener('click', ()=>{
    modal.style.display='flex';
    button.style.display='none';
});

closebtn.addEventListener('click', ()=>{
    modal.style.display='none';
    button.style.display='flex';
});
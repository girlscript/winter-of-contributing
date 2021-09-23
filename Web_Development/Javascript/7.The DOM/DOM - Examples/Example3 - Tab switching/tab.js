const all = document.getElementById('all');
const black = document.getElementById('black');
const grey = document.getElementById('grey');
const allcontent = document.getElementById('allcontent');
const blackcontent = document.getElementById('blackcontent');
const greycontent = document.getElementById('greycontent');

black.addEventListener('click', ()=>{
    allcontent.style.display='none';
    blackcontent.style.display='flex';
    greycontent.style.display='none';

    black.style.color='white';
    black.style.backgroundColor='black';
    all.style.color='black';
    all.style.backgroundColor='white';
    grey.style.color='black';
    grey.style.backgroundColor='white'; 
});

all.addEventListener('click', ()=>{
    allcontent.style.display='flex';
    blackcontent.style.display='none';
    greycontent.style.display='none';

    black.style.color='black';
    black.style.backgroundColor='white';
    all.style.color='white';
    all.style.backgroundColor='black';
    grey.style.color='black';
    grey.style.backgroundColor='white'; 
});

grey.addEventListener('click', ()=>{
    allcontent.style.display='none';
    blackcontent.style.display='none';
    greycontent.style.display='flex';

    black.style.color='black';
    black.style.backgroundColor='white';
    all.style.color='black';
    all.style.backgroundColor='white';
    grey.style.color='white';
    grey.style.backgroundColor='black'; 
});


const btn = document.getElementById('colorbtn');
const color = document.querySelector('.color');

btn.addEventListener("click", ()=>{
    
    const c1 = getRandom1(255);
    const c2 = getRandom2(255);
    const c3 = getRandom3(255);
    document.body.style.backgroundColor = `rgba(${c1},${c2},${c3})`;
    // console.log(`rgba(${c1},${c2},${c3})`);
    color.textContent = `RGB(${c1},${c2},${c3})`;
    color.style.color=`rgba(${c1},${c2},${c3})`;
});

function getRandom1(max){
    return Math.floor(Math.random() * max);
}
function getRandom2(max){
    return Math.floor(Math.random() * max);
}
function getRandom3(max){
    return Math.floor(Math.random() * max);
}
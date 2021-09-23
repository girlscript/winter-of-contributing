const courses = [
    {
        name: "Complete ReactJS course",
        price: "2.0",
        color: "#00d2f754"
    },
    {
        name: "Complete AngularJS course",
        price: "2.8",
        color: "#d6002eb6"
    },
    {
        name: "Complete NodeJS course",
        price: "2.5",
        color: "#74ac64"
    },
    {
        name: "Complete MERN course",
        price: "5.0",
        color: "rgba(255, 140, 0, 0.664)"
    }
];

const hlbutton = document.querySelector(".sort-high-low-btn");
const lhbutton = document.querySelector(".sort-low-high-btn");

function generateLIST(){
    const ul = document.querySelector(".list-group")
    ul.innerHTML = "";
    courses.forEach( course => {
        const li = document.createElement("li");
        li.classList.add("list-group-item");
        li.style.backgroundColor= course.color;

        const name = document.createTextNode(course.name);
        li.appendChild(name);

        const span = document.createElement("span");
        span.classList.add("float-right");

        const price = document.createTextNode("$" + course.price);
        span.appendChild(price);
        li.appendChild(span);

        ul.appendChild(li);
    } );
}

window.addEventListener("load", generateLIST);

lhbutton.addEventListener("click", ()=>{
    courses.sort( (a,b)=> a.price - b.price );
    generateLIST();
});

hlbutton.addEventListener("click", ()=>{
    courses.sort( (a,b)=> b.price - a.price );
    generateLIST();
});
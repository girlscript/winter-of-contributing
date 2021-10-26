const express =require("express");
const app=express();
const http=require("http");
const server=http.createServer(app);
const {Server} =require("socket.io");
const io=new Server(server);



app.use(express.static("public"));
let user=[];
io.on("connection",function(socket){
    console.log(socket.id,"socket connected");
    socket.on("user-connected",function(name){
        user.push({id:socket.id,name:name})
        // append the chat to all users

        socket.broadcast.emit("user-joined",name)
    })

    socket.on("chat-append" , function(chat){
        let name;
        for(let i=0 ; i<user.length ; i++){
          if(user[i].id == socket.id){
            name = user[i].name;
            break;
          }
        }
        socket.broadcast.emit("append-chat" , {name , chat});
      })

    socket.on("disconnect",function(){
      let disconnectedUser;
        let userArr=  user.filter((userObject)=>{
           
            if(userObject.id==socket.id){
                 disconnectedUser=userObject;
                 console.log(userObject)
                 return false;
             }else{
                 return true;
             };
             
            
    })
    user=userArr;
    socket.broadcast.emit("user-leave",disconnectedUser.name);
    }) 

    
})

server.listen(4000,function(){
    console.log("App started at port 4000")
})
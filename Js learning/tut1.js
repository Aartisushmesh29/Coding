// let arr = [45,23,66];
// console.log(arr);
// let a = arr.map((value ,index,array) => {
//     return value + index;
// })
// console.log(a);
//Array filter method

// const { isValidElement } = require("react");

// let arr2 = [20,25,30];
// console.log(arr2);
// let a2 = arr2.filter((a)=>{
//     return a<10
// })
// console.log(a2)

// array reduce function
//  let arr3 = [1,3,2,4,5,2,1]
//  let newarr3 = arr3.reduce ((h1,h2)=>{
//     return h1+h2;

//  })
//  console.log(newarr3)

//  Practice problem
// let arr = [1,2,3,4,5]
// let a = prompt("enter a number");


// let number = math.random()*100;
 

// // Callacks in javascript ...........we pass functions as an argument in another function that is known as error handling .
function loadScript(src , ccallback){
    var script = document.createElement("script");
    script.src = src;
    script.onload = function(){
        console.log("loaded script with SRC: " + src)
        ccallback(null, src);

    }
    script.onerror = function (){
        console.log("error loading  script with SRC " + src);
        ccallback(new Error ("src got some error"))
    }
    document.body.appendChild(script);
}
function hello(error , src){
    if (error){
        console.log(error)
        return
    }
    alert('hello world ',src)
}

function goodmorning(error ,src){
    if(error){
        console. log(error)
        sendEmergencyMessageToCeo();
        return
    }
    alert('good morning' + src);

}
loadScript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.esm.min.js" , goodmorning)

// pyramid of DOM
// loadScript("https://cdn.jsdelivr.net/npm/bootstrap1@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//     if(error){
//         console. log(error)
//         sendEmergencyMessageToCeo();
//         return
//      }
//       loadScript("https://cdn.jsdelivr.net/npm/bootstrap2@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//          if(error){
//              console. log(error)
//              sendEmergencyMessageToCeo();
//              return
//         }
//         loadScript("https://cdn.jsdelivr.net/npm/bootstrap3@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//                  if(error){
//                  console. log(error)
//                 sendEmergencyMessageToCeo();
//                  return
//              }
//             loadScript("https://cdn.jsdelivr.net/npm/bootstrap4@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//                       if(error){
//                           console. log(error)
//                           sendEmergencyMessageToCeo();
//                           return
//                   }
//                  loadScript("https://cdn.jsdelivr.net/npm/bootstrap5@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//                               if(error){
//                                       console. log(error)
//                                       sendEmergencyMessageToCeo();
//                                       return
//                                  }
//                                  loadScript("https://cdn.jsdelivr.net/npm/bootstrap6@5.3.2/dist/js/bootstrap.esm.min.js" , function goodmoring(error,src)){
//                                        if(error){
//                                               console. log(error)
//                                               sendEmergencyMessageToCeo();
//                                                return
//                                            }

//                                     }


                                

let a;
let b;
let c;
document.getElementById("submitButton").onclick = function(){
    a = document.getElementById("atextbox").value;
    a = Number(a);

    b = document.getElementById("btextbox").value;
    b = Number(b);

    c = Math.sqrt(Math.pow(a,2) + Math.pow(b, 2));

    document.getElementById("clabel").innerHTML = "Side C:" + c;

}
// console.log("i like pizza");
// window.alert("i really love pizza");
// // variable

// let firstName = "Bro";  //strings
// let age = 21 ; //number
// let student = true ; //booleans

// console.log("hello",firstName);
// console.log("you are",age,"years old");
// console.log("enrolled:",student);



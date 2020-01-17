function powers(){
    let placeHolder = 0;
    for(let i = 1; i <= 16; i++){       
        placeHolder = Math.pow(2, i);       
        console.log(placeHolder);
    }
}

function colorLink(){
    document.getElementById("filler").style.color = "blue";
    document.getElementById("filler").innerHTML = `<a href = "https://en.wikipedia.org/wiki/Harriet_Tubman"> Harriet Tubman yo </a>`
}
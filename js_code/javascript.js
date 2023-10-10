<<<<<<< HEAD
let choices = ["rock","paper","scissors"]
let playagain;

function getComputerChoice() {
    let choice = Math.floor(Math.random()*choices.length);
    return choices[choice];
}

function getPlayerChoice() {
    let choice;
    do{
        choice = String(window.prompt("Rock, paper scissors?"));
        choice = choice.toLowerCase();
    }    
    while (choice !== "rock" && choice !== "paper" && choice !== "scissors");
    return choice;
}
function playRound()
{
    const getComputerChoice = getComputerChoice();
    const getPlayerChoice = getPlayerChoice();
    if (getPlayerChoice === getComputerChoice){
        console.log("It's a tie!");}
    else if (getPlayerChoice === "rock" && getComputerChoice === "paper"){
        console.log("You lose!");}    
    else if (getPlayerChoice === "rock" && getComputerChoice === "scissors"){
        console.log("You win!");}
    else if (getPlayerChoice === "paper" && getComputerChoice === "scissors"){
        console.log("You lose!");}
    else if (getPlayerChoice === "paper" && getComputerChoice === "rock"){
        console.log("You win!");}
    else if (getPlayerChoice === "scissors" && getComputerChoice === "rock"){
        console.log("You lose!");}
    else if (getPlayerChoice === "scissors" && getComputerChoice === "paper"){
        console.log("You win!");}   
    let play;    
    return play = String(window.prompt("Play again(yes/no)?")).toLowerCase();
}

do{
    playagain = playRound();
}
while(playagain !== "no");
=======
function fibonacci()
{
    let fibo = [1,1];
    for(let i = 0; i < 8 ; i++)
    {
        fibo[i+2]=fibo[i] + fibo[i+1];
    }
    for(let i = 0; i < 9 ; i++)
        console.log(fibo[i]);
}

fibonacci();

>>>>>>> cb82add3c3b65ef6cf79b63072713cc38cf61687

window.onload = () => {
    gameStart();
}

let board = [
    [null, null, null],
    [null, null, null],
    [null, null, null]
]
let playerOne = 'X'
let playerTwo = 'O'
let turn = 0;

function gameStart() {
    board = [
        [null, null, null],
        [null, null, null],
        [null, null, null]
    ]
    turn = 0;
    let arr =Array.from(document.getElementsByClassName('box'));
    console.log(typeof(arr));
    arr.map(tmp);
    console.log(board);
    for (let i = 0; i < 3; i++) {
        for (let x = 0; x < 3; x++) {
            let box = document.getElementById(i + "-" + x);
            box.addEventListener("click", () => playerTurnClick(i, x));
        }
    }
}

const tmp = (b)=>{b.innerHTML = ""}

function playerTurnClick(x, y) {
    if (turn == 0 && board[x][y] == null) {
        document.getElementById(x + "-" + y).innerHTML = playerOne;
        board[x][y] = playerOne;
        turn++;
    }
    else if (turn == 1 && board[x][y] == null) {
        document.getElementById(x + "-" + y).innerHTML = playerTwo;
        board[x][y] = playerTwo;
        turn--;
    }
    checkWin();
}
function checkWin() {
    for (let i = 0; i < 3; i++) {
        if (board[i][0] != null && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            let winner = board[i][0];
            alert(winner + " wins");
        }
        else if (board[0][i] != null && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            let winner = board[0][i];
            alert(winner + " wins");
        }
    }
    if (board[0][0] != null && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        let winner = board[0][0];
        alert(winner + " wins");
    }
    else if (board[0][2] != null && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        let winner = board[0][2];
        alert(winner + " wins");
    }
}
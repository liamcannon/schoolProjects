

let shoppingCart = {
    dogFood: 34.99,
    treats: 7.99,
    leash: 25.01,
    collar: 9.99,
    puppy: 450.00
};

function cashRegister(object) {
    let checkoutTotal = 0;

    for (let i in object) {
        checkoutTotal += object[i];
    }
    console.log(checkoutTotal);
}
function validateCreditCard(cardNumber) {
    if (isNaN(cardNumber)) {
        console.log("There are letters in the card Number");
        return false;
    }
    let toString = cardNumber.toString();
    let cardNum = toString.split("");
    let count = 0;
    let total = 0;
    if (cardNum.length < 16 || cardNum.length > 16) {
        console.log("The card length is greater or less than 16");
        return false;
    }
    for (let i = 0; i < cardNum.length - 1; i++) {
        total += parseInt(cardNum[i]);
        if (cardNum[i] == cardNum[i + 1]) {
            count++;
        }
        else
            count = 0;
    }
    if (count == 15) {
        console.log("The card contains the same number");
        return false;
    }
    else if (total < 16) {
        console.log("The total is less than 16");
        return false;
    }
    else if (cardNum[cardNum.length - 1] % 2 != 0) {
        console.log("The last number is Odd");
        return false;
    }
    else
        return true;
}

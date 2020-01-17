function getRates(currency) {
    fetch('https://api.exchangeratesapi.io/latest?base=' + currency)
        .then(res => res.json())
        .then(data => {
            let exchanges = document.getElementById('exchanges');
            let exchangeList = '';
            for(let [country, value] of Object.entries(data.rates)) {
                exchangeList += `<li>${country}: ${value}</li>`;
            }
            exchanges.innerHTML = exchangeList;
        });

}

window.onload = () => {
   const currencySelector = document.getElementById('currencySelect');
   currencySelector.addEventListener('change', event => {
       const newCurrency = event.target.value;
       getRates(newCurrency);
   });
}
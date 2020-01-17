window.onload = () => {
	const options = {
	  protocol: 'https',
	  cache: true,
	  timeout: 5 * 1000 // 5s
	}
	const P = new Pokedex.Pokedex(options);
    console.log(P);
//there were no berry pictures in the api feelsbadman
    P.getBerriesList({limit: 64}).then(response => {
        console.log(response);
        let berryNames = "";
        const berryList = response.results;
        berryList.forEach(berry => {
            berryNames = location.name;
            P.getBerryByName(berry.name).then(name => {
                let pickedBerry = document.getElementById("berriesList");
                let dataContainer = `<li class = "berryCard">`;
                dataContainer += `<h2 class = "berryName">${name.name}</h2>`;
                dataContainer += "</li>";
                pickedBerry.innerHTML += dataContainer;
            });
        });
    })
}
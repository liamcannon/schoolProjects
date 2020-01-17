window.onload = () => {
	const options = {
	  protocol: 'https',
	  cache: true,
	  timeout: 5 * 1000 // 5s
	}
	const P = new Pokedex.Pokedex(options);
	console.log(P);

    P.getItemsList({limit: 100}).then(response => {
        let itemNames = "";
        const itemsList = response.results;
        itemsList.forEach(item => {
            itemNames = item.name;
            P.getItemByName(itemNames).then(name => {
                console.log(name);
                let pickedItem = document.getElementById("itemList");
                let dataContainer = `<li class = "itemCard">`;
                dataContainer += `<img class = "itemCardImage" src = ${name.sprites.default} height = 150 width = 150/>`;
                dataContainer += `<h2 class = itemName>${name.names[2].name}</h2>`;
                dataContainer += `<p class = "itemDesc"> ${name.effect_entries[0].short_effect}`;
                dataContainer += "</li>";
                pickedItem.innerHTML += dataContainer;
            });
        });
    });

}   
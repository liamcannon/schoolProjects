window.onload = () => {
	const options = {
	  protocol: 'https',
	  cache: true,
	  timeout: 5 * 1000 // 5s
	}
	const P = new Pokedex.Pokedex(options);
	console.log(P);

	// Examples 
	// If you're stuck or don't know whats in your object, always console.log() the variable
	// Open up your console to see what i'm logging out

	// Fetching all pokemon
	// https://github.com/PokeAPI/pokeapi-js-wrapper#root-endpoints
	P.getPokemonsList({limit: 1000}).then(response => {
		console.log(response);
	});
	// I couldn't get the auto loading as page scrolls thing to work sorry sir 
	P.getPokemonsList({limit: 100}).then(response => {
		let pokeName = "";
		console.log(response);
		const pokemonList = response.results;
		pokemonList.forEach(element => {
			pokeName = element.name
			P.getPokemonByName(pokeName).then(pokemon => {
				chosenPokemon = document.getElementById("pokemonList");
				let dataContainer = `<li class = "pokeCard">`;
				dataContainer += `<img class = "pokeCardImage" src="${pokemon.sprites.front_default}" height = 200 width = 200/>`;
				dataContainer += `<h2 class = pokemonName>${pokemon.name}</h2>`;
				pokemon.types.forEach(type => {
					let typeClass = "";
					if(type.type.name == "fire") {
						typeClass = "fire";
					}
					else if(type.type.name== "grass") {
						typeClass = "grass";
					}
					else if(type.type.name == "water") {
						typeClass = "water";
					}
					else if(type.type.name == "poison") {
						typeClass = "poison";
					}
					else if(type.type.name == "electric") {
						typeClass = "electric";
					}
					else if(type.type.name == "dragon") {
						typeClass = "dragon";
					}
					else if(type.type.name == "fairy") {
						typeClass = "fairy";
					}
					else if(type.type.name == "ice") {
						typeClass = "ice";
					}
					else if(type.type.name == "rock") {
						typeClass = "rock";
					}
					else if(type.type.name == "ground") {
						typeClass = "ground";
					}
					else if(type.type.name == "steel") {
						typeClass = "steel";
					}
					else if(type.type.name == "psychic") {
						typeClass = "psychic";
					}
					else if(type.type.name == "dark") {
						typeClass = "dark";
					}
					else if(type.type.name == "normal") {
						typeClass = "normal";
					}
					else if(type.type.name == "fighting") {
						typeClass = "fighting";
					}
					else if(type.type.name == "bug") {
						typeClass = "bug";
					}
					else if(type.type.name == "ghost") {
						typeClass = "ghost";
					}
					else if(type.type.name == "flying") {
						typeClass = "flying";
					}
					dataContainer += `<p class= "${typeClass}"> ${type.type.name} </p>`;
				});
				dataContainer += "</li>";
				chosenPokemon.innerHTML += dataContainer;
			});
		});
	});

	// More lists of every type here 
	// https://github.com/PokeAPI/pokeapi-js-wrapper#list-of-supported-root-endpoints


	// Getting specific items, subset of items by grouping, etc
	// https://github.com/PokeAPI/pokeapi-js-wrapper#endpoints
}

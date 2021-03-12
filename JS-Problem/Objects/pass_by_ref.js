const spaceship = {
    homePlanet: 'Earth',
    color: 'silver'
};

let paintIt = obj => {
    obj.color = 'Gray';
}

paintIt(spaceship)

console.log(spaceship.color)
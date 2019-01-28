var Observable = require('FuseJS/Observable');

function CounterPage(){
	router.push("CounterPage");
	console.log("goto CounterPage");
}

function RespberryPi(){
	router.push("RespberryPi");
	console.log("goto RespberryPi");
}

function ARscreen(){
	router.push("ARscreen");
	console.log("goto ARscreen");
}

module.exports = {
	CounterPage : CounterPage,
	ARscreen : ARscreen,
	RespberryPi : RespberryPi
};
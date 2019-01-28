var Observable = require('FuseJS/Observable');


function back(){
	router.goBack();
	console.log("goto HomePage");
}

module.exports = {
	back : back
	
} 
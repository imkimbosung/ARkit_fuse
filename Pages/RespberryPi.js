var Observable = require('FuseJS/Observable');
var received = Observable();

function back(){
	router.goBack();
	console.log("goto HomePage");
}

var displayText = Observable("Waiting for data.."); // on data received this text will be changed
var sendText = Observable("");
var io=require("Modules/socket.io.2.0.js");
			 
var socket =io.connect('ws://6792549a.ngrok.io', { "forceBase64" : 1 });
socket.on('connect', function () { 
console.log("socket connected"); 
				 

});
 
// 			// on received "text"
// socket.on('text', function (text) { 
// 		//print received data in console log	
//  console.log(text); 				
//  // add received text to Observable variable
//  		displayText.value = text; 				  
//  });	

// 			// Emit function - send some data to server
//  function emitData(){
//  	socket.emit('textemit', "" + sendText);	// add "" to makes sure that is not sent as a object
// 	console.log("Emited data: " + sendText);
//  };		  
			
// module.exports = {
//  // display text observable
// displayText: displayText,
// // emit function
// emitData: emitData,
// // input text field
// sendText: sendText,

// back : back
			 
// }; 
function sensorData(){
    //console.log('UPID'); //Sign_in 함수가 호출되었는지 확인
 
	fetch('http://0030605e.ngrok.io/sensor',{method: 'GET', headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"}}).then(function(res){
		status=res.status;
		response_ok = res.ok;
	    return res.json();

	}).then(function(res){
		// console.log(JSON.stringify(res));
		// console.log(res);
		received.value = "Temperature = " + JSON.stringify(res[res.length -1].Temperature) + "   " + "Humidity = " + JSON.stringify(res[res.length -1].Umidita);

		console.log(JSON.stringify(res.Temperature) + " : " + JSON.stringify(res.Humidity));
		// console.log(response);
	}).catch(function(err){
		console.log(err);
	});
}


module.exports = {
	back : back,
	sensorData : sensorData,
	received : received
	
 } 
var Observable = require('FuseJS/Observable');
var received = Observable(0);
var count = 0;

function back(){
	router.goBack();
	console.log("goto HomePage");
}

function counter(){
    //console.log('UPID'); //Sign_in 함수가 호출되었는지 확인
    count = count + 1;
	fetch('http://58df6b50.ngrok.io/test',{method: 'POST', headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"}, body:"data="+count }).then(function(res){
		status=res.status;
		response_ok = res.ok;
	    return res.json();

	}).then(function(res){
		// console.log(JSON.stringify(res));
		// console.log(res);
		received.value = res;

		console.log("count = " + count);
		// console.log(response);
	}).catch(function(err){
		console.log(err);
	});
}

module.exports = {
	received : received,
	counter : counter,
	back : back
	
} 
const wzor = new RegExp("[0-9]{2}-[0-9]{3}");

function kodPocztowy() {
	let kod = document.getElementById("kod").value;
	if(kod.match(wzor)) {
		alert("Git");
	} else {
		alert("Błąd");
	}
}	

const wzorGen = new RegExp("AA([^B]|B[^B])*BB");

function gen() {
	let kod = document.getElementById("kod").value;
	
	kod.match(wzorGen) ? alert("Znalazło Gen") : alert("Błąd");
}

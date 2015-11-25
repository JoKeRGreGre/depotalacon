var nbrEssaits = 8;

var listeMots = ["tsalut", "ttrouver", "nnico", "jjs", "mmah", "eheheh"];
var cptErreurs = 0;
/* compteur erreur */
var cptLettreTrouve = 0;
var nbrLettreMots = 0;
var motATrouver = "";
/* mot que l'utilisateur doit trouver */
var motAAfficher = "";
/* mot que l'on display sur la mbed */

$(document).ready(function() {
	$('#lancerPendu').bind('click', function() {
		initPendu();
	});
	$('#submitLetter').bind('click', function() {
		var letter = $('#lettreAEnvoyer input').val();
		if (letter.length)
			checkLetter(letter);
		else
			pasAssezLettre();
		$('#lettreAEnvoyer input').val("");
	});
});

/* choisir le mot en random */
function initPendu() {

	/* on fait en sorte que les variables sont toujours reinitialise à l'appel de fonction... */
	cptErreurs = 0;
	/* compteur erreur */
	cptLettreTrouve = 0;
	nbrLettreMots = 0;
	motATrouver = "";
	/* mot que l'utilisateur doit trouver */
	motAAfficher = "";
	/* mot que l'on display sur la mbed */

	/* on chope le moit en random */
	motATrouver = listeMots[Math.floor((Math.random() * 10) % listeMots.length)];
	nbrLettreMots = motATrouver.length;

	for ( i = 0; i < nbrLettreMots; i++)
		motAAfficher += "_ ";
	console.log(motATrouver);
	/* pour afficher que les underscore sur le mbed */
	envoyerMotAAfficher();
	$('#lancerPendu, #rejouer').hide();
	$('#appli').fadeIn();
}

/* dit à l'utilisateur qu'il faut entrer une lettre */
function pasAssezLettre() {
	alert('Il faut entrer une lettre');
}

/* verifie que la lettre est presente. Si c'est le cas, on change les lettre dans le miot a afficher et on l'envois à la mbed. Sinon, on envoit a l'autre mbed le compteur d'erreur */
function checkLetter(letter) {
	console.log(letter);
	var index = motATrouver.indexOf(letter);

	/* si il n'y a pas de lettre dans la string */
	if (index == -1)
		envoiCompteurErreur();
	else {
		/* tant qu'il y a une lettre */
		while (index != -1) {
			cptLettreTrouve++;
			if (index != -1) {
				var array = motAAfficher.split(" ");
				array[index] = letter;
				motAAfficher = "";
				for ( i = 0; i < motATrouver.length; i++)
					motAAfficher += array[i] + " ";

			}
			index = motATrouver.indexOf(letter, index + 1);
		}

		if (cptLettreTrouve >= nbrLettreMots) {
			$('#appli').fadeOut();
			$('#lancerPendu, #rejouer').fadeIn();

		}
		envoyerMotAAfficher();
	}

}

/* envoit le mot a la mbed */
function envoyerMotAAfficher() {
	console.log(motAAfficher);
	$.ajax({
		type : "GET",
		url : "main?t=" + motAAfficher,
		dataType : 'application/octet-stream',
		success : function(msg) {
		},
		complete : function(xhr, textStatus) {
		}
	});
}

/* envois le compteur à la mbed */
function envoiCompteurErreur() {
	cptErreurs++;
	$.ajax({
		type : "GET",
		url : "main?nb_error=" + motAAfficher,
		dataType : 'application/octet-stream',
		success : function(msg) {
		},
		complete : function(xhr, textStatus) {
		}
	});
}

String.prototype.replaceAt = function(index, char) {
	var a = this.split("");
	a[index] = char;
	return a.join("");
}


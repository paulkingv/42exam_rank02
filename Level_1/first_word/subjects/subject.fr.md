Écrivez un programme qui prend une chaîne de caractères et affiche son premier mot, suivi d'une nouvelle ligne.

Un mot est une section de chaîne délimitée par des espaces/des tabulations ou par le début/la fin de la chaîne.

Si le nombre de paramètres n'est pas égal à 1, ou s'il n'y a pas de mots, affichez simplement une nouvelle ligne.

Exemples :

$> ./first_word "FOR PONY" | cat -e FOR$ $> ./first_word "this ... is sparta, then again, maybe not" | cat -e this$ $> ./first_word " " | cat -e $ $> ./first_word "a" "b" | cat -e $ $> ./first_word " lorem,ipsum " | cat -e lorem,ipsum$ $>

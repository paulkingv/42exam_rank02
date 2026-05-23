Nom de l'exercice  : repeat_alpha
Fichiers attendus  : repeat_alpha.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme nommé repeat_alpha qui prend une chaîne de caractères et l'affiche
en répétant chaque caractère alphabétique autant de fois que son indice alphabétique,
suivi d'une nouvelle ligne.

'a' devient 'a', 'b' devient 'bb', 'e' devient 'eeeee', etc...

La casse reste inchangée.

Si le nombre d'arguments n'est pas égal à 1, affichez simplement une nouvelle ligne.

Exemples :

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>

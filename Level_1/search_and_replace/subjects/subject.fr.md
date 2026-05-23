Nom de l'exercice  : search_and_replace
Fichiers attendus  : search_and_replace.c
Fonctions autorisées : write, exit
--------------------------------------------------------------------------------

Écrivez un programme nommé search_and_replace qui prend 3 arguments : le premier
est une chaîne dans laquelle remplacer une lettre (2e argument) par une autre (3e argument).

Si le nombre d'arguments n'est pas égal à 3, affichez simplement une nouvelle ligne.

Si le deuxième argument n'est pas présent dans la première chaîne,
le programme réécrit simplement la chaîne suivie d'une nouvelle ligne.

Exemples :
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

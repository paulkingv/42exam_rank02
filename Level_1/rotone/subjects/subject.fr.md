Nom de l'exercice  : rotone
Fichiers attendus  : rotone.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrivez un programme qui prend une chaîne de caractères et l'affiche en remplaçant chacune de ses
lettres par la suivante dans l'ordre alphabétique.

'z' devient 'a' et 'Z' devient 'A'. La casse reste inchangée.

La sortie sera suivie d'un \n.

Si le nombre d'arguments n'est pas égal à 1, le programme affiche un \n.

Exemple :

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upkjpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>

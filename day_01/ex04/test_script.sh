GREEN='\033[0;32m'
NOCOLOR='\033[0m'

make re
echo "${GREEN}Voici le texte de test:${NOCOLOR}"
cat test.txt
echo ""
echo "${GREEN}Test 1: remplacement des \"Je\" par \"cool\"${NOCOLOR}"
./Replace test.txt Je cool
echo "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo "${GREEN}Test 2: remplacement des \"e\" par \"#\"${NOCOLOR}"
./Replace test.txt e \#
echo "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo "${GREEN}Test 3: remplacement des \"tralala.\\nbisous.\" par \"AAAAAAAAAAHHHHHHHH\"${NOCOLOR}"
./Replace test.txt "tralala.
bisous." \"AAAAAAAAAAHHHHHHHH\"
echo "${GREEN}Resultat :${NOCOLOR}"
cat test.txt.replace
rm test.txt.replace
echo ""
echo "${GREEN}Test ERREURS: nom de fichier invalide${NOCOLOR}"
echo "./Replace fichier_qui_n_existe_pas Je cool"
./Replace fichier_qui_n_existe_pas Je cool
echo "${GREEN}Test ERREURS: str1 vide${NOCOLOR}"
echo "./Replace test.txt \"\" \"yo\""
./Replace test.txt "" "yo"
echo "${GREEN}Test ERREURS: 0 arguments${NOCOLOR}"
echo "./Replace"
./Replace
echo "${GREEN}Test ERREURS: Trop d'arguments${NOCOLOR}"
echo "./Replace test.txt \"\" \"yo\" cool salut"
./Replace test.txt \"\" \"yo\" cool salut
echo ""
echo "${GREEN}Executing make fclean${NOCOLOR}"
make fclean
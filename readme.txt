Présentation

Bonjour à tous,
Je m'appelle Nam, et je suis actuellement en formation DWWM où j'ai pu développer des compétences en programmation et en informatique. Aujourd'hui, je vais vous présenter un projet simple mais amusant que j'ai réalisé : un jeu Pierre-Feuille-Ciseaux (ShiFuMi) en langage C.


Synopsis

Le projet que je vais vous montrer est une implémentation du jeu Pierre-Feuille-Ciseaux. Ce jeu, aussi connu sous le nom de ShiFuMi, permet à deux joueurs ou à un joueur contre l'ordinateur de choisir l'un des trois gestes : pierre, feuille, ou ciseaux.
Le but est simple : chaque geste bat un autre geste selon des règles prédéfinies (pierre bat ciseaux, ciseaux bat feuille, feuille bat pierre). À la fin de chaque tour, le programme affiche le gagnant, et les scores sont comptabilisés. Le joueur peut aussi choisir de quitter la partie à tout moment, et les scores sont sauvegardés s'il joue contre l'ordinateur.


Cas d'utilisation

Voici un diagramme des cas d'utilisation qui montre les actions que l'utilisateur peut faire dans cette application :

    Le joueur entre son prénom.
    Le joueur choisit entre jouer contre un autre joueur ou contre l'ordinateur.
    Le joueur peut faire un choix parmi : Pierre, Feuille, ou Ciseaux.
    Le joueur peut quitter le jeu à tout moment.
    Le score du joueur est affiché à la fin.
    En mode contre l'ordinateur, le score est sauvegardé.


Stack technique

Mon projet utilise les technologies suivantes :

    Système d'exploitation : Développé et testé sous Debian.
    Compilateur : Utilisation de GCC pour compiler le programme.
    Langage de programmation : C pour l'ensemble du code.
    Bibliothèques standards C : Pour la gestion des entrées/sorties, manipulation des chaînes de caractères et gestion des fichiers.
    Éditeur de texte : Utilisation de VSCode pour écrire le code.


Explication du code
1. Fonctions principales

    joueur() : Cette fonction permet de lire et stocker l'entrée utilisateur, qui correspond au nom du joueur ou à ses choix de jeu.
    p_choix() : Cette fonction affiche les options du jeu (Pierre, Feuille, Ciseaux, ou Quitter) et récupère le choix de l'utilisateur, en le traduisant en une valeur entière. Elle gère aussi les entrées textuelles comme "pierre", "feuille", etc.
    handValueToString() : Cette fonction convertit les choix des joueurs (entiers) en chaînes de caractères pour une meilleure lisibilité des résultats à l'écran.

2. Jeu contre un autre joueur

    Le programme demande à chaque joueur de choisir une option (Pierre, Feuille, ou Ciseaux).
    Les résultats sont ensuite comparés, et le gagnant est affiché selon les règles du jeu.
    Le score est comptabilisé pour chaque joueur et affiché à chaque tour.

3. Jeu contre l'ordinateur

    Dans cette version, l'ordinateur fait un choix aléatoire (grâce à la fonction rand()). Le principe reste le même : l'utilisateur fait son choix, le programme affiche les résultats et les scores sont mis à jour.
    Le score du joueur est sauvegardé dans un fichier pour qu'il puisse être consulté lors des prochaines parties.

4. Gestion des fichiers

    Lorsque le joueur entre son prénom, le programme vérifie s'il existe un fichier de sauvegarde avec ce nom. Si oui, il récupère le score précédent.
    Après chaque tour contre l'ordinateur, le score est sauvegardé dans un fichier.


Difficultés rencontrées

    Nettoyage de l'écran : J'ai utilisé la commande system("clear") pour rendre l'affichage plus propre, mais cela peut poser des problèmes de portabilité sur certains systèmes.
    Sauvegarde des scores : La gestion des fichiers en C n'est pas toujours intuitive, et j'ai dû bien comprendre comment ouvrir, lire, écrire et fermer des fichiers correctement.


Améliorations futures

Pour l'avenir, voici quelques idées pour améliorer ce projet :

    Optimisation du code : Certains aspects comme la gestion des entrées utilisateur ou la structure des fonctions pourraient être améliorés pour rendre le code plus propre et maintenable.

Conclusion

Merci à tous de m'avoir écouté !
J'espère que ce projet simple mais amusant vous a plu. C'était un excellent exercice pour pratiquer les bases du langage C et la manipulation des fichiers.

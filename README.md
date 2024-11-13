# **libft**

## Description

**libft** est une bibliothèque C réalisée dans le cadre du projet **Libft** à l'école **1337 (42)**. Ce projet consiste à recréer un certain nombre de fonctions de la bibliothèque standard C, ainsi que de développer des fonctions utiles qui servent de base pour de futurs projets. Le but est de se familiariser avec les bases de la programmation en C et la gestion de la mémoire, ainsi que de comprendre le fonctionnement interne des fonctions courantes utilisées dans les systèmes Unix.

## Fonctions Implémentées

Le projet **libft** comprend les fonctions suivantes, réparties en différentes catégories :

### **1. Fonctions de gestion de la mémoire**
- `ft_memset` : Remplit une zone mémoire avec une valeur donnée.
- `ft_bzero` : Met une zone mémoire à zéro.
- `ft_memcpy` : Copie une zone mémoire dans une autre.
- `ft_memccpy` : Copie une zone mémoire jusqu'à un caractère donné.
- `ft_memmove` : Déplace une zone mémoire.
- `ft_memchr` : Cherche un caractère dans une zone mémoire.
- `ft_memcmp` : Compare deux zones mémoire.

### **2. Fonctions de gestion des chaînes de caractères**
- `ft_strlen` : Retourne la longueur d'une chaîne de caractères.
- `ft_strdup` : Duplique une chaîne de caractères.
- `ft_strcpy` : Copie une chaîne de caractères.
- `ft_strncpy` : Copie un certain nombre de caractères d'une chaîne.
- `ft_strcat` : Concatène deux chaînes de caractères.
- `ft_strncat` : Concatène un certain nombre de caractères d'une chaîne.
- `ft_strchr` : Cherche un caractère dans une chaîne.
- `ft_strrchr` : Cherche un caractère à partir de la fin dans une chaîne.
- `ft_strstr` : Cherche une sous-chaîne dans une chaîne.
- `ft_strnstr` : Cherche une sous-chaîne dans une chaîne avec une limite de caractères.
- `ft_strcmp` : Compare deux chaînes de caractères.
- `ft_strncmp` : Compare deux chaînes de caractères avec une limite de caractères.

### **3. Fonctions de conversion**
- `ft_atoi` : Convertit une chaîne de caractères en entier.
- `ft_itoa` : Convertit un entier en chaîne de caractères.

### **4. Fonctions utilitaires**
- `ft_isalpha` : Vérifie si un caractère est une lettre.
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalnum` : Vérifie si un caractère est alphanumérique.
- `ft_isascii` : Vérifie si un caractère est un caractère ASCII.
- `ft_isprint` : Vérifie si un caractère est imprimable.
- `ft_toupper` : Convertit un caractère en majuscule.
- `ft_tolower` : Convertit un caractère en minuscule.

### **5. Fonctions de gestion des listes chaînées**
- `ft_lstnew` : Crée un nouvel élément pour une liste chaînée.
- `ft_lstadd_front` : Ajoute un élément au début d'une liste chaînée.
- `ft_lstadd_back` : Ajoute un élément à la fin d'une liste chaînée.
- `ft_lstsize` : Retourne le nombre d'éléments dans une liste chaînée.
- `ft_lstlast` : Retourne le dernier élément d'une liste chaînée.
- `ft_lstiter` : Applique une fonction à chaque élément d'une liste chaînée.
- `ft_lstclear` : Libère toute la mémoire d'une liste chaînée.
- `ft_lstdelone` : Supprime un élément de la liste chaînée.

## Comment l'utiliser

### Compilation

Pour compiler la bibliothèque **libft**, il suffit de lancer la commande `make` dans le répertoire du projet.

```bash
$ make

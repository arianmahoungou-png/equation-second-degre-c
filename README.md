# Résolution d'équation du second degré (C)

Programme en langage C qui résout une équation du second degré de la forme **ax² + bx + c = 0**.
L'utilisateur saisit les coefficients `a`, `b` et `c`, et le programme affiche la solution.

## Fonctionnalités

- Calcul du discriminant : Δ = b² − 4ac
- Δ > 0 : deux racines réelles distinctes
- Δ = 0 : une solution unique (racine double)
- Δ < 0 : aucune solution réelle (ensemble vide)
- Détection du cas a = 0, qui n'est pas une équation du second degré

## Compilation et exécution

Avec GCC (la bibliothèque mathématique `-lm` est nécessaire pour `sqrt`) :

```bash
gcc main.c -o equation -lm
./equation
```

Avec Code::Blocks : ajouter `m` dans *Project → Build options → Linker settings → Link libraries*.

## Exemples

| Entrée (a b c) | Résultat |
|---|---|
| `2 3 1` | L'équation admet deux racines distinctes : -1.00 et -0.50 |
| `1 2 1` | L'équation admet une solution unique -1.00 |
| `1 0 1` | La solution de l'équation est l'ensemble vide |
| `0 2 3` | Syntax error : Ceci n'est pas une équation du second degré |

## Notions utilisées

Variables de type `double`, saisie avec `scanf`, structures conditionnelles `if / else if / else`, fonction `sqrt` de `math.h`.

## Auteur

Karledz Arian MAHOUNGOU – étudiant en génie informatique, Académie de Technologie et de Management (Pointe-Noire).
# equation-second-degre-c 
